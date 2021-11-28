#include <stdio.h>
int input();
int add(int,int);
void output(int,int,int);

int main(void)
{
  int a,b,sum;
  printf("Enter the first number\n");
  a = input();
  printf("Enter the second number\n");
  b = input();
  sum = add(a,b);
  output(a,b,sum);
  return 0;
}
int input()
{
  int x;
  scanf("%d",&x);
  return x;
}
int add(int x,int y)
{
  return x+y;
}
void output(int x,int y,int z)
{
  printf("%d + %d = %d\n",x,y,z);
}