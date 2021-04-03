#include <stdio.h>
 
int main(){
    int test,green,purple,num,i,j,c,d,amount=0,count1,count2;
 
    scanf("\n%d", &test);
 
    if (test >=1  && test <=10)
    {
        for(i=0;i<test;i++)
        {
            scanf("\n%d %d",&green,&purple);
            scanf("\%d",&num);
            count1=0;
            count2=0;
            if (num >=1  && num <=10)
                {
                for(j=0;j<num;j++)
                    {
                        scanf("%d %d",&c,&d);
                        count1+=c;
                        count2+=d;
                    }
                    if(count1<count2)
                        {
                            if(green<purple)
                            {
                            amount=(count2*green)+(count1*purple);
                            }
                            else
                            {
                            amount=(count2*purple)+(count1*green);
                            }
                        }
                        else
                        {
                            if(green<purple)
                            {
                            amount=(count1*green)+(count2*purple);
                            }
                            else
                            {
                            amount=(count1*purple)+(count2*green);
                            }
                        }
                }
                printf("\n%d",amount);
        }
        
    }       
}
