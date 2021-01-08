#include <bits/stdc++.h>

int main()
{
  int n = 0;
  std::cin >> n;

  std::set<int> x, y;
  int x_i = 0, y_i = 0;
  bool same_line = true;

  for (int i = 0; i < n; ++i)
  {
    std::cin >> x_i >> y_i;

    x.insert(x_i);
    y.insert(y_i);
  }

  if ((x.size() == 1 || y.size() == 1))
    std::cout << "YES" << std::endl;
  else
    std::cout << "NO" << std::endl;

  return 0;
}
