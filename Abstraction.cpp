// Abstraction is a concept in object-oriented programming that hides complex implementation details and 
// shows only the necessary features of an object.
#include <iostream>
#include <string>
using namespace std;

// // Abstract class
// class Animal {
// public:
//     virtual void makeSound() = 0; // Pure virtual function
// };

// class Dog : public Animal {
// public:
//     void makeSound() override {
//         cout << "Woof!" << endl;
//     }
// };

// int main() {
//     Dog d;
//     d.makeSound(); // Output: Woof!
//     return 0;
// }


// A class is similar to struct data type but it also contains funtions
//  , as we can define multiple data types in a struct similar we can define multiple data types in a class

class Student 
{
public:// access modifiers
string name ; // Class members or class fields
int Date_of_Birth;
string email; 
void Sing_out();// Class methods
void Sign_in(); //prototype
private:
int password;

};

void Student::Sign_in()
{
cout<<"Signing in the employee :"+name<<endl;
}
void Student::Sing_out(){

}
int main(){
Student s1; // instance or a object
s1.name="Ali";
cout<<s1.name<<endl;
s1.Sign_in();
// s1 .Sign_out();
Student *s; 
s = new Student;// Reference vairiable
s->name="Usman";
cout<<s->name<<endl; 
s->Sign_in();

delete s;
s=NULL;
return 0;
// s1.password=3434;
}