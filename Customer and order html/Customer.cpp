



#include <string>
#include "Key.h"
#include "interestlevel.h"
#include "Customer.h"


void Customer::setname(std::string x)
{
    name=x;
};

void Customer::setkey(std::string x)
{
    keylevel=x;
}

void Customer::setpamphlet(bool x)
{
    received_pamphlet = x;
};

void Customer::setaddress1(std::string x)
{
    address1= x;
};

void Customer::setaddress2(std::string x)
{
    address2= x;
};


void Customer::setinterest(std::string x)
{
interest=x;
};

//getters


std::string Customer::getname()
{
    return name;
};
std::string Customer::getkey()
{
    return keylevel;
};
bool Customer::getpamphlet()
{
    return received_pamphlet;

};


std::string Customer::getaddress1()
{
    return address1;
};

std::string Customer::getaddress2()
{
    return address2;
};

std::string Customer::getinterest()
{
    return interest;
};



//constructors
Customer::Customer()
{
     name="NOT SET";
     keylevel= mean;
     received_pamphlet=false;
     address1="NOT SET";
     address2="NOT SET";
     interest=NOTATALL;

};
Customer::Customer(std::string xname,Key xKey,bool xpamphlet, std::string xaddress1, std::string xaddress2, std::string xinterest)
{
    name=xname;
    keylevel= xKey;
    received_pamphlet=xpamphlet;
    address1=xaddress1;
    address2=xaddress2;
    interest=xinterest;
};

//misc
//comparisons
bool Customer:: ismynamebigger(Customer x)
{
    if(name.compare(x.name)>0)
    {
        return true;
    }
    else return false;

};
bool Customer::ismykeybigger(Customer x)
{
    if(keylevel > x.keylevel)
    {
        return true;
    }
    else return false;

};



