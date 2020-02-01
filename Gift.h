// Gift.h

#pragma once
#ifndef SDDS_GIFT_H_
#define SDDS_GIFT_H_

namespace sdds {
  const int MAX_DESC = 15;
  const double MAX_PRICE = 999.99;

  struct Gift {
  	// A statically allocated array of characters that will store the descriptiong of the gift.
  	// The size for this array is based on const MAX_DESC
    char g_description[MAX_DESC + 1];  // + 1 for null byte
    // A double that will hold the price of the Gift.
    // At minimum the price can be 0 and the maximum will be based on MAX_PRICE.
    double g_price;
    // An integer that will hold the number of units/copies of the gift.
    int g_units; // Must be at least 1
  };
  void gifting(char* gift_description);
  void gifting(double& g_price);
  void gifting(int& gift_units);
  void display(const Gift& information);
}
#endif