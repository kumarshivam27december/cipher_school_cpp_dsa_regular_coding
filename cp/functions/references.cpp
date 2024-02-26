#include <bits/stdc++.h>
using namespace std;
void interchange1(int a,int b){
    int temp = a;
    a = b;
    b = temp;
}
void interchange2(int &a ,int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a=5,b=9;
    cout<<a<<" "<<b<<"\n";
    interchange1(a,b);
    cout<<a<<" "<<b<<"\n";
    interchange2(a,b);
    cout<<a<<" "<<b<<"\n";
    return 0;
}


//arrays is always passed by reference so we usually avoid int
//in 2d we have to give the colm size arr[][colm]

