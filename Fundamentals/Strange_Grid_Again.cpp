#include <bits/stdc++.h>

long findElement(const long &r, const int &c)
{
  if (r % 2 == 0) { return 1 + 2 * ( (5 * r / 2) - (5 - c) - 1); }
  else { return 2 * ( (5 * (r + 1) / 2) - (5 - c) - 1); }
}

int main()
{
  long r = 0;
  int c = 0;

  std::cin >> r >> c;

  std::cout << findElement(r, c) << std::endl;

  return 0;
}
