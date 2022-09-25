#include<stdio.h>  
      
    void fecto(int num)  
    {  
        int i;  
      
        printf("Prime Factors %d \n", num);  
        for(i=2;num>1;i++)  
        {  
            while(num % i == 0)  
            {  
                printf("%d ", i);  
                num = num / i;  
           }  

       }  
      printf("\n");  
  }  
      
    void main()  
   {  
       int num;  
      
      printf("Enter integer\n");  
       scanf("%d", &num);  
     
       fecto(num);  
   }  
