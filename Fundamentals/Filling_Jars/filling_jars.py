#!/bin/python3

def avg_jars(n: int, operations: list):
    jars_total = 0

    for arr in operations:
        init, stop = arr[:2]
        candies = arr[-1]

        jars = (stop - init) + 1
        jars_total += jars * candies

    avg = jars_total/n

    return int(avg)


if __name__=='__main__':
    n, m = map(int, input().split())

    operations = []
    for _ in range(m):
        operations.append(list(map(int, input().split())))

    avg = avg_jars(n, operations)
    print(avg)
