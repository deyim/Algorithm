/*
 * =====================================================================================
 *
 *       Filename:  Quicksort.cpp
 *
 *    Description:  Quicksort(Arr, start, end){
 *    						if(start < end){ only when the array has more than oneelem, 즉 리턴 조건을 만들어 주는 것!! 
 *    							pIndex <- partition(Arr, start, end);
 *    							Quicksort(arr, start, pIndex-1);
 *    							Quicksort(arr, pIndex+1, end);
 *
 *    						}
 *    }
 *
 *        Version:  1.0
 *        Created:  09/08/2017 19:27:43
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>


void swap(int *, int *);
void QuickSort(int arr[], int, int);
int partition(int arr[], int, int);
void swap(int *a, int *b){
	int c;
	c = *a;
	*a = *b;
	*b = c;
	return;
}

void QuickSort(int arr[], int low, int high){

	if(low < high){
		int pIndex = partition(arr, low, high);
		QuickSort(arr, low, pIndex-1);
		QuickSort(arr, pIndex+1, high);
	}
}

int partition(int arr[], int low, int high){

	int pivot = arr[high];
	int pIndex = low;
	for(int i = low; i < high; i++){
		if(arr[i] <= pivot) swap(&arr[i], &arr[pIndex++]);
	}
	swap(&arr[pIndex], &arr[high]);
	return pIndex;
}

int main(){

	int TC, num;
    scanf("%d", &TC);


	while(TC--){
		scanf("%d", &num);
		int *arr = malloc(num*sizeof(int));

		for(int i = 0 ; i < num ; i++) scanf("%d", &arr[i]);

		QuickSort(arr, 0, num-1);

		for(int i = 0 ; i < num ; i++) printf("%d ", arr[i]);
		printf("\n");
	}
	return 0;

}




