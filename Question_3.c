
#include <stdio.h>

int main() {
  float bill_val,discount,remaining_amount;
  printf("enter bill value\n");
  scanf("%f", &bill_val);
  if(bill_val<1500){
    discount = (bill_val/100) * 7;
  } else if (bill_val>=1500 && bill_val<=3000){
      discount = (bill_val/100) * 12;
  }else if (bill_val>=1500 && bill_val<=3000){
      discount = (bill_val/100) * 12;
  }else if (bill_val>=3000 && bill_val<=5000){
      discount = (bill_val/100) * 22;
  }else if (bill_val>=3000 && bill_val<=5000){
      discount = (bill_val/100) * 22;
  }else if(bill_val > 5000){
     discount = (bill_val/100) * 30;
  }
  remaining_amount = bill_val - discount;
  printf("%f is the original amount due\n %f is the discount\n %f is the amount after discount\n",bill_val,discount,remaining_amount);
  return 0;
}
