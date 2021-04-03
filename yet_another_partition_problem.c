#include<stdio.h>
 
int main()
 
{
 
   long long int t,i,n,x,y,z,max;
 
   scanf("%lld",&t);
 
   while(t--)
 
   {
 
       scanf("%lld",&n);
 
       long long int a[n];
 
       for(i=0;i<n;i++)
 
       {
 
           scanf("%lld",&a[i]);
 
       }
 
       x=0;
 
       for(i=0;i<n;i++)
 
       {
 
           x^=a[i];
 
       }
 
       max=x;
 
       y=0;
 
       z=0;
 
       for(i=0;i<n;i++)
 
       {
 
           y^=a[i];
 
           z=y&(y^x);
 
           if(z>max)
 
           {
 
               max=z;
 
           }
 
       }
 
       printf("%lld\n",max);
 
   }
 
   return 0;
 
}
