#include <bits/stdc++.h>

uint modulo = 1234567;

int main()
{
  uint16_t T;
  std::cin >> T;

  while ( T-- )
  {
    uint16_t N;
    std::cin >> N;

    uint32_t routes = 1;
    for (auto i = 0 ; i < N - 1 ; ++i)
    {
      uint16_t n;
      std::cin >> n;
      std::cin.ignore();

      routes = ( routes % modulo ) * (n % modulo);
    }

    std::cout << ( routes % modulo ) << std::endl;
  }

  return 0;
}
