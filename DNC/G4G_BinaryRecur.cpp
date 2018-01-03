/*
 * =====================================================================================
 *
 *       Filename:  Binary_Recur.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  09/08/2017 00:44:09
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int find){

	int mid = (low + high)/2;
	if(find > arr[mid]){
		low = mid + 1;
		//printf("111 arr[mid] %d find %d\n", arr[mid], find);
		return binarySearch(arr, low, high, find);
	}
	else if(find < arr[mid]){
		high = mid-1;
		//printf("222 arr[mid] %d find %d\n", arr[mid], find);
		return binarySearch(arr, low, high, find);
	}
	else{
		//printf("333 arr[mid] %d find %d\n", arr[mid], find);
		return mid;
	}
	return -1;

}

int main(){
	int arr[] = {2, 3, 4, 10, 40};
   int n = sizeof(arr)/ sizeof(arr[0]);
   int x = 10;
   int result = binarySearch(arr, 0, n-1, x);
   (result == -1)? printf("Element is not present in array")
                 : printf("Element is present at index %d", result);
   return 0;

		
}
