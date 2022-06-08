#include<stdio.h>

int main(){
 int a,b;
 char ch;
 printf("enter your numbers");
 scanf("%d %d",&a,&b);
 printf("what operations would you like to perform?");

 scanf("%c",&ch);
 switch(ch){
     case '+': printf("your sum = %d",a+b);
         break;
        
     
     case '-':printf("your diff = %d",a-b);
         break;
     
     case '*':       printf("your prod = %d",a*b);
            break;
  

     case '/': printf("your div = %d",a/b);
        break;
     
     case '%': printf("your remainder is = %d",a%b);
         break;
        
     
     default:
  
       printf("wrong operation dude");
     
 }
return 0;
}