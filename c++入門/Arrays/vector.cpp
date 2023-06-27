// Vector
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector <char> vowels; //empty
    // vector <char> vowels (5); // 5 initialized to zero

    vector <char> vowels {'a', 'e', 'i', 'o', 'u'};
    
    cout << vowels[0] << "\n";
    cout << vowels[4] << "\n";

    // vector <int> test_score (3); // 3 elements all initialized to zero
    // vector <int> test_score (3, 100); // 3 elements all initalized to 100

    vector <int> test_score {100, 98, 89};
    cout << "Test scores using arry syntax : \n";
    cout << test_score[0] << "\n";
    cout << test_score[1] << "\n";
    cout << test_score[2] << "\n";

    /*
        Vector.at function
    */
    cout << "Test scores using vector syntax : \n";
    cout << test_score.at(0) << "\n";
    cout << test_score.at(1) << "\n"; // vector.at()
    cout << test_score.at(2) << "\n";
    cout << "Threre are " << test_score.size() << " scores in the vector";

    cout << "Enter 3 test scores. \n";
    cin >> test_score.at(0);
    cin >> test_score.at(1);
    cin >> test_score.at(2);

    cout << "Updated test scores.\n";
    cout << test_score.at(0) << "\n";
    cout << test_score.at(1) << "\n";
    cout << test_score.at(2) << "\n";

    /*
        Vector push.back function
    */ 
    cout << ".\nEnter a test score to add to the vector : \n";

    int score_to_add {0};
    cin >> score_to_add;
    test_score.push_back(score_to_add);
    
    cout << "\nEnter one more test score to add to the vector :\n";

    cin >> score_to_add;
    test_score.push_back(score_to_add);

    cout <<"\nTest scores are now: \n";

    cout << test_score.at(0) << "\n";
    cout << test_score.at(1) << "\n";
    cout << test_score.at(2) << "\n";
    cout << test_score.at(3) << "\n";
    cout << test_score.at(4) << "\n";

    cout << "There are now " << test_score.size() << " scores in the vector. \n";

    // cout << "\nThis should cause an exception !! " << test_score.at(10);









    return 0;
}