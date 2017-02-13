#include <stdio.h>

int main()

{
    int days, money;
    printf("input days and money: ");
    scanf("%d %d", &days, &money);
    if (days<=365 && money>=10000)
    {
        if (days>=0 && days<=30){
            money=0.9*money;
        }
        if(money<=100000){
            if (days>30 && days<=120){
                money=1.02*money;
            }
            if (days>120 && days<=240){
                money=1.06*money;
            }
            if (days>240 && days<=365){
                money=1.12*money;
            }
        }
        if(money>100000){
            if (days>30 && days<=120){
                money=1.03*money;
            }
            if (days>120 && days<=240){
                money=1.08*money;
            }
            if (days>240 && days<=365){
                money=1.15*money;
            }
        }
        printf("your money will be %d rubles", money);
    }
    else {printf("wrong input!");}

    return 0;
}
