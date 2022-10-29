# Max-Min-Grouping
This program takes an input array and determines the optimal grouping such that the minimum summation of each group is maximized. This code was written to demonstrate the principles of dynamic programming.

## Test Cases

{ 3,9,7,8,2,6,5,10,1,7,6,4 } M = 1, 3, 12

{ 1,1,1,1,1,1,1,1,1,1,1,1 } M = 4

## Results

The input array is:  
3 9 7 8 2 6 5 10 1 7 6 4

It is being split into 3 groups.

Printing the matrix C:  
3       12      19      27      29      35      40      50      51      58      64      68  
0       3       7       12      12      16      19      23      24      29      29      33  
0       0       3       7       7       8       12      15      16      18      19      19  

Printing the matrix P:  
0       0       0       0       0       0       0       0       0       0       0       0  
1       1       2       2       2       3       3       4       4       5       5       6  
1       1       2       3       3       4       4       6       6       7       7       7  

Printing the vector G:  
3       4       5

Printing the vector B:  
19      21      28

The ideal grouping for the array is defined by G:  
3 4 5

===========================================================================

The input array is:  
3 9 7 8 2 6 5 10 1 7 6 4

It is being split into 1 groups.

Printing the matrix C:  
3       12      19      27      29      35      40      50      51      58      64      68  

Printing the matrix P:  
0       0       0       0       0       0       0       0       0       0       0       0  

Printing the vector G:  
12

Printing the vector B:  
68

The ideal grouping for the array is defined by G:  
12

===========================================================================

The input array is:  
3 9 7 8 2 6 5 10 1 7 6 4

It is being split into 12 groups.

Printing the matrix C:  
3       12      19      27      29      35      40      50      51      58      64      68  
0       3       7       12      12      16      19      23      24      29      29      33  
0       0       3       7       7       8       12      15      16      18      19      19  
0       0       0       3       3       7       7       10      11      12      14      16  
0       0       0       0       2       3       5       7       7       8       11      11  
0       0       0       0       0       2       3       5       5       7       7       8  
0       0       0       0       0       0       2       3       3       5       6       7  
0       0       0       0       0       0       0       2       2       3       5       5  
0       0       0       0       0       0       0       0       1       2       3       4  
0       0       0       0       0       0       0       0       0       1       2       3  
0       0       0       0       0       0       0       0       0       0       1       2  
0       0       0       0       0       0       0       0       0       0       0       1  

Printing the matrix P:  
0       0       0       0       0       0       0       0       0       0       0       0  
1       1       2       2       2       3       3       4       4       5       5       6  
1       1       2       3       3       4       4       6       6       7       7       7  
1       1       1       3       3       4       4       7       7       7       8       9  
1       1       1       1       4       4       6       6       6       8       9       9  
1       1       1       1       1       5       6       7       7       8       8       10  
1       1       1       1       1       1       6       7       7       8       10      10  
1       1       1       1       1       1       1       7       7       8       10      10  
1       1       1       1       1       1       1       1       8       8       10      11  
1       1       1       1       1       1       1       1       1       9       10      11  
1       1       1       1       1       1       1       1       1       1       10      11  
1       1       1       1       1       1       1       1       1       1       1       11  
  
Printing the vector G:  
1       1       1       1       1       1       1       1       1       1       1       1

Printing the vector B:  
3       9       7       8       2       6       5       10      1       7       6       4

The ideal grouping for the array is defined by G:  
1 1 1 1 1 1 1 1 1 1 1 1

===========================================================================

The input array is:  
1 1 1 1 1 1 1 1 1 1 1 1

It is being split into 4 groups.

Printing the matrix C:  
1       2       3       4       5       6       7       8       9       10      11      12  
0       1       1       2       2       3       3       4       4       5       5       6  
0       0       1       1       1       2       2       2       3       3       3       4  
0       0       0       1       1       1       1       2       2       2       2       3  

Printing the matrix P:  
0       0       0       0       0       0       0       0       0       0       0       0  
1       1       1       2       2       3       3       4       4       5       5       6  
1       1       2       2       2       4       4       4       6       6       6       8  
1       1       1       3       3       3       3       6       6       6       6       9  

Printing the vector G:  
3       3       3       3

Printing the vector B:  
3       3       3       3

The ideal grouping for the array is defined by G:  
3 3 3 3
