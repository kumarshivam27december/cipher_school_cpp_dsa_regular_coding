/*

These are four fundamental principles of object-oriented programming (OOP)
 that are essential concepts in languages like C++, Java, and others. Let's explore each of them:



Abstraction:
Abstraction is the process of simplifying complex reality by 
modeling classes based on real-world objects. 
It involves showing only the necessary features of an object 
while hiding its implementation details. 

In C++, you can achieve abstraction by creating classes
with well-defined interfaces (public methods) that provide a clear 
and simplified way to interact with the underlying functionality.



Encapsulation:
Encapsulation is the practice of bundling data (attributes) 
and the methods (functions) that operate on the data into a single unit, 
known as a class. The data is typically hidden from the outside world 
and can only be accessed through the defined methods. 
This helps in achieving data security and preventing unintended modification. 
In C++, you can use access specifiers (public, private, protected) 
to control the visibility of class members.



Inheritance:
Inheritance is a mechanism that allows a new class (derived or child class)
 to inherit properties and behaviors from an existing class (base or parent class). 
 It promotes code reusability and establishes a hierarchical relationship between classes. 
 The derived class can extend or override the functionalities of the base class. 
 In C++, you can use the class keyword followed by a colon (:) to specify the 
 base class when defining a new class.



Polymorphism:
Polymorphism allows objects of different classes to be treated 
as objects of a common base class. It enables you to write more 
flexible and generic code by providing a consistent interface for 
different classes that share a common behavior. 


There are two types of polymorphism: 
compile-time (achieved through function overloading and operator overloading) and 
runtime (achieved through virtual functions and dynamic binding). 

In C++, you can create virtual functions in the base class and override them 
in derived classes to achieve runtime polymorphism.



Here's a simple example to illustrate these principles:

cpp
Copy code
// Abstraction and Encapsulation
class Shape {
private:
    double area;
public:
    Shape(double a) : area(a) {}
    double getArea() const {
        return area;
    }
    virtual void displayInfo() = 0;  // Abstract method
};

// Inheritance
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : Shape(0), radius(r) {}
    double getRadius() const {
        return radius;
    }
    void displayInfo() override {
        cout << "Circle: Area = " << getArea() << ", Radius = " << radius << endl;
    }
};

class Square : public Shape {
private:
    double side;
public:
    Square(double s) : Shape(0), side(s) {}
    double getSide() const {
        return side;
    }
    void displayInfo() override {
        cout << "Square: Area = " << getArea() << ", Side = " << side << endl;
    }
};

// Polymorphism
void printArea(const Shape& s) {
    s.displayInfo();
}

int main() {
    Circle circle(5);
    Square square(4);

    printArea(circle);  // Polymorphism
    printArea(square);  // Polymorphism

    return 0;
}
This example demonstrates how abstraction, 
encapsulation, inheritance, and polymorphism work together in C++ to 
create a simple object-oriented program.



*/