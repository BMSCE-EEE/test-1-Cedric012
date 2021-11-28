#include<stdio.h>
void input(int*,int*);
void add(int ,int ,int*);
void output(int ,int ,int);

int main(void)
{
  int a,b,sum;
  printf("Input:\n");
  input(&a,&b);
  add(a,b,&sum);
  output(a,b,sum);
  return 0;
}
void input(int *x,int *y)
{
  scanf("%d%d",&*x,&*y);
}
void add(int x,int y,int *z)
{
  *z = x + y;
}
void output(int x,int y,int z)
{
  printf("output:\n%d + %d = %d\n",x,y,z);
}