#include <bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define init                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define fori(i, a, b) for ( i = a; i < b; i++)
#define ford(i, a, b) for ( i = a; i >= b; i--)
using namespace std;
int main()
{
    init;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
   string word, hello="hello";
   cin>>word;
    int j=0, pas=0;
    for(int i=0; i<word.length();i++){
        if(word[i]==hello[j]){
            j++;
            pas++;
        }
    }
    if(pas==5){
   cout<<"YES";
    }else{
   cout<<"NO";
    }

return 0;
}