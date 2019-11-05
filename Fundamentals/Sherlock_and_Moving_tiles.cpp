#include <bits/stdc++.h>

double moving_tiles(const uint &q_i, const double &l, const double &s1, const double &s2)
{
  return (sqrt(2) * (l - sqrt(q_i))/abs(s2 - s1));
}

int main()
{
  double l, s1, s2;
  std::cin >> l >> s1 >> s2;

  uint Q;
  std::cin >> Q;

  while ( Q-- )
  {
    uint q_i;
    std::cin >> q_i;

    std::cout << moving_tiles(q_i, l, s1, s2) << std::endl;
  }

  return 0;
}
