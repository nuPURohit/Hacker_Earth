#include<stdio.h>
long long int solve (long long int n, long long int k)
{
    long long int divisors,c,b,sum,n2;
    if (n<k)
        {
            sum = n*(n+1)/2;
            return sum;
        }
        else if ((n/k)==1)
        {
            sum = (n*(n+1)/2) - k + 1 ;
            return sum;
        }
        else
        {
            sum = (n*(n+1)/2);
            divisors = n/k;
            n2 = divisors*k;
            b=b+solve(n2/k,k);
            c=((divisors)*(2*k+(divisors-1)*k))/2;
            return (sum-c+b);
        }
}
    
 
main()
{
    long long int t,n,i,k,x;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld %lld",&n,&k);
        x=solve(n,k);
        printf("%lld\n",x);
    }
}
