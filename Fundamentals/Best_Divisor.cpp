#include <bits/stdc++.h>

int main()
{
  uint32_t n;
  std::cin >> n;

  uint max = 0;
  uint better = 0;
  for( auto i = 1; i <= n; ++i)
  {
    if( n % i == 0)
    {
      uint sum = 0;
      uint rem = 0;
      uint j = i;
      while( j != 0 )
      {
        rem = j % 10;
        sum += rem;
        j /= 10;
      }

      if ( max < sum )
      {
        max = sum;
        better = i;
      }
    }
  }

  std::cout << better << std::endl;

  return 0;
}
