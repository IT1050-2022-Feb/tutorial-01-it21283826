#include <stdio.h>

int main (void)
{
   int mark1,mark2;
   float average;

  printf("Enter mark1:");
  scanf("%d",&mark1);

  printf("Enter mark2:");
  scanf("%d",&mark2);

  average=(mark1+mark2)/2.0;

  printf("Average:%.2f",average);

  return 0;
}
