#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i =0;i<n;i++){
            cin>>arr[i];
        }

        int mul = 1;
        for(int i =0;i<n;i++){
            mul*=arr[i];
        }

        if((mul%10)==2||(mul%10)==5||(mul%10)==3){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
}