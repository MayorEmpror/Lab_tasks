
#include <stdio.h>

int main() {
 
int time;
   printf("enter time of a 24 hour clock\n");
   scanf("%d",&time);
   if (time>=6 && time <=11){
    printf("good mourning\n");
   }else if(time>=12 && time <=17){
    printf("good afternoon\n");
   }else if(time>=18 && time <=23){
    printf("good evening\n");
   }else if(time>=0 && time <=5 || time==24){
    printf("good night\n");
   }else if(time >24){
    printf("Invalid_value\n");
   }
  return 0;
}
