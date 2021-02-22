#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

ItemToPurchase::ItemToPurchase() {
	itemName = "none";
	itemPrice = 0;
	itemQuantity = 0;

	// ========================
	//  Added Properties
	// ========================
	couponCode = "";
	quantityDiscountMinimum = 0;
	quantityDiscountPercentage = 0;

	return;
}

void ItemToPurchase::SetName(string name) {
	itemName = name;

	return;
}

// ==============================
//  Finish this method
// ==============================
int ItemToPurchase::applyCoupon(string couponcode) {

	if (couponcode == couponCode) {

	}

	return itemPrice;
}

// ==============================
//  Finish this method
// ==============================
void setQuantityDiscountMinimum(int quantity) {

}

// ==============================
//  Finish this method
// ==============================
void setQuantityDiscountPercentage(int percentage) {

}

void ItemToPurchase::SetPrice(int price) {
	itemPrice = price;

	return;
}

void ItemToPurchase::SetQuantity(int quantity) {
	itemQuantity = quantity;

	return;
}

string ItemToPurchase::GetName() const {
	return itemName;
}

int ItemToPurchase::GetPrice() const {

	// ==========================================
	//  Add a check for quantity discount here
	// ==========================================

	return itemPrice;
}

int ItemToPurchase::GetQuantity() const {
	return itemQuantity;
}

void ItemToPurchase::Print() {
	cout << itemName << " " << itemQuantity << " at $" << itemPrice << " = $" << itemPrice * itemQuantity << endl;
}