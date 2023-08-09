#include <iostream>
using namespace std;
int x = 21;
int main()
{
    extern int x;
    x= 9;
    cout<<::x<<endl<<x<<endl;
          return 0;
}