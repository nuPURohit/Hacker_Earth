#include <stdio.h>
 
int main(){
 
int n,f=1,i;
scanf("%d",&n);
if(n>=1&&n<=10)
{
    for(i=n;i>0;i--)
    {
        f=f*i;
    }
    printf("%d",f);
}
}
