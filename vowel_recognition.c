#include<stdio.h>
#include<string.h>
main()
{
   long long int count,t,i,j,k,len,m;
    char s[100001],ch;
 
    scanf("%d",&t);
    if(t>=1&&t<=10)
   {
        for(m=0;m<t;m++)
        {
            count=0;
            scanf("\n%s",&s);
            long long int n;
            n=strlen(s);
            for(j=0;j<n;j++)
            {
     	   ch=s[j];
     	       if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
     	       {
     	           count+=(n-j)*(j+1);
                }
     	   }printf("%lld",count);
   printf("\n");
        }
    }   
    
}
