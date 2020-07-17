#include <iostream>
#include <map>

using namespace std;

int main()
{
    int num;
    int count = 0;
    cin >> num;

    int val;
    map<int, int> dict = {};

    while (num--)
    {
        cin >> val;
        auto res = dict.find(val);
        if (res != dict.end())
        {
            dict.erase(val);
            count++;
        }
        else
        {
            dict.insert({val, 0});
        }
    }

    cout << count;
    return 0;
}