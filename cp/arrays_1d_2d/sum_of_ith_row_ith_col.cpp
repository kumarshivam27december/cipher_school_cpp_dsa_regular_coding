#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row,col;cin>>row>>col;
    int arr[row][col];
    for (int i = 0; i <row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           cin>>arr[i][j];
        }
        
    }

    int sumi = 0;
    int  sumj = 0;
    for(int i =0;i<row;i++){
        sumi+=arr[i][0];
    }
    for(int j =0;j<col;j++){
        sumj+=arr[0][j];
    }

    if (sumi==sumj)
    {
        cout<<1;
    }else{
        cout<<0;
    }
    
    
    return 0;
}