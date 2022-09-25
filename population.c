#include<stdio.h>
int main()
{
    int i ,n;
    int population;
    int even;
    int odd;
        printf("Enter an  number of population ");
  scanf("%d", &population);
      printf("Enter an  number of years you want to print ");
  scanf("%d", &n);
for(i=1;i<=n;i++)    {
       
  if (n%2==0)
 population = population -(population)*0.2;
 else 
  population = population -(population)*0.3;
        printf("%d year: %d\n",i, population);
    }
} 