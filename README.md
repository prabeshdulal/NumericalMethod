# NumericalMethod
some algorithm and code of numerical method

### Algorithm: Bisection Method

1. Start

2. Function Definition
   function f(x) - Define the function for which you want to find the root.

3. Function bisection(a, b, error)
   Input: a, b (interval [a, b] where the root lies), error (desired precision)
   Output: c (the estimated root)

   3.1. Check 
   ```
   if( f(a) * f(b) >= 0){
           print "Error: One of the interval endpoints must be negative.";
            Return NaN (Not a Number).
   }
  
       
   ```
   3.3. Set c = a

   3.4. While (b - a) / b >= error:

       3.4.1. Set c = (a + b) / 2

       3.4.2. Check if f(c) == 0.0:
              If true, break the loop.

       3.4.3. Else if f(c) * f(a) < 0:
              Set b = c

       3.4.4. Else:
              Set a = c

   3.5. Return c as the estimated root.

5. Function Main()

   4.1. Declare variables a, b, error, and root.

   4.2. Input interval [a, b] and the desired precision (error).

   4.3. Call the bisection function with arguments a, b, and error, and store the result in root.

   4.4. Check if the result is a valid number (not NaN).
   
       4.4.1. If true, print "Root = " + root.
       4.4.2. Else, print "Error."

6. End

