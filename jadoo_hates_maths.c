#include <stdio.h>
 
int main()
 
{
 
int n,i;
 
scanf("%d",&n);
 
for(i=n+1;i<260;++i)
 
if(i%3 && i%10!=3 && (i%100)/10!=3)
 
break;
 
printf("%d",i);
 
return 0; 
}
