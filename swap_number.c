#include <stdio.h>

int main()
{
    double first,second;

    printf("Enter First Number : "); // Get first Number from User
    scanf("%lf",&first);

    printf("Enter Second Number : "); // Get second Number from User
    scanf("%lf",&second);

    printf("\nBefore Swapping :\n");     

    printf("\tFirst number is %.2lf\n",first);    // print numbers before swapping
    printf("\tSecond Number is %.2lf\n",second);

    first = first + second;
    second = first - second;
    first = first - second;

    printf("\nAfter Swapping :\n");

    printf("\tFirst number is %.2lf\n",first);  // print numbers after swapping
    printf("\tSecond Number is %.2lf\n",second);

    return 0;

}


