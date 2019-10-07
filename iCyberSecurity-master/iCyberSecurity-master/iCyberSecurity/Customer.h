#include<string>
#include "interestlevel.h"
#include "Key.h"

#ifndef CUSTOMER_H
#define CUSTOMER_H
class Customer
{

//variables

std::string name;

Key keylevel;

bool recieved_pamphlet;

std::string zipcode;

std::string state;

std::string address;

Interest_level interest;

public:

//setters

void setname(std::string);

void setkey(Key);

void setpamphlet(bool);


void setzipcode(std::string);

void setsate(std::string);

void setaddress(std::string);

void setInterest(Interest_level);


//getters


std::string getname();

Key getkey(Key);

bool getpamphlet(bool);

std::string getaddress();

std::string getzipcode();

std::string getsate();

Interest_level getInterest();


//constructors
Customer();

Customer(std::string name,Key keylevel ,bool recieved_pamphlet ,std::string zipcode,std::string state,std::string address, Interest_level interest);
//no pointed to data so no need for copy constructor currently;




//comparisons

bool ismynamebigger(Customer x);//returns true if the name of THIS object is greater in value than x
//note: larger values should come later

bool ismykeybigger(Customer x);//returns true if the key of THIS object is greater in value than x
//note: larger values should come later in this case being a "key" customer is 0, while the "mean" keyvalue of 2
//more comparison functions can be added if more criteria per customer is needed;


};
#endif // CUSTOMER_H
