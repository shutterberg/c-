#include <bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define init                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define fori(i, a, b) for (ll i = a; i <= (ll)b; i++)
using namespace std;
const ll mod = 1e9 + 7;
int main()
{
    init;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll i, j, k;
    bool f1 = true;
    map<char, int> mp;
    string s1, s2;

    getline(cin, s1);
    getline(cin, s2);

    for (i = 0; i < s1.length(); i++)
    {
        mp[s1[i]]++;
    }

    for (i = 0; i < s2.length(); i++)
    {
        if (mp[s2[i]] > 0 || s2[i] == ' ')
        {
            mp[s2[i]]--;
            continue;
        }

        else
        {
            f1 = false;
            break;
        }
    }

    if (f1 == true)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}