#include <bits/stdc++.h>

using namespace std;

int GCD(int a, int b)
{
  if (a == b) return a;
  int result = a > b ? GCD(a - b, b) : GCD(a, b - a);

  return result;
}

int main()
{
  uint T = 0;
  std::cin >> T;

  uint l = 0, b = 0;
  uint piece_len = 0;
  while( T-- )
  {
    std::cin >> l >> b;
    piece_len = GCD(l, b);
    piece_len *= piece_len;

    std::cout << (l * b) / piece_len << std::endl;
  }

  return 0;
}
