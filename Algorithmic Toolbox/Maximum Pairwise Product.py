def max_prod_fast(arr):
    p1 = max(arr)
    arr.remove(p1)
    p2 = max(arr)
    return p1*p2

n = int(input())
a = [int(x) for x in input().split()]

ans = max_prod_fast(a)
print(ans)