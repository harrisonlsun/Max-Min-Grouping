/** main.cpp
 *
 * Harrison Sun (sun.har@northeastern.edu)
 * 
 * files: main.cpp, Max-Min-Grouping.h, d_except.h, d_matrix.h
 * 
 * This program is a solution to the Max-Min Grouping problem. It takes some input array A[1,...,N] and partitions it into M groups, such that the minimum sum of any partition M is maximized.
 * 
 */

#include "Max-Min-Grouping.h"

/** This is the main function. 
 * @param int argc: argc is an optional argument that is the number of arguments passed to the program from the console.
 * @param char* argv[]: argv is an optional argument that is an array of strings that are the arguments passed to the program from the console.
 * 
 * @return int: This function returns 0 if the program runs successfully.
 */

int main(int argc, char* argv)
{
	int A[] = {3,9,7,8,2,6,5,10,1,7,6,4}; // N = 12
	std::vector<int> Answer1 = MaxMinGrouping(A, 12, 3);
		std::cout << "The ideal grouping for the array is defined by G:\n";
		for (int i = 0; i < Answer1.size(); i++)
		{
			std::cout << Answer1[i] << " ";
		} std::cout << "\n\n";
		
		std::cout << "============================================================================================\n\n";
	
	std::vector<int> Answer2 = MaxMinGrouping(A, 12, 1);
		std::cout << "The ideal grouping for the array is defined by G:\n";
		for (int i = 0; i < Answer2.size(); i++)
		{
			std::cout << Answer2[i] << " ";
		} std::cout << "\n\n";

		std::cout << "============================================================================================\n\n";
		
	std::vector<int> Answer3 = MaxMinGrouping(A, 12, 12);
		std::cout << "The ideal grouping for the array is defined by G:\n";
		for (int i = 0; i < Answer3.size(); i++)
		{
			std::cout << Answer3[i] << " ";
		} std::cout << "\n\n";

		std::cout << "============================================================================================\n\n";

	int B[] = { 1,1,1,1,1,1,1,1,1,1,1,1 }; // N = 12 
	std::vector<int> Answer4 = MaxMinGrouping(B, 12, 4);
		std::cout << "The ideal grouping for the array is defined by G:\n";
		for (int i = 0; i < Answer4.size(); i++)
		{
			std::cout << Answer4[i] << " ";
		} std::cout << "\n\n";	
	
	return 0;
}