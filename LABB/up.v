module Lab_Test6_Up(output A2,A1,A0,input CLK, Reset);
    
Comp_D_flip_flop F0 (A0, CLK, Reset);
Comp_D_flip_flop F1 (A1, A0, Reset);
Comp_D_flip_flop F2 (A2, A1, Reset);

endmodule


module Lab_Test6_Down(output A2,A1,A0,input CLK, Reset);
    
     Comp_D_flip_flop F0 (A0, ~CLK, Reset);
   Comp_D_flip_flop F1 (A1, ~A0, Reset);
   Comp_D_flip_flop F2 (A2, ~A1, Reset);

endmodule

module Comp_D_flip_flop (Q, CLK, Reset);
   output Q;
   input CLK, Reset;
   reg Q;
   always @ ( negedge CLK, posedge Reset)
   if (Reset) 
     Q <= 1'b0;
   else
  
     Q <=  ~Q;
endmodule

module t_Lab_Test6;
   reg CLK;
  reg Reset;
  wire [2:0] A;
  wire [2:0] B;
  
   Lab_Test6_Up N (A[2], A[1], A[0], CLK, Reset);
   Lab_Test6_Down P (B[2], B[1], B[0], CLK, Reset);  
  
  initial 
    begin
      $dumpfile("t_Lab_Test6.vcd");
      $dumpvars(0, t_Lab_Test6);
    end 
   initial #170 $finish;   
     initial
       begin
         CLK = 1'b0;
         repeat(33)
           #5 CLK = ~CLK; 
        end
  initial
   begin
     #4 Reset = 1'b0;
    #4 Reset = 1'b1;
        #4 Reset = 1'b0; 
   end
endmodule