#include <iostream>
using namespace std;
int limit;
struct Student
{
    string name;
    int age;
    float gpa;    
};
Student Registry[100];
void setstudentinfo(){  
    cout << "Enter the number of students: ";
    cin >> limit;
  
    for (int  j = 0; j <limit;j++)
    { int p = j + 1;
        cout << "Enter the name of student "<<p<<":";
        cin >> Registry[j].name;
        cout << "Enter the age of student "<<p<<":";
        cin >> Registry[j].age;
        cout << "Enter the GPA of student "<<p<<":";
        cin >> Registry[j].gpa;
        cout << endl;
    }
}
void displaystudentinfo(){
    int limit2;
    cout << "Enter the number of students you want to see :";
    cin>>limit2;
    cout << "Student Registry:" << endl;
    cout << "------------------" << endl;
    
    for (int i = 0; i <limit2; i++)
    {
        cout << "Student " << i + 1 << ": " << Registry[i].name << endl;
        cout << "Age: " << Registry[i].age << endl;
        cout << "GPA: " << Registry[i].gpa << endl;
        cout << endl;
    }
}
int main(){
    int Option;
  
    int Choice;
    cout<<"Enter your choice";
      cin>>Choice;
    while (Choice==2)
    {    cout << "Welcome to the Student Registry!" << endl;
        cout << "Please select an option:" << endl;
        cout<< "1. Register Student 2. Show registered Students";
        cin>>Option;
        switch (Option)
        {
         case 1:
         setstudentinfo();
         break;
         case 2:
         displaystudentinfo();
         break;
        default:
         break;
        }
        printf("Do you want to continue 2. Yes 1. No\n");
        scanf("%d",&Choice);
    }
    
  
  





    }






