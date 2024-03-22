#include<stdio.h>
int fib(int n) {
   int zero = 0;
   int first = 1;
  
  
   if( n == 0){
       return 0;
   }
   if(n == 1){
       return 1;
   }
  
   int num;
   int count = 2;
   for(count ; count <= n ; count++){
       
       num = zero + first ;
       zero = first;
       first = num;
       
   }
    return num;
}
int main(){
    int n;
    printf("Enter a number :- ");
    scanf("%d",&n);
    int a=fib(n);
    printf("%d",a);
    return 0;
}