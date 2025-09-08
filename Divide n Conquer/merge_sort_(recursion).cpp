// Time Complexity: O(n log n) (all cases)

// Space Complexity: O(n) (due to temporary arrays + recursion stack)

#include <iostream>
using namespace std;

void  merge(int* arr, int s, int e){
  int mid = (s+e)/2;

  int len1 = mid - s + 1;
  int len2 = e - mid;

  int* left = new int[len1];
  int* right = new int[len2];

  //Copy values (left array)
  int k = s;
  for(int i=0; i<len1; i++){
    left[i] = arr[k];
    k++;
  }
  
  //Copy values (right array)
  k = mid+1;
  for(int i=0; i<len2; i++){
    right[i] = arr[k];
    k++;
  }

  //merge logic
  int leftIndex = 0;
  int rightIndex = 0;
  int mainArrIndex = s;

  while(leftIndex < len1 && rightIndex < len2){
    if(left[leftIndex] < right[rightIndex]){
      arr[mainArrIndex++] = left[leftIndex++];
    }
    else{
      arr[mainArrIndex++] = right[rightIndex++];
    }
  }

  //copy rest of the elements fron left array
  while(leftIndex < len1){
    arr[mainArrIndex++] = left[leftIndex++];
  }
  
  //copy rest of the elements fron right array
  while(rightIndex < len2){
    arr[mainArrIndex++] = right[rightIndex++];
  }

  //Free memory after use
  delete[] left;
  delete[] right;

}


void mergeSort(int* arr, int s, int e){
  //base case
  //s == e --> Single element
  //s > e --> invalid array
  if(s >= e){
    return;
  }

  int mid = (s+e)/2;
  //Sort left portion by recursion
  mergeSort(arr, s, mid);

  //sort right portion by recursion
  mergeSort(arr, mid+1, e);

  merge(arr, s, e);
}


int main() {
  int arr[] = {4,1,23,34,12,89,0,14,15,33};
  int n = 10;

  int s = 0; 
  int e = n-1;
  mergeSort(arr, s, e);

  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;

  return 0;
}