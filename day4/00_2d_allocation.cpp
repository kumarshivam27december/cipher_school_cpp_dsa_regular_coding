#include <iostream>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    int **arr =(int**)malloc(r*(sizeof(int*)));
    for (int i = 0; i < c; i++)
    {
        arr[i] = (int*)malloc(c*(sizeof(int)));
        /* code */
    }
    
    for (int i = 0; i < r; i++)
    {
        free(arr[i]);
        /* code */
    }

    free(arr);
    
          return 0;
}