///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    ll n, k, mid,res;
    cin >> n >> k;
     
   mid = (n+1)/2;
     
    
    if (k <= mid)
    {
         cout<< (k * 2) - 1;      
    }
    else 
    {
      cout<<(k-mid)*2;
    }
   
}