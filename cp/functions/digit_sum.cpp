#include <bits/stdc++.h>
using namespace std;
int digit_sum(int a){
    int sum=0;
    while (a)
    {
        sum+=a%10;
        a/=10;
    }
    return sum;
}
int main()
{
    int k = digit_sum(859);
    int l =digit_sum(278);
    cout<<k+l;
    return 0;
}