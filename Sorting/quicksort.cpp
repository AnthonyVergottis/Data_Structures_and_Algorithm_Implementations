/*

    Implementation of Quick Sort Algorithm

        - Using the last element as a pivot

    Notes:
        - Quick sort is a divide and conquer algorithm
        - Quick sort is a recursive algorithm
        - Average performance is O(n Log n), because we split the ploblem in half we get Logn,
           but each time the sorting is done n times for each half.
        - Worst case performance is O(n^2), if you are unlucky and pick either one of the smallet or largest 
          elements in the array, then quicksort turns into selection sort. Odds of this happening are vanishingly
          small.
        - If implemented correctly can be two or three times faster than its main competitors; merge sort and heapsort.
    
    Modified code from GeeksforGeeks
    
*/

#include <iostream>
#include <cstdlib>
#include <array>

using namespace std;


void swap(int *a , int *b){

    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int l, int h){

    // Pivot index
    int pivot = arr[h];            

    // Index of first element in sub array 
    int i = l - 1;

    int leftSubarraySize = h - 1;

    for (int j = l; j <= leftSubarraySize; j++){
        if(arr[j] < pivot){
            i++;
            swap(&arr[i], &arr[j]);  
        }

    }
    swap(&arr[i+1],&arr[h]);
    return (i + 1);
}

void quicksort(int arr[], int l, int h){

    if(l < h){
        int part_indx = partition(arr,l,h);
        quicksort(arr, l , part_indx - 1);
        quicksort(arr, part_indx + 1, h);
    }
}




int main(){

    // Array to sort.
    int arr[] =  {5,76,3,56,7,53,1,4,8,2,500,23,555,677,422,44};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int l = 0;
    int h = n - 1;


  

    quicksort(arr,l,h);

    cout << endl;
    for (int i = 0; i < h; ++i){
        cout << arr[i] << " ";
    }
    cout << endl;




    return 0;
}



