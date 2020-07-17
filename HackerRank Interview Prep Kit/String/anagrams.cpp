#include <iostream>
#include <map>

using namespace std;

int main()
{
    int count = 0;
    string word1, word2;

    cin >> word1 >> word2;

    map<char, int> dict = {};

    for (auto letter : word1)
    {
        auto res = dict.find(letter);
        if (res != dict.end())
        {
            res->second++;
        }
        else
        {
            dict.insert({letter, 1});
        }
    }

    for (auto letter : word2)
    {
        auto res = dict.find(letter);
        if (res != dict.end())
        {
            if (res->second == 0)
            {
                count++;
                continue;
            }
            res->second--;
        }
        else
        {
            count++;
        }
    }

    for (auto val : dict)
    {
        count += val.second;
    }

    cout << count;

    return 0;
}