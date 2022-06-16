#include<iostream>
using namespace std;
int main(){
    int N, temp;
    cin>>N;
    int *arr;
    arr = new int[N];
    for(int i=0; i<N; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<(N-i); j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0; i<N; i++)
    {
        cout<<arr[i]<<" ";
    }
    delete[] arr;
    return 0;
}
