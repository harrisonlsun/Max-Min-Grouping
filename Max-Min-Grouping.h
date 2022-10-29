/** Max-Min-Grouping.h
 *
 * Harrison Sun (sun.har@northeastern.edu)
 *
 * files: main.cpp, Max-Min-Grouping.cpp, Max-Min-Grouping.h
 *
 * This .cpp file contains the declaration of the Max-Min-Grouping class.
 *
 */

#pragma once

#include <iostream>
#include <vector>

/** MaxMinGrouping class
 * This class contains all of the data members necessary to implement the Max-Min Grouping problem.
 */

class MaxMinGrouping
{
public:
	/** This is the constructor for the MinMaxGrouping class.
	 * 
	 * @param int* A_array: A_array is the input array.
	 * @param int NumElements: NumElements is the number of elements in the input array.
	 * @param int Group: Group is the number of groups to partition the input array into.
	 * 
	 * @return N/A: No return for constructor.
	 */
	MaxMinGrouping(int* A_array, int NumElements, int Group);
private:
	std::vector<int> A; // This is the input array in vector form.
	int N; // This is the number of elements in array A.
	int M; // This is the number of groups to partition A into.
protected: /* No protected data members. */
};
