#include <bits/stdc++.h>
using namespace std;
class Static_scope
{
private:
    /* data */
public:
static int a;

    Static_scope(/* args */);
    ~Static_scope();
};
int Static_scope::a=2;
int main(){

cout<<Static_scope::a;



}