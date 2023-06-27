/*
Types of constants in C++
- Literal constants
    * most obvious
        Example : x = 12; y = 1.56; name = "Frank";
- Declared constants
    * const keyword
- Constant expressions
    * constexpr keyword
- Enumerated constants
    * enum keyword
- Defined constants
     #define
*/
#include <iostream>
using namespace std;

int main()
{
    cout << "Dry Cleaning Service\n How many shirts do you want to be cleaned ?";

    int number_of_shirts {0};
    cin >> number_of_shirts; // take inputs

    const int price_of_cleaning{100}; // fixed 
    const int tax{18}; // fixed
    const int cleaning_days{3}; // fixed

    cout << "Estimate for shirts to me cleaned";
    cout << "Number of shirts : " << number_of_shirts << "\n";
    cout << "Price of cleaning : " << price_of_cleaning << " JPY" << "\n";
    cout << "Cost : " << price_of_cleaning * number_of_shirts << " JPY \n";
    cout << "Tax : " << tax * number_of_shirts << " JPY \n";
    cout << "==================================================" << "\n";
    cout << "Total Cost : " << (price_of_cleaning * number_of_shirts) + (number_of_shirts * tax) << " JPY \n";

    cout << "Will be ready in " << cleaning_days << ". Thank You. \n";
    return 0;

}