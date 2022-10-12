#include <stdio.h>
#include <math.h>

int lsb(int n)
{
  // lets tarnsform this int to a binary snb
  int bin = n | 0;
  int position = 0;
  int turn = 0;
  int z = bin & 1;
  while (bin > 0 && z != 1)
  {
    bin = bin >> 1;
    if (turn != 0)
      position++;
    turn++;
  }
  return position;
}
int msb(int n)
{
  // lets tarnsform this int to a binary snb
  int bin = n | 0;
  int position = 0;
  while (n > 1)
  {
    position++;
    n = n >> 1;
  }
  return position;
}

// convert decimal to binary

int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  if (!isdigit(n)) // test case to see if it is a digit or not
    printf("\nEntered character is not a numeric character");
  int msb1 = msb(n);
  int lsb1 = lsb(n);
  printf("%d\n", msb1);
  printf("%d\n", lsb1);

  printf("%d", msb1 - lsb1);
  return 0;
}