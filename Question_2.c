
#include <stdio.h>

int main() { 
  float units ,bill;
 printf("enter units \n");
 scanf("%f",&units);
    if(units<30){
      bill = 0.60 * units;
    }else if (units<110){
      bill = 0.85 * units;
    }else if (units < 210){
       bill = 1.30 * units;
    }else if (units >=210){
       bill = 1.30 * units;
    }
    bill += bill/100 * 15.0;
    printf("%f RS is your bill \n",bill);
  return 0;
}







