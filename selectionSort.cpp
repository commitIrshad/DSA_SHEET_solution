// Online C++ compiler to run C++ program online

// in_Place implementation

//The idea behind implementation is to find 1st smallest number and place it to the first position
// then find 2nd element,place it to 2nd position
// and so on....we will have a sorted Array as result...

// steps :  Time complexity -> O(n^2)
 
   //  1.  looping i=0 -> size-1
   //  2.  set a variable min_ind which will set to i initially.
   //  3.  looping j=i+1 -> size  check whether arr[j]<arr[min_ind]
   //  4.  found lowest element at j, make min_ind = j
   //  5.  swap( arr[i] , arr[min_ind])
   //  6. result u get sorte array 

#include <iostream>
#include <limits>
using namespace std;

void selectionSort( int arr[], int size) {
   
     for(int i=0; i<size-1; i++) {
    
      int min_ind = i;
      for(int j=i+1; j<size; j++) {
          if(arr[j] < arr[min_ind]) {
               min_ind = j;
          }
      }
      swap(arr[min_ind] , arr[i]);
    }    
   
   for(int i=0; i< size; i++) {
      cout<<arr[i]<<" ";
   }
    
}
int main() {
    // Write C++ code here
    int arr[] = {10,5,8,20,2,18};
    int size = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr,size);

    return 0;
}
