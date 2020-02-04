#include <bits/stdc++.h>

uint profit(uint& b, uint& s, uint& c)
{
  return b + s - c;
}

int main()
{
  uint t = 0;
  std::cin >> t;

  uint b,s,c;
  while ( t-- )
  {
    std::cin >> b >> s >> c;

    std::cout << profit(b, s, c) << std::endl;
  }

  return 0;
}
