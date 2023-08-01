#include <iostream>
// using namespace std;
namespace firstnamespace{
    void dosomething()
    {
        std::cout<<"something is in first namespace \n";
    }
}
namespace secondnamespace{
    void dosomething()
    {
        std::cout<<"something is in second namespace \n";
    }
}

int main()
{
    firstnamespace::dosomething();
    secondnamespace::dosomething();
    return 0;
}