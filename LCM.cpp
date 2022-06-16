#include<iostream>
using namespace std;
int main(){
    int N1;
    cin>>N1;
    int N2;
    cin>>N2;
    int LCM;
    if(N1>N2){
        for(int i=N1;i<=N1*N2;i++){
            if(i%N1==0 && i%N2==0){
                LCM=i;
                break;
            }
        }
    }
    else{
        for(int i=N2;i<=N1*N2;i++){
            if(i%N1==0 && i%N2==0){
                LCM=i;
                break;
            }
        }
    }
    cout<<LCM;
}