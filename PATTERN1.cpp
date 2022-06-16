#include<iostream>
#include<climits>
using namespace std;
int main(){
    int N;
    cin>>N;
    int mid=(N+1)/2;
    for(int i=0;i<mid;i++){
        cout<<endl;
        for(int j=1+i;j<mid;j++){
            cout<<" \t";        }
        //cout<<"*"<<endl;
        for(int k=0;k<2*i+1;k++){
            cout<<"*\t";
        }
        //break;
    }
    for(int i=0;i<mid-1;i++){
        cout<<endl;
        for(int j=0;j<i+1;j++){
            cout<<" \t";
        }
        for(int k=2*i;k<N-2;k++){
            cout<<"*\t";
        }
    }
}
