



#include <string>
#ifndef ORDER_H
#define ORDER_H

//!  A class to contain order information.
/*!
  This class contains all customer information and an order variable.
*/
class order
{

  //! the customers first and last name-INPUT
  std::string name;
  //! The space for the customers first line for the address-INPUT
  std::string address1;
  //! the space for the customers second line of the address-INPUT
  std::string address2;
  //! Indicates the interest level of the customer-INPUT

  //! Indicates the number of product ones-INPUT
  int number_of_product_one;
  //! Indicates the number of product twos-INPUT
  int number_of_product_two;
  //! Indicates the number of product three-INPUT
  int number_of_product_three;
  //! Indicates if they got serviceplan two-INPUT
  bool serviceplan_one;
  //! Indicates if they got serviceplan two-INPUT
  bool serviceplan_two;
  //! the taxrate-INPUT
  double tax;
  //! the total cost-CALC&OUT
  double total;



public:
  //setters

  //! Sets the customers first and last name
  void setname(std::string);
  //! sets the customsers first address line
  void setaddress1(std::string);
  //! sets the customers second address line
  void setaddress2(std::string);
  //! sets the number of product one they have ordered
  void setnumber_of_product_one(int);
  //! sets the number of product two they have ordered
  void setnumber_of_product_two(int);
  //! sets the number of product three they have ordered
  void setnumber_of_product_three(int);
  //! Indicates if they got serviceplan one
  void  setserviceplan_one(bool);
  //! Indicates if they got serviceplan two
  void  setserviceplan_two(bool);
  //! sets the taxrate
  void settax(double);
  //! calculates the total
  void update_total();

//getters

//! gets the customers first and last name
std::string getname();
//! gets the customsers first address line
std::string getaddress1();
//! gets the customers second address line
std::string getaddress2();
//! gets the number of product one they have ordered
int getnumber_of_product_one();
//! gets the number of product two they have ordered
int getnumber_of_product_two();
//! gets the number of product three they have ordered
int getnumber_of_product_three();
//! returns true if they got serviceplan one
bool  getserviceplan_one();
//! returns true if they got serviceplan two
bool  getserviceplan_two();
//! gets the taxrate in % form
double gettax();
//! gets the the total cost
double gettotal();

  //! defualt constructor sets all strings to "Not set" both service plans are set to false  the total and tax are set to 0
  order();
  //! sets all variables except total. total is a calculated variable.
  order(std::string xname, std::string ad1,std::string ad2, int p1, int p2 , int p3, bool s1, bool s2, double xtax);





};

#endif // ORDER_H
