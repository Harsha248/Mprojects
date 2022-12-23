/*Basic Arthemetic calculations of two operands using a single operator*/
#include <stdio.h>
#include <math.h>
float cal(float a,char operator,float b)
{
    switch(operator)
    {
    case '/': return a/b;
    case '*': return a*b;
    case '+': return a+b;
    case '-': return a-b;
    case '^': return pow(a,b);
    default: printf("Fail.\n");
    }
}
int main()
{
  float a,b,answer;
  char operator;
  printf("Enter calculation:\n\n");
  scanf("%f %c %f", &a, &operator, &b);
  answer=cal(a,operator,b);
  printf("%g %c %g =  %g\n\n",a,operator,b,answer);
  return 0;
}
