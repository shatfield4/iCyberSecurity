#ifndef SORTING_H
#define SORTING_H
#include <iostream>
#include <iomanip>
#include <cstring>
#include "Customer.h"
using namespace std;


class sorting
{
public:
    sorting();
};
void addCustomer(Customer toAdd, Customer unsorted[], int &count);
void deleteCustomer(Customer toDelete, Customer unsorted[], int &count);
void sortCustomers(Customer unsorted[], Customer sortName[], Customer sortKey[], int count, int &keyCount);
bool firstCustomer(Customer one, Customer two);
#endif // SORTING_H
