module NAND(
    output FN,
    input a, b, c, d);
    wire a1, b1, c1, d1, a2, a3, a4;
    nand GATE1(a1, a, a); 
    nand GATE2(b1, b, b);  
    nand GATE3(c1, c, c);  
    nand GATE4(d1, d, d);  
    nand GATE5(a2, a, b1);  
    nand GATE6(a3, c1, d1); 
    nand GATE7(a4, a1, d1); 
    nand GATE8(FN, a2, a3, a4);  
endmodule

module NOR(
    output FN,
    input a, b, c, d);
    wire a1, b1, c1, d1, a2, a3, a4;
    nor GATE9(a1, a, a);  
    nor GATE10(b1, b, b);  
    nor GATE11(c1, c, c);  
    nor GATE12(d1, d, d);  
    nor GATE13(a2, a, d1);  
    nor GATE14(a3, b1, d1); 
    nor GATE15(a4, a1, b1, c1); 
    nor GATE16(FN, a2, a3, a4);
endmodule

module module1;
    wire FN1, FN2;
    reg a, b, c, d;
    NOR nr(FN1, a, b, c, d);
    NAND np(FN2, a, b, c, d);
    initial begin
        $dumpfile("module1.vcd");
        $dumpvars(0, module1);
        a = 1'b0; b = 1'b0; c = 1'b0; d = 1'b0;
        #10 a = 1'b0; b = 1'b0; c = 1'b0; d = 1'b1;
        #10 a = 1'b0; b = 1'b0; c = 1'b1; d = 1'b0;
        #10 a = 1'b0; b = 1'b0; c = 1'b1; d = 1'b1;
        #10 a = 1'b0; b = 1'b1; c = 1'b0; d = 1'b0;
        #10 a = 1'b0; b = 1'b1; c = 1'b0; d = 1'b1;
        #10 a = 1'b0; b = 1'b1; c = 1'b1; d = 1'b0;
        #10 a = 1'b0; b = 1'b1; c = 1'b1; d = 1'b1;
        #10 a = 1'b1; b = 1'b0; c = 1'b0; d = 1'b0;
        #10 a = 1'b1; b = 1'b0; c = 1'b0; d = 1'b1;
        #10 a = 1'b1; b = 1'b0; c = 1'b1; d = 1'b0;
        #10 a = 1'b1; b = 1'b0; c = 1'b1; d = 1'b1;
        #10 a = 1'b1; b = 1'b1; c = 1'b0; d = 1'b0;
        #10 a = 1'b1; b = 1'b1; c = 1'b0; d = 1'b1;
        #10 a = 1'b1; b = 1'b1; c = 1'b1; d = 1'b0;
        #10 a = 1'b1; b = 1'b1; c = 1'b1; d = 1'b1;
    end
    initial #160 $finish;
endmodule
