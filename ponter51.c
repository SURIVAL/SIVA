# SIVA
#include<stdio.h>
void main()
{
 int i, *ptr1, *ptr2;
 
   printf("\nEnter two numbers : ");
   scanf("%d %d", ptr1, ptr2);
 
   i = *ptr1 + *ptr2;
 
   printf("Sum = %d", i);
   return (0);
}
