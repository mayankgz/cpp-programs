#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++){
        if(i%2==0){
            //if column is even number
            for(int j=0;j<3;j++){
                cout<<mat[i][j];
            }
        }    
        
        else{
            for(int j=2;j>=0;j--){
                cout<<mat[i][j];
            }
        }
        
    }    
    
        
}















































































































}
int main(){
    int A[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}
