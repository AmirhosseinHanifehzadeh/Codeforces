s, n = list(map(int, input().split()))

alist = [] 
i = n - 1 

for _ in range(n): 
    x, y = list(map(int, input().split()))
    alist.append((x, y))

alist.sort(key = lambda x: x[1])

while i != -1: 
    if (alist[i][0] < s): 
        s += alist[i][1] 
        alist.pop() 
        i = len(alist) - 1

    else: 
        i -= 1 

if len(alist): 
    print("NO")

else: 
    print("YES")
