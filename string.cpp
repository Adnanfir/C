#include <iostream>
using namespace std;

int string_Length(string String)
{
    int i;
    for (i = 0; String[i] != '\0'; i++){

    }
    return i;

}
string reverse_string(string String)
{

    string reverse;
    for (int i = sizeof(String); i > 0; i--)
    {
        int j = 0;
        reverse[j] = String[i];
    }
    return reverse;
}
string Concatenate(string string2, string string1)
{
    string Concatenated = string1 + string2;
    return Concatenated;
}
void Frequency(string string1)
{

    int count;
    char P;
    for (int i = 0; i < sizeof(string1); i++)
    {
        cout << "Enter the alphabet to be counted";
        cin >> P;
        if (string1[i] == P)
        {
            count = count + 1;
        }
    }
    cout << "Frequency of Alphabet" << P << "is" << count;
}

int main()
{

    while (true)
    {
        string String1;
        string String2;
        string Reverse;
        int x;
        cout << "\nEnter the string 1 \n";
        cin >> String1;
        cout << "Enter the string 1 \n";
        cin >> String2;
        int String_Length;
        string Concatenated;
    
        cout<<" Enter the option 1.to find the string length 2. to reverse the string 3.Concatenate two strings 4.to check the frequency of a alphabet ";
        cin>>x;
        switch (x)
        {
        case 1:

            String_Length= string_Length(String1);
            cout << "length of string  " << String1 << " is " << String_Length;
            break;

        case 2:

            Reverse = reverse_string(String1);
            
            cout << " reverse of string " << String1 << " is " << Reverse;
            break;

        case 3:
            Concatenated = Concatenate(String1, String2);
            
            cout << " concatination of string " << String1 <<" and "<<String2<< " is " << Concatenated;
            break;

        case 4:
            Frequency(String1);
            break;
        default:
            break;
        }
    }
}