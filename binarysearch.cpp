#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++){
        int n;
        cin>>n;
        A[i]=n;
    }
    int M;
    cin>>M;
    //cout<< binarysearch(A,N,M);
    int start=0;
    int end=N-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(A[mid]==M){
            cout<<mid;
            break;
        }
        else if(A[mid]>M){
            end=mid-1;
        }
        else if(A[mid]<M){
            start=mid+1;
        }
        if(start>end){
          cout<< "-1";  
        }
        
    }
}


