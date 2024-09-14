#include <stdio.h> 
int main(){
int marks;
  printf("enter marks \n");
  scanf("%d",&marks);
  
  if (marks <= 100&&marks >=90) {	
  	printf("Grade A  \n");
  }
  
  else if (marks <= 89&&marks >=80){
  		printf("Grade B \n");
  }else if (marks <= 79 &&marks >=70){
  	printf("Grade C \n");}
  else if (marks <= 69 && marks >=60){
  	printf("Grade D \n");
  } else if(marks <60){
  printf("You failed F \n");
  }
  

	  
	return 0 ; 
}

