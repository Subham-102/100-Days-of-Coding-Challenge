#include<stdio.h>


int tribonacci(int n){
    long int F[41];
    F[0]=0;
    F[1]=F[2]=1;
    for(int i=0;i<n;i++){
        F[i+3]=F[i]+F[i+1]+F[i+2];
    }
    return F[n];
}
int main(){
    int n;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    int result=tribonacci(n);
    printf("%d",result);
    return 0;
}