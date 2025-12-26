/* A constructor in C++ is a special member function of a class that is automatically called when an object of that class is created.
 Its main purpose is to initialize the object's data members.

Key points:

The constructor has the same name as the class.
It has no return type (not even void).
It can be overloaded (you can have multiple constructors with different parameters).
If you do not define any constructor, C++ provides a default one.
Example:

When you create an object:

The constructor sets value to 0. */
#include <iostream>
using namespace std;
class MyClass { 
public:
    int value;
    // Constructor
    MyClass();
    MyClass(int value); 
    // This above is an example of method overloading 
    // As the above is for constructors this is called constructor overloading 
 /*   **Method overloading** in C++ is a 
 feature that allows you to define multiple functions with the same name in the same scope,
  but with different parameter lists (different number or types of parameters).

This means you can have several versions of a function (including constructors) that perform similar tasks but take different arguments.

**Example:**
```cpp
class MyClass {
public:
    void display() {
        cout << "No parameters" << endl;
    }
    void display(int x) {
        cout << "Integer: " << x << endl;
    }
    void display(string s) {
        cout << "String: " << s << endl;
    }
};
```
Here, the `display` method is **overloaded** three times with different parameter types.

**Constructor overloading** is a special case where you define multiple constructors with different parameters, as shown in your code.
 */   
};

MyClass::MyClass() //class names::Constructors name 
{
    value = 1000;
    cout << "Employee created " << endl;
} 

MyClass::MyClass(int value) //class names::Constructors name 
{
    this->value = value; // this points to the field of the main class and assigns the local variable to it
    // we can skip this then we just rename local variable then we will have two different variables so simply use Salary = s ;
    cout << "Employee created but with value () " << endl;
}

MyClass::~MyClass() {
    cout << "Employee Deleted" << endl;
}

int main() {
    MyClass obj; // Constructor is called automatically
    cout << obj.value << endl;
    // delete &obj; // ERROR: Do not delete stack-allocated object!
    MyClass obj2(3000);
    cout << obj2.value << endl;
    return 0;
}

// Define Destructor
// A destructor in C++ is a special member function that is executed when an object goes out of scope or is explicitly deleted.
// It has the same name as the class, preceded by a tilde (~), and has no return type or parameters.
// When is a Destructor called?
// A destructor is called automatically when:
// 1. An object goes out of scope (e.g., at the end of a function or block).
// 2. An object is explicitly deleted using the 'delete' operator (for heap-allocated objects).
// In your code, destructors for 'obj' and 'obj2' will be called automatically at the end of main().