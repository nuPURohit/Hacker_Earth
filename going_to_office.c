#include <stdio.h>
 
int main() {
 
   long long int n;
   scanf("%d",&n);
 
   long long int oc,of,od;
   scanf("%lld %lld %lld",&oc,&of,&od);
  
   long long int cs,cb,cm,cd;
    scanf("%lld %lld %lld %lld",&cs,&cb,&cm,&cd);
    
   long long int osum,csum;
 
   osum=oc+(n-of)*od;
 
   csum=cb+(n/cs)*cm+(n*cd);
 
   if(osum<=csum)
 
    printf("Online Taxi");
 
   else printf("Classic Taxi");
 
}
