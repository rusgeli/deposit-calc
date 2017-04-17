#include <stdio.h>
#include "deposit.h"

int less_days(int money, int days)
{
    if (days>=0 && days<=30){
        money=0.9*money;
	}
	return money;
}

int less_100000(int money, int days)
{
	if (days>30 && days<=120){
		money=1.02*money;
	}
	if (days>120 && days<=240){
        money=1.06*money;
    }
    if (days>240 && days<=365){
        money=1.12*money;
    }
	return money;
}

int more_100000(int money, int days)
{
    if (days>30 && days<=120){
        money=1.03*money;
    }
    if (days>120 && days<=240){
        money=1.08*money;
    }
    if (days>240 && days<=365){
        money=1.15*money;
    }
	return money;
}
