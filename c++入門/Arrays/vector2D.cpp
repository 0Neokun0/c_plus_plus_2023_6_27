// Example of a 2D-vector
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <vector<int>> movie_ratings
    {
        {1, 2, 3, 4},
        {1, 2, 4, 4},
        {1, 3, 5, 5},
    };

    cout << "\nHere are the movie rating for reviewer #1 using array syntax : \n";
    cout << movie_ratings[0][0] << "\n";
    cout << movie_ratings[0][1] << "\n";
    cout << movie_ratings[0][2] << "\n";
    cout << movie_ratings[0][3] << "\n";

    cout << "\nHere are the movie rating for reviewer #q using vector syntax : \n";
    cout << movie_ratings.at(0).at(0) << "\n";
    cout << movie_ratings.at(0).at(1) << "\n";
    cout << movie_ratings.at(0).at(2) << "\n";
    cout << movie_ratings.at(0).at(3) << "\n";


    return 0;
}