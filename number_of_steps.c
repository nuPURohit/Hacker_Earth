#include<stdio.h>

 int main()
 {
     int n,i=0,count,l;

     scanf("%d",&n);
     
        int a[n],b[n];
         for(i=0;i<n;i++)
         {
             scanf("%d",&a[i]);
		 }
		 for(i=0;i<n;i++)
		 {
             scanf("%d",&b[i]);
         }

        
        //bubble sorting
         for(i=0;i<n-1;i++)
         {
             if(a[i]<a[i+1])
             {  l = a[i];
                a[i] = a[i+1];
                a[i+1] = l;

                l = b[i];
                b[i] = b[i+1];
                b[i+1] = l;
                
             }
             
         }
		 //subtracting and checking
         for(i=0;i<n-1;i++)
         {
             while(a[n-1]!=a[i])
             {
                 if(a[i]<=0)
                    { printf("-1");
                      exit(0);
                    }
                if(a[n-1]<a[i]) 
                {
                a[i]=a[i]-b[i];
                count++; 
                }
                if(a[n-1]>a[i]) 
                {
                    a[n-1]=a[n-1]-b[n-1];
                    count++; 
                }
             }
          
        }
         printf("%d",count);
        
        return 0;
 }
