///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{

  // Number of columns
  int num_col = 1;

  // Number of rows
  int num_row = 3;

  // Initializing the 2-D vector
  vector<vector<int>> v(num_row, vector<int>(num_col, 0));

  for (int i = 0; i < num_row; i++)
  {
    for (int j = 0; j < num_col; j++)
    {

      cin >> v[i][j];
    }
  }

  int f = false, n = num_row, m = num_col;
  int target = 6;

  int i, j, mido;
  i = 0;
  j = n - 1;
  while (i <= j)
  {
    mido = i + j / 2;
    if (target <= v[mido][m - 1] && target >= v[mido][0])
    {
      int l, r, mid;
      l = 0, r = m - 1;

      while (l <= r)
      {
        mid = (l + r) / 2;
        if (v[mido][mid] == target)
        {
          f = true;
          break;
        }
        else if (v[mido][mid] < target)
        {
          l = l + 1;
        }
        else if (v[mido][mid] > target)
        {
          r = r - 1;
        }
      }
      break;
    }
    else if (target < v[mido][0])
    {
      j = j - 1;
    }
    else if (target > v[mido][m - 1])
    {
      i = i + 1;
    }
  }

  cout << f;
}