#include <stdio.h>
#include <ctype.h>

void printArray(int a[]);
void arrayHistogram(int a[]);
void swapValues(int array[], int n1, int n2);
void median(int *a);
void mode(int a[]);
void isSorted(int a[], int size);

int main()
{
    int const size = 10;
    int a[] = {1, 1, 1, 2, 2, 2, 3, 3, 3, 3};
    printArray(a);
    printf("\n");
    printf("\n");
    arrayHistogram(a);
    printf("lets swap the values 2 and 3 in the following array \n");
    swapValues(a, 2, 3);
    printArray(a);
    printf("lets bubbleSort\n");
    bubbleSort(a, 10);
    median(a);
    printf(" is the median\n");
    mode(a);
    printf(" is the mode \n");
    printf("is the array sorted if yes it will return a 1 and otherwise a 0 \n");
    isSorted(a, 10);
    printf("now its your turn habibi to enter an int array so proceed by entering 10 numbers of int ");
    int values[10];
    for (int i = 0; i < 10; ++i)
    {
        scanf("%d", &values[i]);
        if (!isdigit(values[i])) // test case to see if it is a digit or not
            printf("\nEntered character is not a numeric character");
    }
    rintArray(values);
    printf("\n");
    printf("\n");
    arrayHistogram(values);
    printf("lets swap the values 2 \n");
    int first_value, second_value;
    scanf("%d", &first_value);
    scanf("%d", &second_value);
    swapValues(values, first_value, second_value);
    printArray(values);
    printf("lets bubbleSort\n");
    bubbleSort(values, 10);
    median(values);
    printf(" is the median\n");
    mode(values);
    printf(" is the mode \n");
    printf("is the array sorted if yes it will return a 1 and otherwise a 0 \n");
    isSorted(values, 10);
}

void printArray(int a[])
{
    printf("%7s %10s\n", "Index", "Value");
    for (int i = 0; i < 10; i++)
    {
        printf("%7d %10d\n", i, a[i]);
    }
}
void arrayHistogram(int a[])
{
    printf("%7s %10s %10s\n", "Index", "Value", "histogram");
    int count_of1 = 0;
    int count_of2 = 0;
    int count_of3 = 0;
    for (int i = 0; i < 10; i++)
    {
        if (a[i] == 1)
            count_of1++;
        if (a[i] == 2)
            count_of2++;
        if (a[i] == 3)
            count_of3++;
    }
    printf("%7d %10d ", 1, count_of1);
    printf("   ");
    for (int i = 0; i < count_of1; i++)
    {
        printf("*");
    }
    printf("\n");
    printf("%7d %10d", 2, count_of2);
    printf("    ");

    for (int i = 0; i < count_of2; i++)
    {
        printf("*");
    }
    printf("\n");
    printf("%7d %10d", 3, count_of3);
    printf("    ");

    for (int i = 0; i < count_of3; i++)
    {
        printf("*");
    }
    printf("\n");
}

void swapValues(int array[], int n1, int n2)
{
    int temp1;
    int temp2;
    temp1 = array[n1];
    temp2 = array[n2];
    array[n2] = temp1;
    array[n1] = temp2;
}
void bubbleSort(int arr[], int n)
{
    int temp;
    for (int x = 0; x < n - 1; x++)
    {

        for (int y = 0; y < n - x - 1; y++)
        {

            if (arr[y] > arr[y + 1])
            {

                temp = arr[y];

                arr[y] = arr[y + 1];

                arr[y + 1] = temp;
            }
        }
    }
    printArray(arr);
}
void median(int *a)
{
    bubbleSort(a, 10);
    printf("%d", a[(10 - 1) / 2]);
}
void mode(int a[])
{
    int count_of1 = 0;
    int count_of2 = 0;
    int count_of3 = 0;
    int max;
    for (int i = 0; i < 10; i++)
    {
        if (a[i] == 1)
            count_of1++;
        if (a[i] == 2)
            count_of2++;
        if (a[i] == 3)
            count_of3++;
    }
    if (count_of1 > count_of2)
    {
        if (count_of1 > count_of2)
        {
            max = count_of1;
        }
        else
        {
            max = count_of3;
        }
    }
    else
    {
        if (count_of2 > count_of3)
        {
            max = count_of2;
        }
        else
        {
            max = count_of3;
        }
    }
    printf("%d", max);
}
void isSorted(int a[], int size)
{
    int see = 1;
    for (int i = 0; i < size; i++)
    {
        if (a[i] > a[i + 1])
            see = 0;
    }
    printf("%d", see);
}