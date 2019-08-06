#include <bits/stdc++.h>

using namespace std;

pair<int, int> pointReflection(int Px, int Py, int Qx, int Qy)
{
  int Rx = 2 * Qx - Px;
  int Ry = 2 * Qy - Py;

  return make_pair(Rx, Ry);
}

int main()
{
  int n;
  cin >> n;

  int Px, Py;
  int Qx, Qy;

  while (n--)
  {
    cin >> Px >> Py;
    cin >> Qx >> Qy;

    pair<int, int> respective_values = pointReflection(Px, Py, Qx, Qy);
    cout << respective_values.first << ' ' << respective_values.second << endl;
  }

  return 0;
}
