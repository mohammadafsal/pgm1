#include<stdio.h>
int main()
{
int m,n,p,q,i,j,k,sum=0;
int A[10][10],B[10][10],C[10][10];
printf("enter the order of first matrix");
scanf("%d%d",&m,&n);
printf("enter the order of second matrix");
scanf("%d%d",&p,&q);
if(n!=p)
{
printf("multiplication is not possible");
}
else
{
printf("enter te elementss of first matrix\n");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&A[i][j]);
}
printf("enter the elements of second matrix\n");
for(i=0;i<p;i++)
for(j=0;j<q;j++)
scanf("%d",&B[i][j]);
for(i=0;i<m;i++)
for(j=0;j<q;j++)
{
C[i][j]=0;
for(k=0;k<p;k++)
{
C[i][j]=C[i][j]+A[i][j]*B[k][j];
}}
printf("product of matrix:\n");
for(i=0;i<m;i++)
for(j=0;j<q;j++)
{
printf("%d\t",C[i][j]);
}
printf("\n");
}



