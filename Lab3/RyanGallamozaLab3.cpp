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

int hanningWindow(int arr[]); // window size set at 5 for problems 1.4,5,6
int *filterArray(int arr[], int size);
void graphArray(int arr[], int size, int hi, int low);

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

	cout << "Problem 1.4" << endl;
	cout << "Test 1:" << endl;
	int hw1[5] = {1,2,3,4,5};
	cout << hanningWindow(hw1) << endl; // Expected: 3
	cout << "Test 2:" << endl;
	int hw2[5] = {10,10,10,10,10};
	cout << hanningWindow(hw2) << endl; // Expected: 10
	cout << "Test 3:" << endl;
	int hw3[5] = {3,8,2,5,1};
	cout << hanningWindow(hw3) << endl; // Expected: 4
	cout << "*************************" << endl;

	cout << "Problem 1.5" << endl;
	cout << "Test 1:" << endl;
	int arri1[4] = {1,2,3,4};
	int *arrf1;
	arrf1 = filterArray(arri1,4);
	printArray(arrf1,4); // Expected: 0,0,0,0
	cout << "Test 2:" << endl;
	int arri2[5] = {1,2,3,4,5};
	int *arrf2;
	arrf2 = filterArray(arri2,5);
	printArray(arrf2,5); // Expected: 0,0,3,0,0
	cout << "Test 3:" << endl;
	int arri3[9] = {3,8,2,5,1,4,6,0,2};
	int *arrf3;
	arrf3 = filterArray(arri3,9);
	printArray(arrf3,9); // Expected: 0,0,4,3,3,3,3,0,0
	cout << "*************************" << endl;

	cout << "Problem 1.6" << endl;
	cout << "Test 1:" << endl;
	int garray1[5] = {1,2,3,4,5};
	graphArray(garray1,5,5,1); // Expected: Diagonal line
	cout << "Test 2:" << endl;
	int garray2[35] = {6,-2,-4,5,-3,-4,-3,-1,5,2,-2,0,-7,2,-3,-4,-3,-1,-5,-3,1,7,3,-7,-7,3,-8,1,-5,-4,-2,-5,-8,0,-4};
	graphArray(garray2,35,7,-8); // Expected: Graph of unfiltered array from Lab pdf
	cout << "Test 3:" << endl;
	graphArray(filterArray(garray2,35),35,2,-4); //Expected: Graph of filtered array from Lab pdf
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

	delete [] arr;
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

	delete [] arr;
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

int hanningWindow(int arr[]){
	int result = 0;

	for(int i=0;i<5;i++){
		if(i==0||i==4){
			result += arr[i];
		}
		else if(i==1||i==3){
			result += arr[i]*2;
		}
		else{
			result += arr[i]*3;
		}
	}

	result /= 9;

	return result;
}

int *filterArray(int arr[], int size){
	int *newarr = new int[size];

	if(size<5){
		for(int i=0;i<size;i++){
			newarr[i] = 0;
		}
	}
	else{
		for(int i=0;i<size;i++){
			if((i>1)&&(i<size-2)){
				newarr[i] = hanningWindow(&arr[i-2]);
			}
			else{
				newarr[i] = 0;
			}
		}
	}

	return newarr;

	delete [] newarr;
}

void graphArray(int arr[], int size, int hi, int low){
	for(int i=hi;i>=low;i--){
		if(i>=0){
			cout << " " << i << ":";
		}
		else{
			cout << i << ":";
		}

		for(int j=0;j<size;j++){
			if(arr[j]==i){
				cout << "*";
			}
			else{
				cout << " ";
			}
		}

		cout << endl;
	}
}
