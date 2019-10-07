#include<string>
#include "interestlevel.h"
#include "Key.h"

#ifndef CUSTOMER_H
#define CUSTOMER_H
class Customer
{

//variables

std::string name;

//Key keylevel;
std::string keylevel;

bool recieved_pamphlet;

std::string address1;

std::string address2;

std::string interest;

public:

//setters

void setname(std::string);

void setkey(std::string);

void setpamphlet(bool);


void setaddress1(std::string);

void setaddress2(std::string);

void setInterest(std::string);


//getters


std::string getname();

std::string getkey();

bool getpamphlet();

std::string getaddress1();

std::string getaddress2();

std::string getInterest();


//constructors
Customer();

Customer(std::string xname,Key xKey,bool xpamphlet, std::string xaddress1, std::string xaddress2, Interest_level xinterest);
//no pointed to data so no need for copy constructor currently;




//comparisons

bool ismynamebigger(Customer x);//returns true if the name of THIS object is greater in value than x
//note: larger values should come later

bool ismykeybigger(Customer x);//returns true if the key of THIS object is greater in value than x
//note: larger values should come later in this case being a "key" customer is 0, while the "mean" keyvalue of 2
//more comparison functions can be added if more criteria per customer is needed;


};
#endif // CUSTOMER_H
