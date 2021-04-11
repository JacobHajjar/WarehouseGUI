#pragma once
#include <vector>
#include <string>
#include <fstream>
#include <algorithm> 

//class of items in database
class productClass {
public:
	int itemNum = 0;
	int stock = 0;
	std::string itemName = "";
	std::string itemLoc = ""; //item location
};

class userClass {
public:
	std::string username = "";
	std::string password = "";
	bool isAdmin = false;
};

void writeDatabase(std::vector<productClass> v); //put database into the text file
std::vector<productClass> readDatabase(); //read data from text file
