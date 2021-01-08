#!/bin/python3


if __name__=="__main__":
    n = int(input())

    x_0, y_0 = map(int, input().split())

    same_line = True
    for _ in range(n - 1):
        x_i, y_i = map(int, input().split())

        if not(x_i == x_0 or y_i == y_0):
            same_line = False

    print("YES" if same_line else "NO")
