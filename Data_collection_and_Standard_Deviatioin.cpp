#include <iostream>
#include <math.h>
#define X 5
using namespace std;
void Collection(int array[]){
    cout<<"Enter the elements of the array";
for (int  i = 0; i < X; i++)
{
    cin>>array[i];
}



}
int Sum_of_Squraes(int array[]){
   int sum=0;
   for (int  i = 0; i < X; i++)
   {
    
   sum=sum+(array[i]*array[i]);
  
   }
   return sum;
   
    
}
float Standard_Deviation(int array[],int sum_of_Squraes,int average ){
   float x= (sum_of_Squraes/X)-(average*average);
    int p=sqrt(x);
return p;
}
float Average(int array[]){
    float mean=0;
    for (int  i = 0; i < X; i++)
    {
        mean=mean+array[i];
        
    }
    return mean/X;
    
}
int main(){
    int array[X];
    float sum_of_squres;
    float average;

Collection(array);
sum_of_squres= Sum_of_Squraes(array);
average=Average(array);
float standard_Deviation=Standard_Deviation(array,sum_of_squres,average);
cout<<"Standard deviation is =";
cout<<standard_Deviation;
}