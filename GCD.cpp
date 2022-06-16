#include<iostream>
using namespace std;
int main(){
    int N1;
    cin>>N1;
    int N2;
    cin>>N2;
    int f;
    if(N1>N2){
        for(int i=1;i<=N2;i++){
            if(N1%i==0 && N2%i==0){
                f=i;
            }
        }
    }
    else{
        for(int i=1;i<=N1;i++){
            if(N1%i==0 && N2%i==0){
                f=i;
            }
        }
    }
    cout<<f;
}