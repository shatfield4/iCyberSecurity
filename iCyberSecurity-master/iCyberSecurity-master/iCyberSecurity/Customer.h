#ifndef CUSTOMER_H
#define CUSTOMER_H

#include<string>
//#include "interestlevel.h"
//#include "Key.h"
#include "order.h"

//!  A class to contain customer information.
/*!
  This class contains all customer information and an order variable.
*/
class Customer
{
    //VARIABLES

    //! the customers first and last name-INPUT
    std::string name;

    //! How important the customer is to the company-INPUT
    std::string keyLevel;

    //! Indicated whether they have received a pamphlet-INPUT
    bool receivedPamphlet;

    //! The space for the customers first line for the address-INPUT
    std::string address1;

    //! the space for the customers second line of the address-INPUT
    std::string address2;

    //! Indicates the interest level of the customer-INPUT
    std::string interest;

    static int arrayCount;

    protected:
        //! The customers order-INPUT
        order *customersOrder;

    public:
        //SETTERS
        //! Sets the cusomers first and last name
        void setName(std::string);

        //! Sets the customers key level
        void setKey(std::string);

        //! sets whether the customer has received a pamphlet
        void setPamphlet(bool);

        //! sets the customsers first address line
        void setAddress1(std::string);

        //! sets the customers second address line
        void setAddress2(std::string);

        //! sets the customers interest level
        void setInterest(std::string);

        //! returns the customer interest
        order getCustomerOrder();





        //GETTERS

        //! returns the customers first name
        std::string getName();

        //! returns the customer key level
        std::string getKey();

        //! returns whether the customer has recieved a pamphlet or not. 1 for true, 0 for false.
        bool getPamphlet();

        //! returns the customer's address line 1
        std::string getAddress1();

        //! returns the customer's  address line 2
        std::string getAddress2();

        //! returns the customer's interest level
        std::string getInterest();


        //CONSTRUCTORS
        //! this default constructor sets all strings to "NOT SET" and received_pamphlet to false
        Customer();
        //! copy constructor
        Customer(const Customer &o2);
        //! This constructor takes all member variables and makes a class.
        Customer(std::string xname, std::string xKey,bool xpamphlet, std::string xaddress1, std::string xaddress2, std::string xinterest);
        //no pointed to data so no need for copy constructor currently


        //COMPARISIONS
        //!returns true if the name of THIS object is greater in value than x
        bool isMynamebigger(Customer x);

        //!returns true if the key of THIS object is greater in value than x
        //!note: larger values should come later in this case being a "key" customer is 0, while the "mean" keyvalue of 2
        bool isMykeybigger(Customer x);
        //Operator overload

        //! assignment operator copies pointed to data
        Customer operator = (Customer const &c2);
};

#endif // CUSTOMER_H
