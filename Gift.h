// Gift.h
#ifndef _GIFT_H__
#define _GIFT_H__

namespace sdds {
// Integer defines the maximum price of the gift.
#define MAX_DESC = 15;

// Double defines maximum price of the gift.
#define MAX_PRICE = 999.99;

struct Gift
{
    // g_description:  A statically allocated array of characters that will store the description of the Gift.
    // The size for this array will be based on MAX_DESC defined above.
    // Remember to include additional space for the nullbyte.
    char g_description[MAX_DESC + 1];
    
    // g_price:  A double that will hold the price of the gift.
    // At minimum the price can be 0 and the maximum will be based on MAX_PRICE
    double g_price;

    // g_units:  An integer that will hold the number of units/copies of the gift.
    // Number of units has to be at least 1.
    int g_price;
}

}
#endif