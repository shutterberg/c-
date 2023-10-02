#include<bits/stdc++.h>

typedef long long int ll;
#define pp pair<ll,ll>


using namespace std;

bool cmp(pp a, pp b)
{
    if(a.first>b.first)
        return true;

    else if(a.first==b.first)
        return a.second<b.second;

    else
        return false;
}

int main()
{
    freopen("input.txt","r",stdin);
    ll i,j,k;
    ll n,d;
    ll p,t;
    map<pp,ll> mp;

    cin>>n>>d;
    pair<ll,ll> a;

    for(i=0;i<n;i++)
    {
        cin>>p>>t;
        a[i]=make_pair(p,t);
        mp[a[i]]++;
    }

    sort(a,a+n,cmp);

    //for(i=0;i<n;i++)
        //cout<<a[i].first<<" "<<a[i].second<<endl;

    cout<<mp[a[d-1]];

    return 0;
}