#include<stdio.h>
#include<math.h>
int main(void)
{
  int n,i,a=0;
  for(n=2;n<=500;n++)
  {
   for(i=2;i<=sqrt(n);i++) 
   {
    if(n%i==0)
    break;
   }
   if(i>sqrt(n)) 
   {
     printf("%5d",n);
     a=a+1;
   }
   if(a%10==0){
       printf("\n");
   }
}
 return 0;
}
