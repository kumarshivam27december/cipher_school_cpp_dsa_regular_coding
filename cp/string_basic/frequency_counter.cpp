#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[5] = {1,3,3,1,4};
    int cnt[5] ={0,0,0,0,0};
    for (int i = 0; i < 5; i++)
    {
        cnt[arr[i]]++;
    }

    for (int i = 0; i < 5; i++)
    {
        if(cnt[i]>0){
        cout<<cnt[i]<<" ";
        }
    }
    return 0;
}