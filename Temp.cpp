#include <iostream>
using namespace std;
int main()
{
    int array[] = {
        55, 62, 68, 74, 59, 45, 41, 58, 60, 67, 65, 78, 82, 88, 91, 92, 90, 93, 87, 80, 78, 79, 72, 68, 61, 59};
    int catagorey_1st[20];
    int catagorey_2th[20];
    int catagorey_3th[20];
    int i, p, q, r;
    for (i=0, p=0, q=0, r = 0; i < sizeof(array) / sizeof(array[0]); i++)
    {
       

        if (array[i] >= 85)
        {   
            catagorey_1st[p] = array[i];
            p++;
        }

        else if (array[i] < 85 && array[i] > 60)
        { 
            catagorey_2th[q] = array[i];
            q++;
        }

        else if (array[i] < 60)
        { 
            catagorey_3th[r] = array[i];
            r++;
        }
    }
    cout << "Hot days";
     cout<<"{";
    for (int i = 0; i < p; i++)
    {
        cout<<catagorey_1st[i];
        cout<<" ";
    }
     cout<<"}";
    cout<<endl;
    cout << "Sunnay days";
    cout<<"{";
    for (int i = 0; i < q; i++)
    {
        cout << catagorey_2th[i];
        cout<<" ";
    }
     cout<<"}";
      cout<<endl;
    cout << "Cold days";
     cout<<"{";
    for (int i = 0; i < r; i++)
    {
        cout << catagorey_3th[i];
        cout<<" ";

    }
     cout<<"}";
}