//Write a program in C to copy the elements of one array into another array.
//Input Format: Input consist of Two lines. First Line contains the number of elements N and the next contains array elements (space separated). 
//Output Format: Output consist of a single line, display the array elements( first and second(copied array) array) in the given order with space separated with appropriate statement
//Example
//Input:
//3 
//15 10 12
//Output: 
//The elements stored in the first array are :
//15 10 12
//The elements copied into the second array are :
//15 10 12
#include<stdio.h> 

int main()
{
   
   int a1[100],a2[100],i,n;
 printf("Enter the nor of inputs\n");
 scanf("%d",&n);
 printf("enter the a1 inputs\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a1[i]);
  a2[i]=a1[i];
 }
  printf("elements of a2 -\n");
  for(i=0;i<n;i++)
  {
    printf("%d",a2[i]);
  }
  
  
 
   return 0; 
}
