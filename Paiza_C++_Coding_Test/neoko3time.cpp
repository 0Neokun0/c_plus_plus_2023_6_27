/*
ある文字列 S が与えられます、S を 3 回繰り返して出来る文字列を出力してください。

入力例 1 の場合
neko
neko を 3 回繰り返すので、
nekonekoneko
と出力してください。
*/
#include <iostream>
using namespace std;

int main()
{
    //Start from below
    string input;
    cin >> input;
    cout << input << input << input;

    return 0;
}