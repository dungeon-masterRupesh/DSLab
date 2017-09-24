Effect of Cache On Runtime::

We'll try to demonstrate the effect of cache on runtime using two simple examples.
(inspired from Chapter 4 of Sartaj Sahni)

(A) Matrix addition

    Write a program (name it add.cpp) to find the sum of two given matrices and store it in a new matrix.
    (Assume that the dimensions of the given matrices are such that addition is possible and no dimension is greater than 1000!!)

    Now try to swap the order of the two for loops written.
    Measure the time taken for execution of the program in the above two cases. (for EACH of files large1.in,
    large2.in and large3.in under the testcases/add directory) 
    What do you think happens to the execution time? 
    Which order of for loops is better and why do you think so?

    (Note down your observations along with the recorded times in the report.txt file. If the execution time
    for a particular input varies too much,take the average over some instances !!)

    Input format of given testcases ::

    <num_rows_matrix_1> <num_columns_matrix_1>
    <elements_of_matrix_1> (rows separated by a line and columns separated by a space)
    <num_rows_matrix_2> <num_columns_matrix_2>
    <elements_of_matrix_2>

    Output format ::

    <num_rows_ans> <num_columns_ans>
    <elements_of_ans> (rows separated by a line and columns separated by a space)

    (refer small test case files in case for clarification)

(B) Matrix multiplication

    Write a program (name it mul.cpp) to find the product of two given matrices and store it in a new matrix.
    (Assume that the dimensions of the given matrices are such that multiplication is possible no dimension is greater than 1000 !!)

    Now permute the three for loops in all possible permutations. (Say your initial order is ijk, then other 5 orders are - ikj, jik, jki, kij, kji)

    Measure the time taken for execution of the program in the above cases. (for ANY TWO of files large1.in,
    large2.in and large3.in under the testcases/multiply directory) 
    What do you think happens to the execution time? 
    Which order of for loops is better and why do you think so? (Just identify the permutation which takes the least time and explain why this happens)

    (Note down your observations and the recorded times as in (A) in the report.txt file)
    (Similar input output format)

    [ Think !!:: The standard matrix multiplication method takes O(n^3) time where n is the approximate size of row/column. 
    (i) Can you think of faster methods of matrix multiplication ;) 
    (ii) Given three matrices A,B and C can you verify if C = A*B faster than the usual O(n^3) algorithm ?!]
 
Files to be submitted for this task :

add.cpp,mul.cpp,report.txt

NOTE :

- Use time ./a.out to find the execution time of your program.
- To take input from a file (say my.in) use ./a.out < my.in
- To redirect output to a file (say my.out) use ./a.out > my.out
- You can use the above things in combination like time ./a.out < my.in > my.out