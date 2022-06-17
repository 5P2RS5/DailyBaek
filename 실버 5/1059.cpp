#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int FindIdx(vector<int> v, int a)
{
    for(int i = 0; i < (int)v.size(); i++)
    {
        if(v[i] == a)
        {
            return i;
        }
    }
    return 0;
}

int main()
{
    int cnt;
    cin >> cnt;

    vector<int> v(cnt);
    for(int i =0; i < cnt; i++)
    {
        cin >> v[i];
    }

    int n;
    cin >> n;
    for(int i = 0; i < cnt; i++)
    {
        if(v[i] == n)
        {
            cout << 0 << endl;
            return 0;
        }
    }

    v.push_back(n);
    std::sort(v.begin(), v.end());
    int place = FindIdx(v, n);
    int result = 0;

    result += v[place + 1] - v[place] - 1;

//    for(int i = v[place - 1] + 1; i < v[place]; i++)
//    {
//        for(int j = v[place]; j < v[place + 1]; j++)
//        {
//            result++;
//        }
//    }
    cout << result;
}