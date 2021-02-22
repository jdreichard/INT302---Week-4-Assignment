#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;

class ItemToPurchase {

public:
	ItemToPurchase();
	void SetName(string name);
	void SetPrice(int price);
	void SetQuantity(int quantity);
	int applyCoupon(string couponcode);
	int setQuantityDiscountMinimum(int quantity);
	int setQuantityDiscountPercentage(int percentage);

	string GetName() const;

	int GetPrice() const;
	int GetQuantity() const;

	void Print();

private:
	string itemName;
	int itemPrice;
	int itemQuantity;

	//=============================
	// Added Properties
	//=============================
	string couponCode;
	int quantityDiscountMinimum;
	int quantityDiscountPercentage;

};

#endif