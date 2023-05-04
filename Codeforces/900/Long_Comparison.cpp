///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"
using namespace std;
#define MOD 1000000007
inline void normal(ll &a) { a %= MOD; (a < 0) && (a += MOD); }
inline ll modMul(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a*b)%MOD; }
inline ll modAdd(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a+b)%MOD; }
inline ll modSub(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); a -= b; normal(a); return a; }
inline ll modPow(ll b, ll p) { ll r = 1; while(p) { if(p&1) r = modMul(r, b); b = modMul(b, b); p >>= 1; } return r; }
inline ll modInverse(ll a) { return modPow(a, MOD-2); }
inline ll modDiv(ll a, ll b) { return modMul(a, modInverse(b)); }

int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        ll x1, x2, p1, p2;
        cin >> x1 >> p1 >> x2 >> p2;

        x1 = x1 * modPow(10, p1);
        x2 = x2 * modPow(10, p2);

        if (x1 > x2)
        {
            cout << ">" << nl;
        }
        else if (x1 < x2)
        {
            cout << "<" << nl;
        }
        else if (x1 == x2)
        {
            cout << "=" << nl;
        }
    }
}