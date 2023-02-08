#include<stdio.h>
int main() 
{
int n,A[20],i;
printf("enter  n:\n");
scanf("%d",&n);
printf("% enter the elements:\n");
for(i=0;i<n;i++)
    scanf("%d",&A[i]); 
	printf("The even numbers in the set are: \n");  
for(i=0;i<n;i++)
{
if(A[i]%2==0)
    printf("%d is even number.\n",A[i]);
  
}
printf("The odd numbers in the set are: \n");
{
for(i=0;i<n;i++)
{
if(A[i]%2!=0)
    printf("%d is odd number.\n",A[i]);
}
}
}
