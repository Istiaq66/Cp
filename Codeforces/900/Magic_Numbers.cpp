///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

    string s;
    ll f=1;
    cin >> s;

    for (int i = 0; i < s.size();)
    {
        if (s[i] == '1' && s[i + 1] == '4' && s[i + 2] == '4')
        {
            i += 3;
        }
        else if (s[i] == '1' && s[i + 1] == '4')
        {
            i += 2;
        }
        else if (s[i] == '1')
        {
            i++;
        }
        else{
          f=0;
          break;  
        }
    }
    if(f==0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}