#include <bits/stdc++.h>
using namespace std;
void f()
{
    static int count;
    count++;
    cout << count << " ";
}
int main()
{
    for (int i = 0; i < 10; i++)
    {
        f();
    }
}