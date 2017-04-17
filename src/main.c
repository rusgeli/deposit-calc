#include <stdio.h>
#include "deposit.h"

int main()

{
    int days, money;
    printf("input days and money: ");
    scanf("%d %d", &days, &money);
    if (days<=365 && money>=10000){
        money = less_days(money, days);
    
    	if(money<=100000){
      		money = less_100000(money, days);
    	}
    	if(money>100000){
        	money = more_100000(money, days); 
    	}
        printf("your money will be %d rubles", money);
    }
    else {printf("wrong input!");}

    return 0;
}



