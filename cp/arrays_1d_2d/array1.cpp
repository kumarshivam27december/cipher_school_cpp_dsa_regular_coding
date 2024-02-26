#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row,col;
    cin>>row>>col;
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}




//limit of declaration of size of local array -> 10^5 or 1e5
//limit of declaration of global array  -> const int n = 1e7;