#include<stdio.h>
#include<conio.h>
int main(){
   int a[10][10], b[10][10], c[10][10], d[10][10], i, j, m, n, p, q;

   printf("Enter row & column of A matrix\n");
   scanf("%d%d", &n,&m);
   printf("%d%d\n", n, m);

   printf("Enter row & column of B matrix\n");
   scanf("%d%d", &p,&q);
   printf("%d%d\n", p, q);

   /* check if matrices can be added */
   if((n==p) && (m==q)){
      printf("Matrices can be added\n");
      printf("Input matrix A\n");
      for(i=0; i<n; ++i)
      for(j=0; j<m; ++j)
      scanf("%d", &a[i][j]);

      /* print A matrix */
      for(i=0; i<n; ++i){
         for(j=0; j<m; ++j)
         printf("%5d", a[i][j]);
         printf("\n");
      }

      printf("Input matrix B\n");
      for(i=0; i<n; ++i)
      for(j=0; j<m; ++j)
      scanf("%d", &b[i][j]);

      /* print B matrix */
      for(i=0; i<n; ++i){
         for(j=0; j<m; ++j)
         printf("%5d", b[i][j]);
         printf("\n");
      }

      /* Addition of A and B matrix */
      for(i=0; i<n; ++i)
      for(j=0; j<m; ++j)
      c[i][j] = a[i][j] + b[i][j];
      printf("Sum of A and B matrices:\n");
      for(i=0; i<n; ++i){
         for(j=0; j<m; ++j)
         printf("%5d", c[i][j]);
         printf("\n");
      }

      /* Subtraction of A and B matrix */
      for(i=0; i<n; ++i)
      for(j=0; j<m; ++j)
      c[i][j] = a[i][j] - b[i][j];
      printf("Subtraction of A and B matrices:\n");
      for(i=0; i<n; ++i){
         for(j=0; j<m; ++j)
         printf("%5d", c[i][j]);
         printf("\n");
      }

      /* Multiplication of A and B matrix */
      for(i=0; i<n; ++i)
      for(j=0; j<m; ++j)
      c[i][j] = a[i][j] *b[i][j];
      printf("Multiplication of A and B matrices:\n");
      for(i=0; i<n; ++i){
         for(j=0; j<m; ++j)
         printf("%5d", c[i][j]);
         printf("\n");
      }

      /* Dividation of A and B matrix */
      for(i=0; i<n; ++i)
      for(j=0; j<m; ++j)
      c[i][j] = a[i][j] / b[i][j];
      printf("Dividation of A and B matrices:\n");
      for(i=0; i<n; ++i){
         for(j=0; j<m; ++j)
         printf("%5d", c[i][j]);
         printf("\n");
      }
   }
   else{
      printf("Matrices cannot be added or Subtract & Multiplication, Dividation\n");
   }
}
