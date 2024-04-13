# Structured_programming_Basics\time_table
This code is used to print the times table for a given number. Here's an explanation of the code:
1.	An integer variable n is declared to store the user input.
2.	The printf() function is called to display the message "Enter a number:" on the console.
3.	The scanf() function is used to read the user input and store it in the variable.
4.	The printf() function is called to display the message "Time Table of [n]:", where [n] is the user input.
5.	A for loop is used to print the times table from 1 to 10 for the input number.
6.	The loop starts with an integer variable i initialized to 1.
7.	The loop condition is '1 <= 10', which will always be true.
8.	In each iteration of the loop, the printf function is called to print the multiplication table of 'n', ranging from 1 to 10.
9.	The loop variable i is used to print the number being multiplied with 'n'.
10.	The loop counter i is incremented by 1 in each iteration.
11.	The program returns 0 to the calling process to indicate successful execution.


# Structured_programming_Basics\two_swap
This is a C program to swap two numbers without using a third variable. Here's an explanation of this code:

1. The program includes the standard input/output header file `stdio.h`.

2. Two functions `add()` and `sub()` are defined which can perform addition and subtraction operations independently.

3. In `add()` function, two integer values `a` and `b` are passed as parameters and the sum of these two numbers is returned.

4. In `sub()` function, two integer values `a` and `b` are passed as parameters and the difference between these two numbers is returned.

5. The `main()` function is defined with no parameters.

6. Two integer variables `a` and `b` are declared to store the user entered values.

7. The user is prompted to enter the first number using `printf()` function.

8. The value entered by the user is read using the `scanf()` function and stored in the `a` variable.

9. The user is prompted to enter the second number using `printf()` function.

10. The value entered by the user is read using the `scanf()` function and stored in the `b` variable.

11. The values of the entered numbers are printed on the console before the numbers are swapped using `printf()` function.

12. `a` variable is assigned the sum of `a` and `b` using the `add()` function.

13. `b` variable is assigned the difference between `a` and `b` using the `sub()` function.

14. `a` variable is assigned the difference between `a` and `b` using the `sub()` function.

15. The final values of the swapped numbers are printed on the console using `printf()` function.

16. The `return` statement is used to return 0 to the operating system to indicate successful execution of the program.

So, when you run the program, you will be prompted to enter two numbers. After entering the numbers, the program will swap the values of these two numbers without using a third variable and print the final values of the swapped numbers on the console.



# Structured_programming_Basics\sum.c
This is a C program to compute the sum of digits of a three-digit number entered by the user. Here's an explanation of this code:

1. The program includes the standard input/output header file `stdio.h`.

2. The `main()` function is defined with no parameters.

3. `num`, `sum`, and `rem` are declared as integers to store the user entered three-digit number, the sum of its digits and the remainder of the division by 10 respectively.

4. The user is prompted to enter a three-digit number using `printf()` function.

5. The value entered by the user is read using the `scanf()` function and stored in the `num` variable.

6. The first digit of the entered number is calculated by taking the remainder of the number divided by 10 and it is stored in the `rem` variable. Then it is added to the `sum` variable to accumulate the sum of digits.

7. The first digit is removed from the number by dividing the number by 10 and the quotient is stored in the `num` variable.

8. Steps 6-7 are repeated two more times to calculate the remaining digits of the entered number and their sum.

9. The `printf()` function is used to print the final value of the `sum` variable calculated in the above steps.

10. The `return` statement is used to return 0 to the operating system to indicate successful execution of the program.

So, when you run the program, you will be prompted to enter a three-digit number and after entering the number, the program will calculate the sum of its digits and print the result on the console.



# Structure_programing_Basics\star.c
This C program prints a star pattern in the form of a pyramid. It defines the number of rows for the pyramid (`rows`) and uses two nested for loops to print the stars and spaces for each row. Here's an explanation of each part of the program:

1. The program includes the standard input/output header file `stdio.h`.

2. The `main` function is defined with no parameters.

3. The program initializes the number of rows (`rows`) to 4.

4. The program calculates the initial number of spaces (`space`) and initial number of stars (`star`) for the first row of the pyramid.

5. The program uses two nested for loops to print the upper half of the pyramid. The outer loop (`i`) iterates from 1 to `(rows * 2 - 1)` (which is the total number of rows in the upper half of the pyramid). The inner loop (`j`) prints the spaces and stars for each row. The first inner loop (`j`) prints the spaces (which start at `space` and decrease by 1 for each row). The second inner loop (`j`) prints the stars (which start at `star` and increase by 2 for each row).

6. The program uses an `if` statement to determine when it has reached the middle row of the pyramid. Once this middle row is reached, the program reverses the order of the outer loop (`i`), and adjusts the number of spaces and stars accordingly.

7. The program returns 0 to indicate successful execution.

8. The pattern is printed on the console with spaces and asterisks.

So, When you run this program, it will print the star pattern in the form of a pyramid.


# Structure_programing_Basics\pyramid.c
This code prints a Pyramid pattern in C where the user can specify the number of rows in the pyramid. The pattern is printed with spaces to create an indentation. Here's a detailed explanation of the code:

1. The code starts with including the standard input/output library header file `stdio.h`.

2. The `main()` function is defined with no parameters.

3. `rows`, `i`, `j`, and `space`, are declared as integers to store the number of rows in the pyramid, and loop iteration values along with space to maintain the indentation.

4. The user is prompted to enter the number of rows using `printf()` function, and the value is read using `scanf()` function and stored in the variable `rows`.

5. There is an outer loop which iterates from `i = 1` to `i = rows`. This loop is responsible for printing every row in the pyramid.

6. Before printing the pyramid numbers, spaces are printed to create an indentation. This is done with another inner loop that iterates from `space = 1` to `space = rows - i`.

7. The first pyramid number `1` is printed using another inner loop with `j = 1` and iterate until `j = i`.

8. Finally, another inner loop is used to print the second half of the row with `j = i - 1` and iterate until `j = 1` to complete the pyramid pattern.

9. After printing every row in the pyramid pattern, a newline character is printed using the `printf()` function to move to the next line.

10. At last, the `return` statement is used to return 0 to the operating system to indicate successful execution of the program.

So, when you run the program, you will see a Pyramid pattern printed on the console with the specified number of rows with spaces in each row to create an indentation.

# Structure_programing_Basics\reverse.c
This is a C program that reverses the digits of a three-digit number entered by the user. Here's a brief explanation of how it works:

1. The program first declares three integer variables: `a`, `b`, and `n`.

2. The user is prompted to enter a three-digit number. The number is read into `n` using the `scanf` function.

3. The program then uses division and modulo operators to separate `n` into its three digits: `a`, which contains the first digit, `b`, which contains the second digit, and `n`, which contains the third digit.

4. The program then uses `printf` to output the digits in reverse order by printing `n`, followed by `b`, followed by `a`.

5. The `main` function returns 0 to indicate successful execution.
