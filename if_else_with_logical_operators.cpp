#include <iostream>
using namespace std;
int main(){
int year;
cin>>year;
if (year/4==1&&year/100!=1||year/400==1)
{
    cout<<"Leap Year";
}
else
{
    cout<<"Not a Leap Year";
}








}