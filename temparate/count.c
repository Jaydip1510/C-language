#include<stdio.h>
int main(){
              int num,count=0;
              printf("Enter Any number:-");
              scanf("%d",&num);

              while (num > 0)
              {
                num = num / 10;
                count = count + 1;
              }
              printf("\n number of digit in a given number =%d",count);
              
}