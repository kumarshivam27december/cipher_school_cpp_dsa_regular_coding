#include <iostream>
using namespace std;
void increment(int *x){
    (*x)++;
}
int main()
{
    // int a = 4;
    // cout<<a<<endl;
    // increment(a);
    // cout<<a<<endl;
    int a = 4;
    cout<<a<<endl;
    increment(&a);
    cout<<a<<endl;
    return 0;
}