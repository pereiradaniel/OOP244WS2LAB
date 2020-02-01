// Gift.cpp


#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
#include "Gift.h"

namespace sdds {
  // Three overloads of a "gifting" function: 
  
  // This functions returns nothing (void) and takes a single character pointer as a parameter.
  // It is expected that a Gift struct instance's description will be passed in so it may be given a value from user input.
  void gifting(char* g_description) {
        cout << "Enter gift description: \n";
        // Adjust the number of characters to accept from the user using .width applied to cin:
        cin.width(MAX_DESC +1); // MAX_DESC = 15 + 1 for NULLBYTE
        cin >> g_description;
  };

  // This variant of the gifting function also returns nothing (void) and takes a double reference (double& g_price => address of g_price).
  // Pass in a Gift struct instance's price so that it may be given value from user input:
  void gifting(double& g_price) {
        do {
            cout << "Enter gift price: ";
            cin >> g_price;

            // If price entered is less than 0 or greater than defined MAX_PRICE, print an error message:
            if (g_price < 0 || g_price > MAX_PRICE) {
                cout << "Gift price must be between 0 and [MAX_PRICE]\n";
            }
        // Loop the user input process until a valid price is given: do {} while ...
        } while (g_price < 0 || g_price > MAX_PRICE);
  };

  // This cariant of the gifting function also returns nothing (void) and takes an integer reference (int& g_units => address of g_units).
  // It is similar to the previous function except that we are taking input for the units of a Gift.
  void gifting(int& g_units) {
        do {
            cout << "Enter gift units: ";
            // Accept input from the user and store that into the passed in parameter for the units:
            cin >> g_units;
            // If the value given by the user is less than 1, print an error message:
            if (g_units < 1) {
                cout << "Gift units must be at least 1\n";
            };
      // Loop the user input process until a valid input for g_units is given:  do {} while ...
      } while (g_units < 1);
  };

  // This function returns nothing and takes in an unmodifiable reference to a Gift (const Gift& => address to constant Gift).
  // It will display the details of the passed in Gift to the standard output:
  // Gift details:
  // Description: [g_description] \n
  // Price: [g_price] \n
  // Units: [g_units] \n

  void display(const Gift& info) {
    cout << "Gift Details:" << endl;
    cout << "Description: " << info.g_description << endl;
    cout << "Price: " << info.g_price << endl;
    cout << "Units: " << info.g_units << "\n" << endl;
  };

}