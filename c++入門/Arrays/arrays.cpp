// 配列
#include <iostream>
using namespace std;

int main()
{
    char vowels[]{'a', 'e', 'i', 'o', 'u'}; // [] automatically sizing the array
    cout << "The first vowel is : " << vowels[0] << "\n";
    cout << "The last vowel is : " << vowels[4] << "\n";

    double hi_temps[]{28, 30, 40, 27, 33};

    cout << "Array of 5 high temperaturs. \n";
    cout << hi_temps[0]
         << "\n"
         << hi_temps[1]
         << "\n"
         << hi_temps[2]
         << "\n"
         << hi_temps[3]
         << "\n"
         << hi_temps[4]
         << "\n";
    cout << "\n The first high temperature from the array is : " << hi_temps[0] << "\n";

    cout << "Enter 5 high temperature : \n";
    cin >> hi_temps[0];
    cin >> hi_temps[1];
    cin >> hi_temps[2];
    cin >> hi_temps[3];
    cin >> hi_temps[4];

    cout << "Array of new top 5 high temperaturs. \n";
    cout << hi_temps[0]
         << "\n"
         << hi_temps[1]
         << "\n"
         << hi_temps[2]
         << "\n"
         << hi_temps[3]
         << "\n"
         << hi_temps[4]
         << "\n";

    return 0;
}