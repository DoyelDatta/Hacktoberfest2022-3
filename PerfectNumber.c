#include<stdio.h>  
void main()  
{   
int num, rem, sum = 0, i;  
// take an input from the user.  
printf("Enter a number\n");  
scanf("%d", &num);       
for(i = 1; i < num; i++)  
                     {  
                              rem = num % i;  
                             if (rem == 0)  
                                        {  
                                               sum = sum + i;  
                                         }  
                        }  
if (sum == num)  
                      printf(" %d is a Perfect Number",num);  
           else  
                      printf("\n %d is not a Perfect Number",num);  
return 0;  
}  
