Initialize a variable of type `double` in several ways:

1. Direct Initialization:
   ```c
   double myDouble = 3.14159;
   ```

2. Using Type Casting:
   ```c
   double myDouble = (double)3.14159;
   ```

3. Using Scientific Notation:
   ```c
   double myDouble = 1.23e4; // Equivalent to 1.23 * 10^4
   ```

4. Using Constants:
   ```c
   double myDouble = DBL_MAX; // Maximum value for double
   ```

5. Initializing with Other Variables:
   ```c
   int myInt = 42;
   double myDouble = (double)myInt;
   ```

It's important to note that C allows implicit conversion from `int` to `double`, so you don't always need to explicitly cast an integer to a double when initializing. However, explicit casting can be used for clarity or when converting between different types.