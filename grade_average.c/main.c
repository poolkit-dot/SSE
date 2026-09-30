#include <stdio.h>

int main() {
  int grades[3],a,b,c;
  int average;

  /*grades[0] = a;
  grades[1] = b;
  grades[2] = c;*/
  
  printf("enter your grades");
  scanf("%d %d %d",&grades[0] ,&grades[1] ,&grades[2]);
  average = (grades[0] + grades[1] + grades[2]) / 3;
  printf("The average of the 3 grades is: %d", average);

  return 0;
}