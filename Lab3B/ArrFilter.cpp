/*
 * ArrFilter.cpp
 *
 *  Created on: Sep 30, 2017
 *      Author: ryan
 */

#include <iostream>
#include <stdlib.h>
#include "ArrFilter.hpp"

ArrFilter::ArrFilter(){
	array = NULL;
	size = 0;
	hi = 0;
	low = 0;
	farray = NULL;
}

void ArrFilter::randArray(){
	size = (rand() % 25) + 25;
	int *temp = new int[size];

	hi = (rand() % 5) + 5;
	low = -1*((rand() % 5) + 5);

	for(int i=0;i<size;i++){
		temp[i] = (rand() % (hi-low)) + low;
	}

	array = temp;

	delete [] temp;


}

void ArrFilter::fillArray(int arr[], int len, int h, int l){
	arr[len-1] = (rand() % (h-l)) + l;

	if(len>1){
		fillArray(arr,len-1,h,l);
	}
}

void ArrFilter::randArrayV2(){
	size = (rand() % 25) + 25;
	int *temp = new int[size];

	hi = (rand() % 5) + 5;
	low = -1*((rand() % 5) + 5);

	fillArray(temp, size, hi, low);

	array = temp;

	delete [] temp;
}

void ArrFilter::printArray(){
	for(int i=0;i<size;i++){
		if(i==size-1){
			std::cout << array[i] << std::endl;
		}
		else{
			std::cout << array[i] << ",";
		}
	}

}

void ArrFilter::printFArray(){
	for(int i=0;i<size;i++){
		if(i==size-1){
			std::cout << farray[i] << std::endl;
		}
		else{
			std::cout << farray[i] << ",";
		}
	}
}

int ArrFilter::hanningWindow(int arr[]){
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

void ArrFilter::filterArray(){
	int *temp = array;

	if(size<5){
		for(int i=0;i<size;i++){
			temp[i] = 0;
		}
	}
	else{
		for(int i=0;i<size;i++){
			if((i>1)&&(i<size-2)){
				temp[i] = hanningWindow(&temp[i-2]);
			}
			else{
				temp[i] = 0;
			}
		}
	}

	farray = temp;
}

void ArrFilter::graphArray(){
	for(int i=hi;i>=low;i--){
		if(i>=0){
			std::cout << "  " << i << ":";
		}
		else{
			std::cout << " " << i << ":";
		}

		for(int j=0;j<size;j++){
			if(array[j]==i){
				std::cout << "*";
			}
			else{
				std::cout << " ";
			}
		}

		std::cout << std::endl;
	}
}

void ArrFilter::graphFArray(){
	for(int i=hi;i>=low;i--){
		if(i>=0){
			std::cout << "  " << i << ":";
		}
		else{
			std::cout << " " << i << ":";
		}

		for(int j=0;j<size;j++){
			if(farray[j]==i){
				std::cout << "*";
			}
			else{
				std::cout << " ";
			}
		}

		std::cout << std::endl;
	}
}
