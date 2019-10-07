

#include <string>
#include "Key.h"
#include "interestlevel.h"
#include "Customer.h"


void Customer::setname(std::string x)
{
    name=x;
};

void Customer::setkey(Key x)
{
    keylevel=x;
}

void Customer::setpamphlet(bool x)
{
    recieved_pamphlet = x;
};

void Customer::setaddress(std::string x)
{
    address= x;
};

void Customer::setzipcode(std::string x)
{
    zipcode=x;
};

void Customer::setsate(std::string x)
{
    state=x;
};

void Customer::setInterest(Interest_level x)
{
interest=x;
};

//getters


std::string Customer::getname()
{
    return name;
};
Key Customer::getkey(Key)
{
    return keylevel;
};
bool Customer::getpamphlet(bool)
{
    return recieved_pamphlet;

};


std::string Customer::getaddress()
{
    return address;
};
std::string Customer::getzipcode()
{
    return zipcode;
};
std::string Customer::getsate()
{
    return state;
};

//constructors
Customer::Customer()
{
     name="NOT SET";
     keylevel= mean;
     recieved_pamphlet=false;
     zipcode="NOT SET";
     state="NOT SET";
     address="NOT SET";
     interest=NOTATALL;

};
Customer::Customer(std::string xname,Key xKey,bool xpamphlet ,std::string xzip,std::string xstate,std::string xaddress, Interest_level xinterest)
{
    name=xname;
    keylevel= xKey;
    recieved_pamphlet=xpamphlet;
    zipcode=xzip;
    state=xstate;
    address=xaddress;
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


