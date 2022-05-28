#include <iostream>
#include "HotDogStand.h"
using namespace std;

HotDogStand::HotDogStand() {
	numSold = 0;
	ID=0;

}
HotDogStand::HotDogStand(int n) {
	numSold = 0;
	ID=n;
}
HotDogStand::HotDogStand(const HotDogStand& obj) {
	numSold = 0;
	this->ID = obj.ID;
}
HotDogStand::~HotDogStand() {
}
void HotDogStand::JustSold() {
	numSold++;
	totalSold++;
}
void HotDogStand::SetID(int n){
	ID = n;
}
int HotDogStand::getID() {
	return ID;
}
int HotDogStand::getnumSold() {
	return numSold;
}
int HotDogStand::totalSold = 0;
int HotDogStand::GetTotalSold() {
	return totalSold;
}