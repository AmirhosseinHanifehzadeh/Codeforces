n, m = list(map(int, input().split()))
a = list(map(int, input().split()))

dp = [] 

for i in range(n): 
    dp.append(len(set(a[i:])))

for _ in range(m): 
    l = int(input()) 

    print(dp[l - 1])

