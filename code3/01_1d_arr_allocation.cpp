#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *arr = (int*)malloc(n*(sizeof(int)));
    free(arr);
    cout<<"It is perfect"<<endl;
    return 0;
}