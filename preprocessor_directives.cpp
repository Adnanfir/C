//  preprocessor directives
// Preprocessor directives are instructions that are processed before compilation.
// Common examples include #include, #define, #ifdef, etc.
// Macros are fragments of code defined using the #define preprocessor directive.
// They allow you to define constants or functions that are replaced by the preprocessor before compilation.
// Preprocessors are directives (starting with #) that instruct the compiler to perform specific operations before actual compilation, such as including files or defining macros.

/*
#include <iostream> 
using namespace std;
int a;
#define ABC(a) ((a)<0?(-a):(a))
int main(){

    cout<<ABC(-5)<<endl;
}
    */
#include <iostream>
using namespace std;
void Show_Inventory(){
    cout<<"This is My inventory";
}
// Define a macro to include the inventory module functionality
// #define INCLUDE_INVENTORY_MODULE
int main(){
#if defined(INCLUDE_INVENTORY_MODULE)
Show_Inventory();
#endif // INCLUDE_INVENTORY_MODULE



}

