from sympy import symbols, sympify, lambdify, sin, cos, exp, log, pi, E

def euler_method(x0, y0, x_end, h, func_expr):
    x, y = symbols("x y") 
    func = lambdify((x, y), func_expr, "math")  
  
    current_x = x0
    current_y = y0

    print("x\t\ty")
    print(f"{current_x:.4f}\t{current_y:.4f}")

   
    while current_x < x_end:
        current_y += h * func(current_x, current_y) 
        current_x += h  

        print(f"{current_x:.4f}\t{current_y:.4f}")

def main():
   
    try:
        x0 = float(input("Enter initial x value (x0): "))
        y0 = float(input("Enter initial y value (y0): "))
        x_end = float(input("Enter end x value (x_end): "))
        h = float(input("Enter step size (h): "))

       
        func_str = input("Enter the function f(x, y) in terms of x and y (e.g., '2*x + 3*y', 'sin(x) + 4*y'): ")

        
        func_expr = sympify(func_str, locals={"x": symbols("x"), "y": symbols("y"), "pi": pi, "e": E, "sin": sin, "cos": cos, "exp": exp, "log": log})

      
        euler_method(x0, y0, x_end, h, func_expr)

    except Exception as e:
        print("An error occurred:", e)

if __name__ == "__main__":
    main()
