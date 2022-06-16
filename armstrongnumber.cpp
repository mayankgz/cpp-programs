#include<iostream>
#include<cmath>
using namespace std;
int order(int x)
{
    int n = 0;
    while (x)
    {
        n++;
        x = x/10;
    }
    return n;
}
int main(){
    int N;
    cin>>N;
    int a=order(N);
    int A[a];
    int c=N;
    int sum=0;
    while (c)
    {
        int r = c%10;
        sum += pow(r, a);+
        c = c/10;
    }
    if(sum==N){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}