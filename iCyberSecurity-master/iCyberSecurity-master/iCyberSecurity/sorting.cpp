#include "sorting.h"


const int ARRAY_MAX = 500;

sorting::sorting()
{

}

void addCustomer(Customer toAdd, Customer unsorted[], int &count)
{
    unsorted[count] = toAdd;
    count++;
}

void deleteCustomer(Customer toDelete, Customer unsorted[], int &count)
{
    bool found = false;
    int i = 0;
    string temp1 = toDelete.getname();

    while(i < count && !found)
    {
        string temp2 = unsorted[i].getname();
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

void sortCustomers(Customer unsorted[], Customer sortname[], Customer sortkey[], int count, int &keyCount)
{
    Customer guy1;
    Customer guy2;

    //EMPTY ARRAYS
    keyCount = 0;
    for(int i = 0; i < ARRAY_MAX; i++)
    {
        sortname[i].setname("");
        sortname[i].setkey("");
        sortkey[i].setname("");
        sortkey[i].setkey("");
    }

    //COPY ARRAYS
    for(int i = 0; i < count; i++)
    {
        sortname[i] = unsorted[i];
        if(unsorted[i].getkey() == "key")
        {
            sortkey[keyCount] = unsorted[i];
            keyCount++;
        }
    }

    //SORT BY name
    for(int foo = 1; foo < count; foo++)
    {
        guy1 = sortname[foo];
        int loc = foo;

        do
        {
            sortname[loc] = sortname[loc - 1];
            loc--;
        }while(loc > 0 && firstCustomer(sortname[loc - 1], guy1));

        sortname[loc] = guy1;
    }

    //SORT BY key
    for(int foo = 1; foo < keyCount; foo++)
    {
        guy1 = sortkey[foo];
        int loc = foo;

        do
        {
            sortkey[loc] = sortkey[loc - 1];
            loc--;
        }while(loc > 0 && firstCustomer(sortkey[loc - 1], guy1));

        sortkey[loc] = guy1;
    }

}

bool firstCustomer(Customer one, Customer two)
{
    bool firstBigger;
    string temp1 = one.getname();
    string temp2 = two.getname();

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
