#include <iostream>
using namespace std;

int main()
{
    int a, b, c; // a = 고정비용 b = 가변비용 c = 판매비용
    cin >> a >> b >> c;
    if (b >= c)
        cout << -1;
    else
    {
        cout << a / (c - b) + 1;
    }

}