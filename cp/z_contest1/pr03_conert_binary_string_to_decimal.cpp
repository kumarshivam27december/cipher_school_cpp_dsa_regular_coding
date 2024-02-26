#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int s;
        cin>>s;
        string str;
        cin>>str;
        int i  = 0;
        int ans = 0;
        while(s){
            int bit = (str[s-1]-'0');
            ans += bit*pow(2,i);
            s--;
            i++;
        }
        cout<<ans<<endl;


    }
}