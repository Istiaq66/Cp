///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(int x)
{
  int a;
  a = x;
  int b = a, c = 0;
  while (b != 0)
  {
    c = b % 10 + c * 10;
    b = b / 10;
  }

  if (a <= 0)
  {
    return false;
  }
  else if (a == c)
  {
    return true;
  }
  else
  {
    return false;
  }
}
int main()
{
  cout << isPalindrome(121);
}