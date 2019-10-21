#ifndef SORTING_H
#define SORTING_H
#include <iostream>
#include <iomanip>
#include <cstring>
#include "Customer.h"
using namespace std;


//! adds a customer to the array of customers
void addCustomer(Customer toAdd, Customer unsorted[], int &count);
//! removes a customer from the array of customers
void deleteCustomer(Customer toDelete, Customer unsorted[], int &count);
//! fills the SortName, and SortKey with unsorted customers, and then it sorts both lists.
void sortCustomers(Customer unsorted[], Customer sortName[], Customer sortKey[], int count, int &keyCount);
//! if customer one is bigger than customer two it returns true
bool firstCustomer(Customer one, Customer two);

#endif // SORTING_H
