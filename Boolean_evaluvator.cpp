#include <iostream>
using namespace std;
void And(int x[5],int y[5]){
int result[5];
for (int  i = 0; i < 5; i++)
{
    cout<<"Enter the values of x and y";
    cin>>x[i];
    cin>>y[i];
}
for (int  i = 0; i < 5; i++)
{
    if (x[i]==1&&y[i]==1)
    {
        result[i]=1;
    }
    else
    {
        result[i]=0;
    }
    
}}
void OR(int x[5],int y[5]){
int result[5];
for (int  i = 0; i < 5; i++)
{
    cout<<"Enter the values of x and y";
    cin>>x[i];
    cin>>y[i];
}
for (int  i = 0; i < 5; i++)
{
    if (x[i]==1||y[i]==1)
    {
        result[i]=1;
    }
    else
    {
        result[i]=0;
    }
    
}
cout<<"The OR operation";
for (int  i = 0; i <5; i++)
{
    cout<<"|"<<x[i]<<" "<<y[i]<<"|"<<" "<<"|"<<result[i]<<"|"<<endl;
}



}
void NOT(int x[5]){
int result[5];
for (int  i = 0; i < 5; i++)
{
    cout<<"Enter the values of x ";
    cin>>x[i];
}
for (int  i = 0; i < 5; i++)
{
    if (x[i]==1)
    {
        result[i]=0;
    }
    else
    {
        result[i]=1;
    }
    
}
cout<<"The OR operation";
for (int  i = 0; i <5; i++)
{
    cout<<"|"<<x[i]<<" "<<"|"<<" "<<result[i]<<"|"<<endl;
}



}
int main(){
int x[5];
int y[5];
And(x,y);
OR(x,y);
NOT(x);







}