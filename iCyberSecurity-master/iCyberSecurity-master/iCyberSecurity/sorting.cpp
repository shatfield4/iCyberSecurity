#include "sorting.h"


const int ARRAY_MAX = 500;

//! adds a customer to the array of customers
void addCustomer(Customer toAdd, Customer unsorted[], int &count)
{
    unsorted[count] = toAdd;
    count++;
}

//! removes a customer from the array of customers
void deleteCustomer(Customer toDelete, Customer unsorted[], int &count)
{
    bool found = false;
    int i = 0;
    string temp1 = toDelete.getName();

    while(i < count && !found)
    {
        string temp2 = unsorted[i].getName();
        if(strcmp(temp1.c_str(), temp2.c_str()) == 0)
        {
            found = true;
        }

        i++;
    }

    if(!found)
    {
        cout << "Customer not found.\n";
    }
    else
    {
        for(; i < count; i++)
        {
            unsorted[i - 1] = unsorted[i];
        }
        count--;
    }
}
//! fills the SortName, and SortKey with unsorted customers, and then it sorts both lists.
void sortCustomers(Customer unsorted[], Customer sortname[], Customer sortkey[], int count, int &keyCount)
{
    Customer guy1;

    //EMPTY ARRAYS
    keyCount = -1;
    for(int i = 0; i < ARRAY_MAX; i++)
    {
        sortname[i].setName("");
        sortname[i].setKey("");
        sortkey[i].setName("");
        sortkey[i].setKey("");
    }

    //COPY ARRAYS
    for(int i = 0; i <= count; i++)
    {
        sortname[i] = unsorted[i];
        if(unsorted[i].getKey() == "key")
        {
            keyCount++;
            sortkey[keyCount] = unsorted[i];
        }
    }

    //SORT BY name
    for(int foo = 0; foo <= count; foo++)
    {
        guy1 = sortname[foo];

        int loc = foo;

        for(int foo2 = foo +1; foo2 <= count; foo2++)
            if(!firstCustomer(sortname[foo2], guy1))
            {
                guy1 = sortname[foo2];
                loc = foo2;
            }

        sortname[loc] = sortname[foo];
        sortname[foo] = guy1;
    }

    //SORT BY key
    for(int foo = 0; foo <= keyCount; foo++)
    {
        guy1 = sortkey[foo];

        int loc = foo;

        for(int foo2 = foo +1; foo2 <= keyCount; foo2++)
            if(!firstCustomer(sortkey[foo2], guy1))
            {
                guy1 = sortkey[foo2];
                loc = foo2;
            }

        sortkey[loc] = sortkey[foo];
        sortkey[foo] = guy1;
    }

} //END sortCustomers function

//! if customer one is bigger than customer two it returns true
bool firstCustomer(Customer one, Customer two)
{
    bool firstBigger;
    string temp1 = one.getName();
    string temp2 = two.getName();

    if(strcmp(temp1.c_str(), temp2.c_str()) > 0)
    {
        firstBigger = true;
    }
    else
    {
        firstBigger = false;
    }

    return firstBigger;
}
