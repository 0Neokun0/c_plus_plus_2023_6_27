/*
今の A 君の身長は N cm です。A 君は 1 年間 で 10 cm 身長が伸びます。1 年後の A 君の身長を出力してください。

入力例 1 の場合
150
150 cm から 10 cm 伸びるので、
160
と出力してください。
*/
#include <iostream>
using namespace std;

int main()
{
    //Start from below
    int input;
    cin >> input;
    cout << input + 10;

    return 0;
}