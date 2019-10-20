



#include <string>
//#include "Key.h"
//#include "interestlevel.h"
#include "Customer.h"


void Customer::setName(std::string x)
{
    //setting the input value to the objects name
    name=x;
};

void Customer::setKey(std::string x)
{
    //setting the input value to the objects keylevel
    keyLevel=x;
}

void Customer::setPamphlet(bool x)
{
    //setting the input value to the objects receivedPamphlet
    receivedPamphlet = x;
};

void Customer::setAddress1(std::string x)
{
    //setting the input value to the objects address1
    address1= x;
};

void Customer::setAddress2(std::string x)
{
    //setting the input value to the objects address2
    address2= x;
};


void Customer::setInterest(std::string x)
{
    //setting the input value to the objects interest
    interest=x;
};

//getters


std::string Customer::getName()
{
    //returns the objects name
    return name;
};
std::string Customer::getKey()
{
    //returns the objects name
    return keyLevel;
};
bool Customer::getPamphlet()
{
    //returns true if the customer has received a pamphlet
    return receivedPamphlet;

};


std::string Customer::getAddress1()
{
    //returns the first address line
    return address1;
};

std::string Customer::getAddress2()
{
    //returns the second address line
    return address2;
};

std::string Customer::getInterest()
{
    //returns the objects interest
    return interest;
};



//constructors
Customer::Customer()
{
    //sets all strings to "NOT SET"
    //sets that the customer has not recieved a pamphlet (false)
     name="NOT SET";
     keyLevel= "NOT SET";
     receivedPamphlet=false;
     address1="NOT SET";
     address2="NOT SET";
     interest="NOT SET";
     order customerOrder;

};
Customer::Customer(std::string xname,std::string xKey,bool xpamphlet, std::string xaddress1, std::string xaddress2, std::string xinterest)
{
    //sets all the variables according to the input variables
    name=xname;
    keyLevel = xKey;
    receivedPamphlet=xpamphlet;
    address1=xaddress1;
    address2=xaddress2;
    interest=xinterest;
    order customerOrder;
};

//misc

//comparisons

bool Customer:: isMynamebigger(Customer x)
{
    //returns true of the name if this objects name is greater
    if(name.compare(x.name)>0)
    {
        return true;
    }
    else return false;

};

bool Customer::isMykeybigger(Customer x)
{
    //returns true this objects key is greater
    if(keyLevel > x.keyLevel)
    {
        return true;
    }
    else return false;

};
