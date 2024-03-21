#include <stdio.h>
#include<math.h>
int isPowerOfTwo(int n) {
    int m;
    for(int i=0;i<31;i++){
        m=pow(2,i);
        if(m==n){
            break;
        }
        else{
            continue;
        }

    }
    if(m==n){
        printf("True");
    }
    else{
        printf("False");
    }
}
int main(){
    int n;
    printf("Enter a number to check :- ");
    scanf("%d",&n);
    isPowerOfTwo(n);
    return 0; 
}