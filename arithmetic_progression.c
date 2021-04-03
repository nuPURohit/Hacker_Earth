#include<stdio.h>
#include<math.h>
int main() 
{ 
 long long int t,a,b,c,count; 
int i;
scanf("%lld",&t); 
 for(i=0;i<t;i++) 
 { 
scanf("%lld %lld %lld",&a,&b,&c); 
count=abs((2*b-(a+c))); 
if(count%2==0) 
printf("%d\n",count/2); 
else 
printf("%d\n",count/2+1);
 }
 return 0;
}
