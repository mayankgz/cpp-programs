#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        int N;
        cin>>N;
        A[i]=N;
    }
    int Q;
    cin>>Q;
    for(int i=0;i<Q;i++){
        int B[Q];
        int C[Q];
        //int count=0;
        for(int k=0;k<Q;k++){
            int amount;
            cin>>amount;
            int item;
            cin>>item;
            B[k]=amount;
            C[k]=item;
        }
        
        for(int I=0;I<Q;I++){
            cout<<endl;
            int count=0;
            for(int j=0;j<n;j++){
                if(B[I]%A[j]==0){
                    count++;

                }
            }
            if(count==C[I]){
                cout<<"yes";

            }
            else{
                cout<<"no";
            }
        
        }
    }
        
}
