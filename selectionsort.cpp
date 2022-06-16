#include <iostream>
#include<climits>

using namespace std;

int main(){
    int[A]={5,4,3,2,1};
    intn=sizeof(A)/sizeof(int);
    // in the ith phase of selection sort, we place the smallest
    // element in the unsorted part of the array to its correct
    // position which is the ithindex
    int min_idx = i;
    for(int j=i+1; j<n; j++)
    {
        if (A[j]<A[min_idx])
        {
            min_idx=j;
        }
        swap(A[i], A[min_idx]); 
    }
    for(int i=0; i<n; i++)
    {
        cout<< A[i <<" ";]
    }
    cout<<end1;
}