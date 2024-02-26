#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[3]={5,6,7};
    cout<<a;cout<<endl;
    cout<<a+1<<endl;

    int b = 10 ;
    int* p = &b;
    int **k = &p;
    cout<<*p<<endl;
    cout<<**k<<endl;
    cout<<&b<<endl;
    cout<<p<<endl;
    *p = 11;
    cout<<b<<endl;
    cout<<p+1<<endl;
    cout<<"\n\n\n";




    int x = 5;
    cout<<"Address of x is "<<&x<<endl;
    int *p_x = &x;
    cout<<"val of p_x is"<<p_x<<endl;
    int **p_p_x = &p_x;
    cout<<"Add of p_x:"<<&p_x<<endl;
    cout<<"value of p_p_x:"<<p_p_x<<endl;
    cout<<"value of *p_p_x:"<<*p_p_x<<endl;
    cout<<"value of **p_p_x:"<<**p_p_x<<endl;


    cout<<endl<<"\n\n\n";
    int arr[10];
    arr[0]=2;
    arr[1]=4;
    cout<<"arr: "<<arr<<endl;
    cout<<"&arr[0]: "<<&arr[0]<<endl;
    cout<<"*arr: "<<*arr<<endl;
    cout<<"arr+1: "<<arr+1<<endl;
    cout<<"&arr[1]: "<<&arr[1]<<endl;
    cout<<"*(a+1): "<<*(arr+1)<<endl;




}