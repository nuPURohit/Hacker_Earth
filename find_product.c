#include<stdio.h>
main()
{
    int n,i,a[1000];
    long p=1;
    scanf("%d",&n);
    printf("\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        p=p*a[i]%1000000007;
    }
    printf("%d",p);
}
 
