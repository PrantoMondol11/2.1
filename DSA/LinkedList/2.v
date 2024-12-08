module NAND(
    output FNAND,
    input w, x, y, z);
    wire w_inv, x_inv, y_inv, z_inv, temp1, temp2, temp3;
    
    nand G1(w_inv, w, w); 
    nand G2(x_inv, x, x);  
    nand G3(y_inv, y, y);  
    nand G4(z_inv, z, z);  
    nand G5(temp1, w, x_inv);  
    nand G6(temp2, y_inv, z_inv); 
    nand G7(temp3, w_inv, z_inv); 
    
    nand G8(FNAND, temp1, temp2, temp3);  
endmodule

module NOR(
    output FNOR,
    input w, x, y, z);
    wire w_inv, x_inv, y_inv, z_inv, temp1, temp2, temp3;
    
    nor G1(w_inv, w, w);  
    nor G2(x_inv, x, x);  
    nor G3(y_inv, y, y);  
    nor G4(z_inv, z, z);  
    nor G5(temp1, w, z_inv);  
    nor G6(temp2, x_inv, z_inv); 
    nor G7(temp3, w_inv, x_inv, y_inv); 
    
    nor G8(FNOR, temp1, temp2, temp3);
endmodule

module t_module;
    wire FNOR, FNAND;
    reg w, x, y, z;

    NOR nr(FNOR, w, x, y, z);
    NAND np(FNAND, w, x, y, z);

    initial begin
        $dumpfile("t_modules.vcd");
        $dumpvars(0, t_module);

            w = 1'b0; x = 1'b0; y = 1'b0; z = 1'b0;
        #10 w = 1'b0; x = 1'b0; y = 1'b0; z = 1'b1;
        #10 w = 1'b0; x = 1'b0; y = 1'b1; z = 1'b0;
        #10 w = 1'b0; x = 1'b0; y = 1'b1; z = 1'b1;
        #10 w = 1'b0; x = 1'b1; y = 1'b0; z = 1'b0;
        #10 w = 1'b0; x = 1'b1; y = 1'b0; z = 1'b1;
        #10 w = 1'b0; x = 1'b1; y = 1'b1; z = 1'b0;
        #10 w = 1'b0; x = 1'b1; y = 1'b1; z = 1'b1;
        #10 w = 1'b1; x = 1'b0; y = 1'b0; z = 1'b0;
        #10 w = 1'b1; x = 1'b0; y = 1'b0; z = 1'b1;
        #10 w = 1'b1; x = 1'b0; y = 1'b1; z = 1'b0;
        #10 w = 1'b1; x = 1'b0; y = 1'b1; z = 1'b1;
        #10 w = 1'b1; x = 1'b1; y = 1'b0; z = 1'b0;
        #10 w = 1'b1; x = 1'b1; y = 1'b0; z = 1'b1;
        #10 w = 1'b1; x = 1'b1; y = 1'b1; z = 1'b0;
        #10 w = 1'b1; x = 1'b1; y = 1'b1; z = 1'b1;
    end

    initial #160 $finish;
endmodule