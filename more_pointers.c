#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
// Defining comparator function as per the requirement
static int compare(const void* a, const void* b)
{
 
    // setting up rules for comparison
    return strcmp(*(const char**)a, *(const char**)b);
}
 
// Function to sort the array
void sort(const char* arr[], int n)
{
    // calling qsort function to sort the array
    // with the help of Comparator
    qsort(arr, n, sizeof(const char*), compare);
}
 
int main()
{
const char* arr1 []={"ab", "ac"};
int size_of_arr1 = 2;
const char* arr2 []={"za", "zb", "zzzzc"};
int size_of_arr2 = 3;

const char* result [size_of_arr1+size_of_arr2]; 
for (int i = 0; i <size_of_arr1;i++){
 char * pt = arr1[i];
  result[i] = pt ;
}
int index = 0;
for(int i = size_of_arr1 ; i < size_of_arr1+size_of_arr2 ; i++){
  char* pt2= arr2[index];
   result[i] = pt2 ;
   index++;

}
int i ; 
    // Print the given names
    printf("Given array is\n");
    for (i = 0; i < 5; i++)
        printf("%d: %s \n", i, result[i]);
 
    // Sort the given names
    sort(result, 5);
 
    // Print the sorted names
    printf("\nSorted array is\n");
    for (i = 0; i < 5; i++)
        printf("%d: %s \n", i, result[i]);
 
    return 0;
}