#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int M;
    cin>>M;
    int A[N][M];
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            int n;
            cin>>n;
            A[i][j]=n;
        }
    }
    int x;
    cin>>x;
    int count=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(A[i][j]==x){
                count++;
            }
        }
    }
    if(count>=1){
        cout<<"1";
    }
    else{
        cout<<"0";
    }    

}

