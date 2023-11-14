#include<stdio.h>
int main()
{
    char expression [50];
    int x=0,i=0;
    printf("enter an expression :");
    scanf("%s", expression );
    while (expression[i]!='/0')

    {
       if (expression[i]=='(')
       {
      x++;
       }
       else if(expression[i]==')')
       {
        x--;
        x<0;
        break;
       } 
       i++;
       if (x==0)
       {
        printf("expression is balanced ");
       }
       
       else
       {
        printf("expression  is an un balanced expression ");
       }
    }
return 0;
}