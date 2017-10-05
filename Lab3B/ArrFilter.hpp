/*
 * ArrFilter.hpp
 *
 *  Created on: Sep 30, 2017
 *      Author: ryan
 */

#ifndef ARRFILTER_HPP_
#define ARRFILTER_HPP_

class ArrFilter{
	private:
		int size;		// Length of the array.
		int hi;			// Maximum value of the array.
		int low;		// Minimum value of the array.
		int *array;		// The array.
		int *farray;	// Filtered array.

		int hanningWindow(int arr[]);
		/*	Helper function used in filterArray() to weight and average the first 5 values of a given array.
		 * 	Parameters:	arr[]: An array of integers to be evaluated.
		 */

		void fillArray(int arr[], int len, int h, int l);
		/*	Helper function used in randArrayV2() to recursively fill a given array of integers with values
		 * 	based on the given high and low value.
		 * 	Parameters: arr[]: Array of integers to be filled.
		 * 			  	len: Length of the given array.
		 * 			  	h: High value to be used.
		 * 			   	l: Low value to be used.
		 */

	public:
		ArrFilter();
		/*	Initializes an ArrFilter with NULL values for array and farray, and 0 for size, hi, and low.
		 */

		void randArray();
		/* 	Sets an array of integers in the array field with a length between 25 and 50 (excluding 50). The
		 * 	array will have a high value between 5 to 10 (excluding 10) and low value between -5 and -10
		 * 	(excluding -10). Sets size, hi, and low fields to the randomly generated values.
		 */

		void randArrayV2();
		/* 	Sets an array of integers in the array field with a length between 25 and 50 (excluding 50). The
		 * 	array will have a high value between 5 to 10 (excluding 10) and low value between -5 and -10
		 * 	(excluding -10). The array is filled recursively. Sets size, hi, and low fields to the randomly
		 * 	generated values.
		 */

		void printArray();
		/* 	Prints the values of array, comma separated.
		 */

		void printFArray();
		/* 	Prints the values of farray, comma separated.
		 */

		void filterArray();
		/*	Filters the values of array using the hanning window (note - window size is 5). Sets farray to the result.
		 */

		void graphArray();
		/* 	Prints a graph of array. Size of axes based on size, hi, and low values.
		 */

		void graphFArray();
		/* 	Prints a graph of farray. Size of axes based on size, hi, and low values.
		 */

		int getSize();
		/*	Returns size value in the ArrFilter
		 */

		int getHigh();
		/*	Returns size value in the ArrFilter
		 */

		int getLow();
		/*	Returns size value in the ArrFilter
		 */

		int *getArray();
		/*	Returns size value in the ArrFilter
		 */

		int *getFArray();
		/*	Returns size value in the ArrFilter
		 */

};

#endif /* ARRFILTER_HPP_ */
