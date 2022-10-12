#include <stdio.h>
void hammingDistance(int x, int y)
{
    int z = x ^ y; // in binary to see the opposite nbd
    int count = 0;
    while (z > 0)
    {
        count += z & 1;
        z = z >> 1; // shifting by 1
    }
    printf("%d\n", count);
}
int main()
{
    printf("enter two numbers and enter a negative number when you are done ");
    int a, b;
    while (a > 0)
    {
        scanf("%d", &a);
        scanf("%d", &b);
        if (!isdigit(a) || !isdigit(b)) // test case to see if it is a digit or not
        printf("\nEntered character is not a numeric character");
        hammingDistance(a, b);
        exit(0);
    }
    // test case when the user enters a char element
    char c;
    scanf("%s", &c);
    printf("dont enter a char only a negative number");
}