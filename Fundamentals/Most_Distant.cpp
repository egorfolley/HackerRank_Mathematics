#include <bits/stdc++.h>
#include <cstdio>

int main()
{
  uint16_t N;
  std::cin >> N;

  int min_x = 0, max_x = 0, min_y = 0, max_y = 0;
  int x, y;
  while ( N-- )
  {
    std::cin >> x >> y;

    min_x = std::min(min_x, x);
    max_x = std::max(max_x, x);
    min_y = std::min(min_y, y);
    max_y = std::max(max_y, y);
  }

  double max_dist = std::max(max_x - min_x, max_y - min_y);
  max_dist = std::max(max_dist, sqrt(max_x *1LL* max_x + max_y *1LL* max_y));
  max_dist = std::max(max_dist, sqrt(max_x *1LL* max_x + min_y *1LL* min_y));
  max_dist = std::max(max_dist, sqrt(min_x *1LL* min_x + max_y *1LL* max_y));
  max_dist = std::max(max_dist, sqrt(min_x *1LL* min_x + min_y *1LL* min_y));

  printf("%.6f", max_dist);

  return 0;
}
