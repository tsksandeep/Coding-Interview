#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

bool checkanagram(string s, string t)
{
    vector<int> count;
    int match = 0;
    count.resize(26, 0);
    for (int i = 0; i < s.length(); i++)
    {
        count[s[i] - 'a']++;
    }
    for (int j = 0; j < t.length(); j++)
    {
        if (count[t[j] - 'a'] <= 0)
        {
            return false;
        }
        else
        {
            count[t[j] - 'a']--;
        }
    }

    return true;
}

int main()
{
    int T;
    string s;
    vector<string> v[100];
    int sum;

    cin >> T;
    while (T--)
    {
        sum = 0;
        for (int i = 0; i < 100; i++)
            v[i].clear();

        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            for (int j = 1; j < s.length() - i + 1; j++)
            {
                cout << s.substr(i, j) << endl;
                v[j - 1].push_back(s.substr(i, j));
            }
        }

        for (int i = 0; i < s.length(); i++)
        {
            for (int j = 0; j < v[i].size(); j++)
            {
                for (int k = j + 1; k < v[i].size(); k++)
                {
                    if (checkanagram(v[i][j], v[i][k]))
                    {
                        sum++;
                    }
                }
            }
        }

        cout << sum << endl;
    }

    return 0;
}