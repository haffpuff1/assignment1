#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print();
void concat();
void print(char *pt)
{
   int i = 0;
   while (pt[i] != '\0')
   {
      printf("%c", pt[i]);
      i++;
   }

   void concat(char * arr[2][15], int size)
   {
      char *result[2];
      for (int i = 0; i < 2; i++)
      {
         char *temp = (char *)malloc(1000 * sizeof(char));
         temp[0] = '\0';
         for (int j = 0; j < 3; j++)
         {
            strcat(temp, arr[i][j]);
            if (j != 2)
               strcat(temp, " ");
         }
         result[i] = temp;
      }
      for (int i = 0; i < 2; ++i)
      {
         print(result[i]);
         printf("\n");
      }
   }
   int main()
   {
      char *arr[2][15] = {{"I", "LOVE", "CODING"}, {"THIS", "IS", "SPARTA"}};
      concat(arr, 2);
   }
