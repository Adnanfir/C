#include <iostream>

int main()
{
    int year, count = 0, next;
    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        if (year % 100 != 0 && year % 400 == 0)
            printf("%d is a Leap Year.\n", year);
        else
        {
            printf("%d is not a Leap Year.\n", year);
        }
    }
    else{
         printf("%d is not a Leap Year.\n", year);

    }
    return 0;
}
