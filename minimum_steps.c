#include<stdio.h>
int r(a,b,c)
{
 if(a>=b)
 {
  return ((a-b)/2+(a-b)%2);
 }
 else if(b%c==0)
 {
  return (1+r(a,b/c,c));
 }
 else
 {
int x=(b/c+1)*c;
  return ((x-b)/2+(x-b)%2+r(a,x,c));
 }
}
int main()
{
int t;
scanf("%d",&t);
for(int i=0;i<t;i++)
 {
int k,m,n;
scanf("%d %d %d",&k,&m,&n);
printf("%d\n",r(k,m,n));
 }
 return 0;
}
