/*

In C++, the term "scope" refers to the region of a program where a variable, function, or other named entity is visible and can be accessed. Scopes help define the visibility and lifetime of identifiers within a program. C++ has several types of scopes:

Global Scope: Variables and functions declared outside of any function or class have global scope. They are visible and accessible from any part of the program.
cpp
Copy code
#include <iostream>

int globalVar = 10; // Global variable

int main() {
    std::cout << globalVar << std::endl; // Accessing globalVar
    return 0;
}
Namespace Scope: Namespaces are used to group related identifiers together. Variables and functions declared within a namespace have scope limited to that namespace, and they need to be accessed using the namespace specifier.
cpp
Copy code
#include <iostream>

namespace MyNamespace {
    int x = 5; // Variable in namespace scope
}

int main() {
    std::cout << MyNamespace::x << std::endl; // Accessing x from MyNamespace
    return 0;
}
Local Scope: Variables declared within a function or block have local scope, meaning they are only visible within that function or block.
cpp
Copy code
#include <iostream>

int main() {
    int localVar = 15; // Local variable
    std::cout << localVar << std::endl; // Accessing localVar
    return 0;
}
Class Scope: Class member variables and functions have class scope. They are accessible within member functions of the class and can be accessed using the member access operator (. or ->).
cpp
Copy code
#include <iostream>

class MyClass {
public:
    int memberVar = 20; // Member variable

    void printMemberVar() {
        std::cout << memberVar << std::endl; // Accessing memberVar
    }
};

int main() {
    MyClass obj;
    obj.printMemberVar(); // Accessing memberVar using a member function
    return 0;
}
Function Parameter Scope: Parameters of a function have scope limited to that function. They are accessible within the function's body.
cpp
Copy code
#include <iostream>

void myFunction(int param) {
    std::cout << param << std::endl; // Accessing function parameter
}

int main() {
    myFunction(25);
    return 0;
}
It's important to understand and manage variable scope properly to avoid naming conflicts and ensure the correct behavior of your C++ programs.

*/