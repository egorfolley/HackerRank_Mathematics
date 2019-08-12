#include <bits/stdc++.h>

using namespace std;

int main()
{
  int T;
  cin >> T;

  int N;
  while ( T-- )
  {
    cin >> N;

    cout << N * ( N - 1 ) / 2 << endl;
  }

  return 0;
}
