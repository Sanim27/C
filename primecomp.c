#include<stdio.h>
// zero ko chai problem xa haha
int main(){
      int i,num;
      int z=0;
printf("enter a number");
scanf("%d",&num);


for(i=2;i<=0.5*num;i++){

     if(num%i==0){
           z=z+1;
          
     }
     break;

}
if(z==1){
      printf("composite number");
}
else{
      printf("prime number");
}





return 0;
}