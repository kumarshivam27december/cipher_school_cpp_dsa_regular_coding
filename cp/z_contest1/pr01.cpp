#include <bits/stdc++.h>
using namespace std;
char upper(char str){
    return (char)str-32;
}
int main(){
    string str;
    getline(cin,str);
    for(int i = 0;i<str.size();i++){
        if(str[i]==' '){
            cout<<endl;
        }else{
            cout<<upper(str[i]);
        }
    }
}