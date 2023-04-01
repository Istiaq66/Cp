///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    string s;
    cin >> s;
    for (int i = 0; i < s.size();)
    {
      char r=s[i+1];
      s[i+1]=s[i];
      s[i]=r;
      i = i+2;
    }
    cout<<s;
}