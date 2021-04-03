#include<stdio.h>
#include<string.h>
main()
{
    char a[100],ch1,ch2;
    int i,k,x=0;
    //printf("\nEnter your string => ");
    scanf("%s",a);
    k=strlen(a)-1;
    for(i=0;i<strlen(a);i++)
    {
        ch1=a[i];
        ch2=a[k];
        if(ch1!=ch2)
        {
            x=1;
            break;
        }
        k--;
    }
    if(x==0)
        {
            printf("YES");
        }
    else
    {
        printf("NO");
    }
}
