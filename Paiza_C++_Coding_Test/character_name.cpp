/*
A 君はあるゲームのキャラクターに名前を付けようとしています。A 君がつけようとしている名前が与えられるので、名前の長さを答えてください。

入力例 1 の場合
NEKO
NEKO の長さは 4 なので 4 を出力します。
4
と出力してください。
*/
#include <iostream>
using namespace std;

int main()
{
    //Start from below
    string input;
    cin >> input;
    int output = input.length();
    cout << output;


    return 0;
}