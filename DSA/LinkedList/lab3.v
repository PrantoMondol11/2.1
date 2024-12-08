module half_adder (
    output S,  
    output C,  
    input x,   
    input y    
);
    xor (S, x, y);  
    and (C, x, y);  
endmodule

module full_adder (
    output S,  
    output C,  
    input x,   
    input y,   
    input z    
);
    wire S1, C1, C2;

    half_adder HA1 (S1, C1, x, y);  
    half_adder HA2 (S, C2, S1, z);   
    or G1 (C, C2, C1);              
endmodule

module adder_subtractor_3bit (
    output [2:0] result,   
    output carry_out,      
    output overflow,       
    input [2:0] A, B,      
    input op // Operation control (0 = add, 1 = subtract)
);
    wire [2:0] B_input;     
    wire carry_in;          
    wire C1, C2, C3;        

    // Use XOR for two's complement subtraction and normal addition
    assign B_input = B ^ {3{op}}; // Flip all bits of B when op = 1 (subtraction)
    assign carry_in = op;         // carry_in is 1 for subtraction, 0 for addition

    // Full adder instances
    full_adder FA0 (result[0], C1, A[0], B_input[0], carry_in);
    full_adder FA1 (result[1], C2, A[1], B_input[1], C1);
    full_adder FA2 (result[2], C3, A[2], B_input[2], C2);

    // Overflow detection logic 
    assign overflow = (C2 ^ C3);  // Overflow occurs when carry-in and carry-out of MSB differ

    // Carry-out logic (for addition only)
    assign carry_out = (op == 0) ? C3 : 0; 

endmodule

// Testbench 
module t_adder_subtractor_3bit;
    wire [2:0] result;
    wire carry_out, overflow;
    reg [2:0] A, B;
    reg op;

    adder_subtractor_3bit AS3b (
        .result(result), 
        .carry_out(carry_out), 
        .overflow(overflow), 
        .A(A), 
        .B(B), 
        .op(op)
    );

    initial begin
         A=3'b000; B=3'b000 ; op=0;
        // Test Cases 
        #10 A = 3'b101; B = 3'b011; op = 0;  // Addition: 101 + 011
        #10 A = 3'b101; B = 3'b011; op = 1;  // Subtraction: 101 - 011
        #10 A = 3'b011; B = 3'b101; op = 1;  // Subtraction: 011 - 101
        #10 A = 3'b111; B = 3'b000; op = 0;  // Addition: 111 + 000
        #10 A = 3'b111; B = 3'b000; op = 1;  // Subtraction: 111 - 000
        #10 A = 3'b000; B = 3'b111; op = 1;  // Subtraction: 000 - 111
        #10 A = 3'b101; B = 3'b101; op = 0;  // Addition: 101 + 101
        #10 A = 3'b101; B = 3'b101; op = 1;  // Subtraction: 101 - 101
    end

    initial begin
        // Monitor the results
        $monitor("A = %3b, B = %3b, op = %b, result = %3b, carry_out = %b, overflow = %b", 
                  A, B, op, result, carry_out, overflow);
    end
    
    initial #100 $finish; 
endmodule