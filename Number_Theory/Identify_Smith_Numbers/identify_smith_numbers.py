#!/bin/python3
import math


def get_prime_factors(n: int):
    prime_factors = []

    while n % 2 == 0:
        prime_factors.append(2)
        n /= 2

    for i in range(3, int(math.sqrt(n)) + 1, 2):
        while n % i == 0:
            prime_factors.append(i)
            n /= i

    if n > 2:
        prime_factors.append(int(n))

    return prime_factors

def is_smith_number(n: int):
    prime_factors = get_prime_factors(n)

    sum_of_factors = sum([sum(map(int, list(str(val)))) for val in prime_factors])
    sum_of_digits = sum([int(i) for i in list(str(n))])

    return (sum_of_digits == sum_of_factors).real

if __name__=='__main__':
    n = int(input())
    res = is_smith_number(n)

    print(res)
