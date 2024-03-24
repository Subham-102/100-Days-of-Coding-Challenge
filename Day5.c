#include<stdio.h>
int numWaterBottles(int numBottles, int numExchange) {
    int i=numBottles;
    int count=numBottles;
    int j;
    while(i>=numExchange){
        j=i%numExchange;
        i=i/numExchange;

        
        
        count+=i;
        i+=j;
    }
    printf( "%d\n",count);
    return 0;

}
int main(){
    int numBottles,numExchange;
    printf("Enter the number of Filled water Bottles :- ");
    scanf("%d",&numBottles);
    printf("Enter the number of bottles that can be exchanged :- ");
    scanf("%d",&numExchange);
    numWaterBottles(numBottles,numExchange);
    return 0;

}