#include <stdio.h>
#include<conio.h>
int fact(int);
void main()
{
           int n,fact,num;
           
            printf(“Enter a positive integer: “);
            scanf(“%d”, &n);
           fact=fact(n);
           printf(“Factorial of %d = %d”,n, fact) ;
          getch();

}
int fact(int num)
{
       int i=1,f=1;
               while(i<=num)

              {
                       f=f*i;
                       i++;
              }
return f;
}


