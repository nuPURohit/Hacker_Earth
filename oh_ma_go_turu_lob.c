#include<stdio.h>
#include<string.h>
main()
{
    int t,j,k;
    char s[100000];
    int a,e,i,o,u,A,E,I,O,U;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        scanf("%s",&s);
        //printf("\nlenght s-%d",strlen(s));
        a=e=i=o=u=0;
        A=E=I=O=U=0;
        for(j=0;j<strlen(s);j++)
        {
            if(s[j]== 'A')
            {
               A++;
 	       }
 	       if(s[j]=='E')
 	       {
         	  E++;
            }
            if(s[j]== 'I')
            {
               I++;
 	       }
 	       if(s[j]== 'O')
            {
               O++;
 	       }
 	       if(s[j]== 'U')
            {
               U++;
 	       }
 	       if(s[j]== 'a')
            {
               a++;
 	       }
 	       if(s[j]== 'e')
            {
               e++;
 	       }
 	       if(s[j]== 'i')
            {
               i++;
 	       }
 	       if(s[j]== 'o')
            {
               o++;
 	       }
 	       if(s[j]== 'u')
            {
               u++;
 	       }
            
 	   }
 
        if((A>0 && E>0 && I>0 && O>0 && U>0)||(a>0 && e>0 && i>0 && o>0 && u>0 ))
        {
            printf("lovely string\n");
        }
        else
        {
            printf("ugly string\n");
        }
    }           
}
