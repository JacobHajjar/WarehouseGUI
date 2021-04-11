#pragma once
#include "Warehouse.h"


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

 void writeUsers(std::vector<userClass> v) {

 }

 std::vector<userClass> readUsers() {

	 std::vector<userClass> users;
	 userClass user;
	 std::ifstream inFile("users.txt");
	 std::string uData;
	 int numOfAttributes = 3;
	 int i = 1;
	 int j = 0;

	 while (inFile >> uData) {
		 switch (i) {
		 case 1:
			 user.username = uData;
			 break;
		 case 2:
			 user.password = uData;
			 break;
		 case 3:
			 user.isAdmin = std::stoi(uData);
			 break;
		 default:
			 break;
		 }
		 if (i == numOfAttributes) {
			 i = 1;
			 users.push_back(user);
		 }
		 i++;
	 }
	 return users;
 }

 bool compareNames(const productClass& left, const productClass& right)
 {
	 return left.itemName[0] < right.itemName[0];
 }

 bool compareStock(const productClass& left, const productClass& right)
 {
	 return left.stock < right.stock;
 }