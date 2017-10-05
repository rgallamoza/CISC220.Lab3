/*
 * main.cpp
 *
 *  Created on: Sep 30, 2017
 *      Author: ryan
 */

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "ArrFilter.hpp"
using namespace std;

int main(){
	srand(time(NULL));

	cout << "ArrFilter1:" << endl; // Expecting each function to work as before within the class.
	ArrFilter af1;
	af1.randArray();
	cout << "Size: " << af1.getSize() << endl;
	cout << "High: " << af1.getHigh() << endl;
	cout << "Low: " << af1.getLow() << endl;
	cout << "Array1:" << endl;
	af1.printArray();
	af1.graphArray();
	cout << "Filtered Array1:" << endl;
	af1.filterArray();
	af1.printFArray();
	af1.graphFArray();
	cout << "**************************************************" << endl;

	cout << "ArrFilter2:" << endl; // Expecting ArrFilter2 values to be different from ArrFilter1
	ArrFilter af2;
	af2.randArray();
	cout << "Size: " << af2.getSize() << endl;
	cout << "High: " << af2.getHigh() << endl;
	cout << "Low: " << af2.getLow() << endl;
	cout << "Array2:" << endl;
	af2.printArray();
	af2.graphArray();
	af2.filterArray();
	cout << "Filtered Array2:" << endl;
	af2.printFArray();
	af2.graphFArray();
	cout << "**************************************************" << endl;

	cout << "ArrFilter3:" << endl; // Expecting randArrayV2 function to work properly.
	ArrFilter af3;
	af3.randArrayV2();
	cout << "Size: " << af3.getSize() << endl;
	cout << "High: " << af3.getHigh() << endl;
	cout << "Low: " << af3.getLow() << endl;
	cout << "Array3:" << endl;
	af3.printArray();
	af3.graphArray();
	af3.filterArray();
	cout << "Filtered Array3:" << endl;
	af3.printFArray();
	af3.graphFArray();
	cout << "**************************************************" << endl;

	return 0;
}
