#include<iostream>
#include"Payment.h"
#define size 2

using namespace std;

Discount::Discount(){}

Discount::Discount(int sId, int eId){
	staffId = sId;
	eventId = eId;
}

void Discount::calculateDiscount(){}

void Discount::displayDiscount() {}

Discount:: ~Discount() {}