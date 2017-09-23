/*
 * RyanGallamozaLab3.cpp
 *
 *  Created on: Sep 22, 2017
 *      Author: ryan
 */

/*
 * Ryan Gallamoza
 * TA: Eeshita Biswas
 * 9/19/2017
 * Lab 3
 * This file contains the functions for each problem in Lab 3
 */

#include <iostream>
#include <stdlib.h>
#include <array>
using namespace std;

int *randArray(int *len, int *hi, int *low);
int *randArrayV2(int *len, int *hi, int *low);
void fillArray(int arr[], int len, int hi, int low);
void printArray(int arr[], int size);

int main(){
	cout << "Problem 1.1" << endl;
	cout << "Test 1:" << endl;
	int len1, hi1, low1, *arr1;
	arr1 = randArray(&len1,&hi1,&low1);
	cout << "Length1: " << len1 << endl;
	cout << "High1: " << hi1 << endl;
	cout << "Low1: " << low1 << endl;
	cout << "Array1: ";
	printArray(arr1,len1);
	cout << "Test 2:" << endl;
	int len2, hi2, low2, *arr2;
	arr2 = randArray(&len2,&hi2,&low2);
	cout << "Length2: " << len2 << endl;
	cout << "High2: " << hi2 << endl;
	cout << "Low2: " << low2 << endl;
	cout << "Array2: ";
	printArray(arr2,len2);
	cout << "Test 3:" << endl;
	int len3, hi3, low3, *arr3;
	arr3 = randArray(&len3,&hi3,&low3);
	cout << "Length3: " << len3 << endl;
	cout << "High3: " << hi3 << endl;
	cout << "Low3: " << low3 << endl;
	cout << "Array3: ";
	printArray(arr3,len3);
	cout << "*************************" << endl;

	cout << "Problem 1.2" << endl;
	cout << "Test 1:" << endl;
	int len4, hi4, low4, *arr4;
	arr4 = randArrayV2(&len4,&hi4,&low4);
	cout << "Length4: " << len4 << endl;
	cout << "High4: " << hi4 << endl;
	cout << "Low4: " << low4 << endl;
	cout << "Array4: ";
	printArray(arr4,len4);
	cout << "Test 2:" << endl;
	int len5, hi5, low5, *arr5;
	arr5 = randArrayV2(&len5,&hi5,&low5);
	cout << "Length5: " << len5 << endl;
	cout << "High5: " << hi5 << endl;
	cout << "Low5: " << low5 << endl;
	cout << "Array5: ";
	printArray(arr5,len5);
	cout << "Test 3:" << endl;
	int len6, hi6, low6, *arr6;
	arr6 = randArrayV2(&len6,&hi6,&low6);
	cout << "Length6: " << len6 << endl;
	cout << "High6: " << hi6 << endl;
	cout << "Low6: " << low6 << endl;
	cout << "Array6: ";
	printArray(arr6,len6);
	cout << "*************************" << endl;

	cout << "Problem 1.3" << endl;
	cout << "Function used to print arrays in Problems 1.1 and 1.2" << endl;
	cout << "*************************" << endl;



	return 0;
}

int *randArray(int *len, int *hi, int *low){
	*len = rand() % 25 + 25;
	int *arr = new int[*len];

	*hi = rand() % 5 + 5;
	*low = -1*(rand() % 5 + 5);

	for(int i=0;i<*len;i++){
		arr[i] = rand() % (*hi-*low) + *low;
	}

	return arr;
}

void fillArray(int arr[], int len, int hi, int low){
	arr[len-1] = rand() % (hi-low) + low;
	if(len>1){
		fillArray(arr,len-1,hi,low);
	}
}

int *randArrayV2(int *len, int *hi, int *low){
	*len = rand() % 25 + 25;
	int *arr = new int[*len];

	*hi = rand() % 5 + 5;
	*low = -1*(rand() % 5 + 5);

	fillArray(arr, *len, *hi, *low);

	return arr;
}

void printArray(int arr[], int size){
	for(int i=0;i<size;i++){
		if(i==size-1){
			cout << arr[i] << endl;
		}
		else{
			cout << arr[i] << ",";
		}
	}
}
