/** Max-Min-Grouping.h
 *
 * Harrison Sun (sun.har@northeastern.edu)
 *
 * files: main.cpp, Max-Min-Grouping.h, d_except.h, d_matrix.h
 *
 * This .h file contains the declaration and definition of the Max-Min-Grouping function.
 *
 */

#pragma once
 /* These libraries are included via d_matrix.h but are shown here for clarity. 
	#include <iostream>
	#include <vector>
*/
#include "d_except.h" /* Exception Handling for Try, Throw, Catch */
#include "d_matrix.h" /* 2D Vectorized Matrix */

std::vector<int> MaxMinGrouping(int* A, int N, int M)
{
	/* declare vectors to represent the arrays */
	// B: This vector represents the sum of the groups.
	std::vector<int> B; 
	B.clear();
	// C: This matrix represents the minimum elements of B described by Gopt[1,...,j]
	matrix<int> C(M+1, N+1, 0); // c.rows = M+1, c.cols = N+1
	// P: This matrix represents the "pointer" array P where the "pointer" is actually an integer representing the position in the array.
	matrix<int> P(M+1, N+1, 0); // p.rows = M+1, p.cols = N+1
	// G: The output vector G represents the number of elements in group i.
	std::vector<int> G;
	G.clear();

	// print the input array
	std::cout << "The input array is:\n";
	for (int i = 0; i < N; i++)
	{
		std::cout << A[i] << " ";
	} std::cout << "\n\n";

	std::cout << "It is being split into " << M << " groups.\n\n";

	// the first row of C is the sum of A up to element i
	for (int i = 1; i <= N; i++)
	{
		if (i == 1)
			C[1][i] = A[i-1];
		else
			C[1][i] = A[i - 1] + C[1][i - 1];
	}

	// cycle through the rest of the rows of C
	for (int i = 2; i <= M; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			// initialize the maximum value to the minimum possible value
			int max = INT_MIN;
			// cycle through the elements in the row
			for (int k = 1; k <= j; k++)
			{
				// find the maximum value of the minimum of the previous row and the sum of the current row
				if (std::min(C[i - 1][k], C[1][j] - C[1][k]) > max)
				{
					max = std::min(C[i - 1][k], C[1][j] - C[1][k]);
					P[i][j] = k;
				}
			}
			C[i][j] = max;
		}
	}

	// print the matrix C
	std::cout << "Printing the matrix C: \n";
	for (int i = 1; i <= M; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			std::cout << C[i][j] << "\t";
		}
		std::cout << "\n";
	} std::cout << std::endl;

	// print the matrix P
	std::cout << "Printing the matrix P: \n";
	for (int i = 1; i <= M; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			std::cout << P[i][j] << "\t";
		}
		std::cout << "\n";
	} std::cout << std::endl;

	// fill in vector G by cycling through the matrix P from the bottom right corner
	int i = M;
	int j = N;
	int bounds = 0;
	G.resize(M);
	while (i > 0 && j > 0)
	{
		bounds = P[i][j];
		// G.push_back(j - bounds); /* This causes G to be backwards */
		G[i-1] = j - bounds;
		j = bounds;
		i--;
	}
	
	// print the vector G
	std::cout << "Printing the vector G: \n";
	for (int i = 0; i < G.size(); i++)
	{
		std::cout << G[i] << "\t";
	} std::cout << "\n\n";
	
	// vector B is the sum of the groups
	for (int i = 1; i <= M; ++i)
	{
		int sum = 0;
		int count = 0;
		for (int iter = 0; iter < i; iter++)
		{
			count += G[iter];
		}
		for (int j = 0; j < count; ++j)
		{
			sum += A[j];
		}
		B.push_back(sum);
	}
	
	// currently, B contains the sum of all elements up to the boundary
	// subtract iterating backwards through B
	for (int i = B.size() - 1; i > 0; --i)
	{
		B[i] = B[i] - B[i - 1];
	}

	// print the vector B
	std::cout << "Printing the vector B: \n";
	for (int i = 0; i < B.size(); i++)
	{
		std::cout << B[i] << "\t";
	} std::cout << "\n\n";
	return G;
}