/*

Static binding and dynamic binding are two concepts related to polymorphism in C++.



Static Binding (Early Binding):

Static binding occurs at compile-time. 
It refers to the process of linking a function call with the function definition 
when the program is compiled. 
This binding is determined based on the data type of the object and the function call. 
It is also known as "early binding" because the function to be 
called is resolved before the program runs.



In C++, static binding occurs when you call a non-virtual function or a function 
for an object whose type is known at compile-time. 
The compiler directly associates the function call with the appropriate function definition 
based on the static type of the object.



Example:

cpp
Copy code
class Base {
public:
    void show() {
        cout << "Base class" << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived class" << endl;
    }
};

int main() {
    Base baseObj;
    Derived derivedObj;

    Base* ptr = &derivedObj;  // Base pointer pointing to a Derived object

    baseObj.show();    // Static binding, calls Base::show()
    derivedObj.show(); // Static binding, calls Derived::show()
    ptr->show();       // Static binding, calls Base::show() (even if pointing to Derived)

    return 0;
}




Dynamic Binding (Late Binding):
Dynamic binding occurs at runtime. 
It refers to the process of linking a function call with the function definition at runtime, 
based on the actual type of the object being referenced. 
This binding is achieved through the use of virtual functions
and is a key feature of polymorphism.




In C++, dynamic binding occurs when you call a 
virtual function on a pointer or reference to a base class that 
points to an object of a derived class. 
The function to be called is resolved at runtime based on the actual type of the object.

Example:

cpp
Copy code
class Base {
public:
    virtual void show() {
        cout << "Base class" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class" << endl;
    }
};

int main() {
    Base baseObj;
    Derived derivedObj;

    Base* ptr = &derivedObj;  // Base pointer pointing to a Derived object

    baseObj.show();    // Static binding, calls Base::show()
    derivedObj.show(); // Static binding, calls Derived::show()
    ptr->show();       // Dynamic binding, calls Derived::show()

    return 0;
}



In summary, static binding is based on the static (compile-time) 
type of an object and is resolved at compile-time, 
while dynamic binding is based on the actual (runtime) type of an object 
and is resolved at runtime. Dynamic binding is a crucial 
aspect of achieving polymorphism through virtual functions in C++.



*/