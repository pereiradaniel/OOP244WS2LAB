// Gift.cpp
#include "Gift.h"
#include <iostream>
using namespace std;

namespace sdds {

    // FUNCTIONS
    ////////////

    // Accept gift description:
    void gifting(char* g_description)
    {
        // This function returns nothing (void) and takes a single character pointer as a paramter.
        // It is expected that a Gift struct instance's description will be passed in so it may be given a value from user input.

        // First the function will print to the standard output via the cout object:
        cout << "Enter gift description: ";

        // Exceeding the length of the array can cause undesired behaviour.
        // The number of characters to accept from the user can be applied on the standard input object cin:
        g_description << cin.width(MAX_DESC);


    };

    void gifting(double&)
    {

    };

    void gifting(int&)
    {

    };

    void display(const Gift&)
    {

    };
}