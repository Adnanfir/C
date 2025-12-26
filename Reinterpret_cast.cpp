#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=10;
    int* nptr=&n;
    char* ptr=reinterpret_cast<char *>(nptr);
    printf("Char address : %p",ptr);
    printf("Char address : %p",nptr);
    
}