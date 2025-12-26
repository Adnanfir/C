#include <iostream>
using namespace std;
class Animal
{
private:
    /* data */
public:
    virtual void speak()
    {
        cout << "Animal Speaks" << endl;
    }
};

class Dog : public Animal
{
private:
    /* data */
public:
    void speak() override
    {
        cout << "Dog barks" << endl;
    }
};
class Cat : public Animal
{
private:
    /* data */
public:
    void speak() override
    {

        cout << "Cat Meows" << endl;
    }
};

int main(){
    Animal* ptr=new Dog();
    Dog* dog_ptr=dynamic_cast<Dog*>(ptr);
    Cat* Cat_ptr=dynamic_cast<Cat*>(ptr);
    if (dog_ptr)
    {
        dog_ptr->speak();

    }
    else{
        cout<<"Failed to speak";
    }
     if (Cat_ptr)
    {
        dog_ptr->speak();

    }
    else{
        cout<<"Failed to speak";
    }
}