#include<stdio.h>
void main()
{
 char ch;
 int n;
 do
 {
 printf("Enter your Number:");
 scanf("%d",&n);
 if(n%2!=0)
 printf("Entered number is odd");
 else
 printf("Entered number is even");
 printf("\nDo you want to enter one more number(y/n):");
 scanf("%s",&ch);
 }while(toupper(ch)=='Y');
}
