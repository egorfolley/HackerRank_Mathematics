#!/bin/python3

solve = lambda balls: sum(balls) * .5

if __name__ == '__main__':
    n = int(input())

    balls = []
    for inp in range(n):
       inp = int(input())
       balls.append(inp)

    result = solve(balls)

    print(result)
