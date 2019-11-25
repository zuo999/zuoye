#include<stdio.h>
int main(void)
{
    int x,y,z,i;
    for(i=100;i<=999;i++){
        x=i/100;
        y=i/10-x*10;
        z=i%10;
        if(i==x*x*x+y*y*y+z*z*z)
        printf("i=%d\n",i);
    }
    return 0;
}
