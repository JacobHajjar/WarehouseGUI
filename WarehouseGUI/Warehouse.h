#pragma once
#include <vector>
#include <string>
#include <fstream>

//class of item to be stored in database
class productClass {
public:
	int itemNum = 0;
	int stock = 0;
	std::string itemName = "";
	std::string itemLoc = ""; //item location
};

void addStock(std::vector<productClass>& v); //functions that passes the reference of the vector so that it can be changed
void removeStock(std::vector<productClass>& v); // in the function and adds or deletes items, if the item already exists, add it to the stock
void writeDatabase(std::vector<productClass> v); //put database into the text file
std::string displayDatabase(std::vector<productClass> v); //display entire database by returning a string
std::vector<productClass> readDatabase(); //read data from text file
//void menu(vector<productClass>& v); //temporary menu for accessing features, takes in vector to be passed to menu options
void checkStock(std::vector<productClass> v); //enter item number, get back the item's stock
void checkLocation(std::vector<productClass> v); //enter the item number, get back the item's location