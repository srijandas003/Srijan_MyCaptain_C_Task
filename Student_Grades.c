#Student Grades programs conditional statements
#include<stdio.h>
int main(void)
{
 int num;
 printf("Enter Marks:");
 scanf("%d",&num);
 printf("You Entered %d",num);
      
      if(num>=85 && num<=100){
        	printf("\nYou Got A Grade");
        }
      else if (num>=70 && num<=84){
      	    printf("\nYou Got B Grade");
	    }
	  else if(num>=55 && num<=69){
      	    printf("\nYou Got C Grade");
      	}
      else if(num>=40 && num<=54){
      	    printf("\nYou Got D Grade");
		}
	  else if(num<40){
      	    printf("\nYou Got F Grade");
      	}
    return 0;
}
