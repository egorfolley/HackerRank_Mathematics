#!/bin/python3

halloween_party = lambda k : (k - k//2) * (k//2)

if __name__=='__main__':
    t = int(input())
    
    for _ in range(t):
        k = int(input())
        print(halloween_party(k))
