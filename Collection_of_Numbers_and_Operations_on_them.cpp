#include <iostream>
#include <math.h>
using namespace std;
void Collection(int array[]){
    cout<<"Enter the elements of the array";
for (int  i = 0; i < 4; i++)
{
    cin>>array[i];
}



}
int Smallest(int array[]){
    int Smallest;
    for (int  i = 0; i < 4; i++)
    {
        
        if (Smallest>array[i])
        {
            Smallest=array[i];
        }
        
    }
    return Smallest;
    
}
int Biggest(int array[]){
    int Big;
    for (int  i = 0; i < 4; i++)
    {
        
        if (Big<array[i])
        {
            Big=array[i];
        }
        
    }
    return Big;
    
}
float Mean(int array[]){
    float mean=0;
    for (int  i = 0; i < 4; i++)
    {
        mean=mean+array[i];
        
    }
    return mean/4;
    
}
int main(){
    int array[4];
    int x;

Collection(array);
 float min1,max1,mean1;
cout<<"Enter the task you want to perform on the Collected data 1.Find the smalles 2.To find the biggest 3.To find the mean";
cin>>x;
switch (x)
{
case 1:
     min1=Smallest(array);
    cout<<"THe smallest number is ";
    cout<<min1;
    break;
case 2:
    max1=Biggest(array);
    cout<<"The Biggest Number in the array is ";
    cout<<max1;
    break;
case 3:
     mean1=Mean(array);
    cout<<"The Mean of  the array is ";
    cout<<mean1;
    break;
default:
    break;
}




}