#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        cout<<endl;
        for(int j=N;j>=N-i;j--){
            cout<<j<<" ";
        }
        for(int h=0;h<4*N-2-4*i;h++){
            cout<<" ";
        }

        for(int j=N;j>=N-i;j--){
            cout<<2*N-j-i<<" ";
        }       
    }
    cout<<endl;
    for(int i=N;i>=0;i--){
        cout<<i<<" ";
        if(i==0){
            for(int g=1;g<=N;g++){
                cout<<g<<" ";
            }
        }
    }
    for(int i=0;i<N;i++){
        cout<<endl;
        for(int j=N;j>i;j--){
            cout<<j<<" ";
        }
        for(int j=0;j<2+4*i;j++){
            cout<<" ";
        }
        for(int k=N;k>i;k--){
            cout<<N-k+i+1<<" ";

        }
    }
}