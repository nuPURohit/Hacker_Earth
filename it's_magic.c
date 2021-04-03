#include <stdio.h>
#include <stdlib.h>
int main()

{
   long long int n,arr[100000],min=2e9,index=-1,i;

   long long int sum = 0;

   scanf("%lld",&n);
   for(i = 0; i < n; i++)
   {
	scanf("%lld",&arr[i]);
   	sum+=arr[i];
   }

   for(i = 0; i < n; i++)
   {
       if((sum-arr[i])%7==0)
       {
           if(arr[i] < min)
		   {
               min =arr[i];
               index =i;
           }
       }

   }

   printf("%lld\n",index);
   return 0;
}



