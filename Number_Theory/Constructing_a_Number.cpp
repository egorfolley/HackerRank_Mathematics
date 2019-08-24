#include <bits/stdc++.h>

std::string is_contrib(std::vector<int> a)
{
  int temp = 0;
  for (auto &i : a)
    temp += i % 3;

    return ( temp % 3 ) ? "No" : "Yes";
}

int main()
{
  uint16_t t;
  std::cin >> t;

  while ( t-- )
  {
    uint16_t n;
    std::cin >> n;

    std::cin.ignore();
    std::string line_str;
    std::getline(std::cin, line_str);

    std::istringstream iss(line_str);
    std::vector<std::string> line((std::istream_iterator<std::string>{iss}),
                                   std::istream_iterator<std::string>());

    std::vector<int> a;
    for (int itr = 0; itr < n; itr++)
    {
      int a_i = stoi(line[itr]);
      a.push_back(a_i);
    }

    std::cout << is_contrib(a) << std::endl;
  }
}
