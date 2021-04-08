#pragma once
#include "Warehouse.h"

void addStock(std::vector<productClass>& v) {
	productClass product;
	bool inVec = false;
	int itemIndex = 0;
	//cout << "Enter the item's name: ";
	//cin >> product.itemName;
	for (int i = 0; i < v.size(); i++) {
		if (v[i].itemName == product.itemName) {
			inVec = true;
			itemIndex = i;
		}
	}
	if (inVec == true) {
		//cout << "Enter the number of " << v[itemIndex].itemName << " stock to add: ";
		//cin >> product.stock;
		v[itemIndex].stock = v[itemIndex].stock + product.stock;
		writeDatabase(v);
	}
	else {
		//cout << "Enter the item's stock: ";
		//cin >> product.stock;
		//cout << "Enter the item number: ";
		//cin >> product.itemNum;
		//cout << "Enter the item's location: ";
		//cin >> product.itemLoc;
		v.push_back(product);
		writeDatabase(v);
	}
}

void removeStock(std::vector<productClass>& v) {
	int targetItem = 0;
	bool inVec = false;
	int itemIndex = 0;
	int subStock = 0; // number of stock that will be subtracted from database, entered by user

	//cout << "Enter the number ID of the item you would like to remove: ";
	//cin >> targetItem;

	for (int i = 0; i < v.size(); i++) {
		if (v[i].itemNum == targetItem) {
			inVec = true;
			itemIndex = i;
		}
	}
	
	if (inVec == true) {
		//cout << "Enter the number of " << v[itemIndex].itemName << " stock you would like to remove: ";
		//cin >> subStock;
		v[itemIndex].stock = v[itemIndex].stock - subStock;
		if (v[itemIndex].stock <= 0) {
			v.erase(v.begin() + itemIndex);
		}
		writeDatabase(v);
	}
	else {
		//cout << "Item not found in the warehouse or item number typed incorrectly" << endl;
	}
}

 void writeDatabase(std::vector<productClass> v) {
	 std::ofstream outFile("database.txt");
	 for (int i = 0; i < v.size(); i++) {
		 outFile << v[i].itemNum << " " << v[i].stock << " " << v[i].itemName << " " << v[i].itemLoc << " " << std::endl;
	 }
 }

 std::vector<productClass> readDatabase() {

	 std::vector<productClass> products;
	 productClass product;
	 std::ifstream inFile("database.txt");
	 std::string pData;
	 int numOfAttributes = 4;
	 int i = 1;
	 int j = 0;

	 while (inFile >> pData) {
		 switch(i) {
		 case 1:
			product.itemNum = std::stoi(pData);
			break;
		 case 2:
			product.stock = std::stoi(pData);
			break;
		 case 3:
			product.itemName = pData;
			break;
		 case 4:
			product.itemLoc = pData;
			break;
		 default:
			break;
		 }
		 if (i == 4) {
			 i = 0;
			 products.push_back(product);
		 }
		 i++;
	 }
	 return products;
 }


 bool compareNames(const productClass& left, const productClass& right)
 {
	 return left.itemName[0] < right.itemName[0];
 }