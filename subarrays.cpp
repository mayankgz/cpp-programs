#include <iostream>
#include<climits>

using namespace std;

int main()
{
    int A[]={-4,1,3,-2,6,-1,4,-7};
    int len=sizeof(A)/sizeof(int);
    int MAX=INT_MIN;
    int start=-1, end=-1;
    //iterate over all the starting indices
    for(int i=0; i<len;i++)
    {
        //for each iterating index, iterate over all the ending indices
        for(int j=i;j<len;j++)
        {
            int sum=0;
            for(int k=i;k<=j;k++)
            {
                sum += A[k];
            }
            if (sum>MAX)
            {
                MAX=sum;
                start = i;
                end = j;
            }
        }
    }
    for (int i=start; i<=end; i++)
    {
        cout<<A[i]<< " ";
    }
    cout << endl;
    cout << "Maximum subarray sum =" << MAX << endl;
    return 0;
}
