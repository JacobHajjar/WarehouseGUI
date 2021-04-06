#pragma once
#include "Warehouse.h"


void checkStock(std::vector<productClass> v) {
	int targetNum = 0;
	bool inVec = false;


	for (int i = 0; i < v.size(); i++) {
		if (v[i].itemNum == targetNum) {
			inVec = true;
			
		}
	}
	if (inVec == false) {
		
	}
}

void checkLocation(std::vector<productClass> v) {
	int targetNum = 0;
	bool inVec = false;
	//cout << "Enter the item number of the item you would like to find: ";
	//cin >> targetNum;
	for (int i = 0; i < v.size(); i++) {
		if (v[i].itemNum == targetNum) {
			inVec = true;
			//cout << "Current location of " << v[i].itemName << " is: " << v[i].itemLoc << endl;
		}
	}
	if (inVec == false) {
		//cout << "Item not found in the warehouse or item number typed incorrectly" << endl;
	}
}

std::string displayDatabase(std::vector<productClass> v) { 
	std::string Dbase;
	Dbase = "I \n am \n Jacob";
	return Dbase;
	//cout << left << setw(15) << "Item Number";
	//cout << left << setw(15) << "# of stock";
	//cout << left << setw(15) << "Item Name";
	//cout << left << setw(15) << "Item Location" << endl;

	for (int i = 0; i < v.size(); i++) {
		 
		//cout << left << setw(15) << v[i].itemNum << " ";
		//cout << left << setw(15) << v[i].stock << " ";
		//cout << left << setw(15) << v[i].itemName << " ";
		//cout << left << setw(15) << v[i].itemLoc << " ";
		//cout << endl;
	}
}

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

 /*void menu(vector<productClass>& v) {
	 char selection1 = 'x';
	 char selection2 = 'x';
	 string empPassword = "Employee123*";
	 string adminPassword = "Admin123*";
	 cout << "Welcome to the OMNI-Warehouse!" << endl;

	while (selection1 != 's') {
		cout << "Type \"E\" for employee access or \"A\" for admin access, or \"S\" to shutdown." << endl;
		cin >> selection1;
		if (selection1 == 'e' || selection1 == 'E') {
			string passAttempt = "";
			cout << "Enter employee password: ";
			cin >> passAttempt;
			if (passAttempt == empPassword) {
				while (selection2 != 'c') {
					cout << "Would you like to (a)Check Stock, (b)Search Item, (c)Log off" << endl;
					cin >> selection2;
					switch (selection2) {
					case 'a':
						checkStock(v);
						break;
					case 'b':
						checkLocation(v);
						break;
					default:
						break;
					}
				}
			}
			else {
				passAttempt = "";
				cout << "Password Incorrect" << endl;
			}
		}
		else if (selection1 == 'a' || selection1 == 'A') {
			string passAttempt = "";
			cout << "Enter admin password: ";
			cin >> passAttempt;
			if (passAttempt == adminPassword) {
				while (selection2 != 'e') {
					cout << "Would you like to (a)Add Stock, (b)Remove Stock, (c)Check Stock, (d)Search Item, (e)Log off" << endl;
					cin >> selection2;
					switch (selection2) {
					case 'a':
						addStock(v);
						break;
					case 'b':
						removeStock(v);
						break;
					case 'c':
						checkStock(v);
						break;
					case 'd':
						checkLocation(v);
						break;
					default:
						break;
					}
				}
			}
			else {
				passAttempt = "";
				cout << "Password Incorrect" << endl;
			}
		}
		else if (selection1 == 's' || selection1 == 'S') {
			cout << "Goodbye";
		}
		else {
			cout << "Invalid Selection.";
		}
	}
	
} */
