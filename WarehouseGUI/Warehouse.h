#pragma once
#include <vector>
#include <string>
#include <fstream>

//class of items in database
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
std::vector<productClass> readDatabase(); //read data from text file

//void vecToGrid(std::vector<productClass> v); //put the database vector into grid
//std::vector<productClass> gridToVec(); //updates the vector from the values of the grid