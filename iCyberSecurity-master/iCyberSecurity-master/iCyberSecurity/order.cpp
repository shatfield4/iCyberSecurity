#include "order.h"
#include <string>

//SETTERS
/*
//!sets order's name to the input
void order::setname(std::string x)
{
    name=x;
};

//!sets order's address1 to the input
void order::setaddress1(std::string x)
{
    address1= x;
};

//!sets order's address2 to the input
void order::setaddress2(std::string x)
{

    address2= x;
};
*/
//! sets the number of product one they have ordered
void order::setnumber_of_product_one(int x)
{
    number_of_product_one=x;
}

//! sets the number of product two they have ordered
void order::setnumber_of_product_two(int x)
{
    number_of_product_two=x;
}

//! sets the number of product three they have ordered
void order::setnumber_of_product_three(int x)
{
  number_of_product_three=x;
}

//! Indicates if they got serviceplan one
void  order::setserviceplan_one(bool x)
{
  serviceplan_one=x;
}
//! Indicates if they got serviceplan two
void  order::setserviceplan_two(bool x)
{
  serviceplan_two=x;
}

//! sets the taxrate
void order::settax(double x)
{
  tax=x;
}

//! calculates the total
void order::update_total()
{
    double subtotal=0;
    subtotal= (number_of_product_one *100) + (number_of_product_two*200) +(number_of_product_three *300);

    if (serviceplan_one)
    {
        subtotal=subtotal + 50;
    }
    if (serviceplan_two)
    {
        subtotal=subtotal + 80;
    }

    total=subtotal+(subtotal*(tax/100));
}

//getters
/*
//! gets the customers first and last name
std::string order::getname()
{
return name;
}

//! gets the customsers first address line
std::string order::getaddress1()
{
return address1;
}

//! gets the customers second address line
std::string order::getaddress2()
{
return address2;
}  */

//! gets the number of product one they have ordered
int order::getnumber_of_product_one()
{
    return number_of_product_one;
};

//! gets the number of product two they have ordered
int order::getnumber_of_product_two()
{
    return number_of_product_two;
}

//! gets the number of product three they have ordered
int order::getnumber_of_product_three()
{
    return number_of_product_three;
}

//! returns true if they got serviceplan one
bool  order::getserviceplan_one()
{
    return serviceplan_one;
}

//! returns true if they got serviceplan two
bool  order::getserviceplan_two()
{
    return serviceplan_two;
}

//! gets the taxrate in % form
double order::gettax()
{
    return tax;
}

//! gets the the total cost
double order::gettotal()
{
    return total;
};

//! default constructor sets all strings to "Not set" both service plans are set to false  the total and tax are set to 0
order::order()
{
    /*name= "NOT SET";
    address1 =" NOT SET";
    address2 ="NOT SET"; */
    number_of_product_one=0;
    number_of_product_two=0;
    number_of_product_three=0;
    serviceplan_one=0;
    serviceplan_two=0;
    tax=0;
    total=0;
};

//! sets all variables except total. total is a calculated variable.
order::order(/*std::string xname, std::string ad1,std::string ad2,*/ int p1, int p2 , int p3, bool s1, bool s2, double xtax)
{
    /*name = xname;
    address1 = ad1;
    address2 = ad2; */
    number_of_product_one=p1;
    number_of_product_two=p2;
    number_of_product_three=p3;
    serviceplan_one=s1;
    serviceplan_two=s2;
    tax=xtax;
    update_total();
};
