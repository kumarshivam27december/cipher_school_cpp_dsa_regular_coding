// C++ program to illustrate the static storage class
#include <iostream>
using namespace std;

int staticVarUseFunc(){
    static int x=100;//STATIC VAR. IS INITIALIZED ONLY ONCE
    x+=100; // x=x+100 
    return x;
}

int nonstaticVarUse(){
    int x=10;
    x+=10;
    return x;
}

int main()
{
    cout<<"For Static Var case:"<<endl;
    cout<<staticVarUseFunc()<<endl;
    cout<<staticVarUseFunc()<<endl;
    cout<<staticVarUseFunc()<<endl;
    cout<<staticVarUseFunc()<<endl;
    cout<<staticVarUseFunc()<<endl;
    
    cout<<endl<<"For Non Static Var case"<<endl;
    cout<<nonstaticVarUse()<<endl;
    cout<<nonstaticVarUse()<<endl;
    cout<<nonstaticVarUse()<<endl;
    cout<<nonstaticVarUse()<<endl;
    cout<<nonstaticVarUse()<<endl;
    cout<<nonstaticVarUse()<<endl;
    cout<<nonstaticVarUse()<<endl;
    cout<<nonstaticVarUse()<<endl;
    cout<<nonstaticVarUse()<<endl;
    cout<<nonstaticVarUse()<<endl;
    cout<<nonstaticVarUse()<<endl;
    cout<<nonstaticVarUse()<<endl;
    cout<<nonstaticVarUse()<<endl;
    cout<<nonstaticVarUse()<<endl;

        return 0;
}
