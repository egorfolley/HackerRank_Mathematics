#!/bin/python3
from math import factorial


if __name__=='__main__':
    t = int(input())

    for _ in range(t):
        n = int(input())
        k = int(input())

        purchase = factorial(n + k - 1)//((factorial(n - 1) * factorial(k))) % 10 ** 9

        print(purchase)
