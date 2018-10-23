#include<stdio.h>
void swap1(int a, int b);
void swap2(int a, int b);
void swap3(int a, int b);
void swap4(int a, int b);

int main()
{
int a,b;
printf("Enter two number to be swapped in order to implement. Please avoid 0 as input:");
scanf("%d%d", &a, &b);

swap1(a, b);   //swapping using addition and subtraction
swap2(a, b);   //swapping using multiplication and division
swap3(a, b);   //swapping using xor operation
swap4(a, b);   //swapping using temporary variable

return 0;
}

void swap1(int a, int b)
{
  b = a + b;
  a = b - a;
  b = b - a;

  printf("The swapped value of a and b is %d and %d", a, b);
}

void swap2(int a, int b)
{
  b = a * b;
  a = b / a;
  b = b / a;

  printf("The swapped values of a and b are %d and %d", a, b);
}

void swap3(int a,int b)
{
  a^ = b^ = a^ = b; 
  
  printf("The swapped values using xor of a and b are %d and %d", a, b);
}

void swap4(int a, int b)
{
  int temp;
  temp = a;
  a = b;
  b = temp;
  
  printf("The swapped values of a and b are %d and %d", a, b);
}
  
