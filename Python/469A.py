n = int(input()) 

a = list(map(int, input().split()))
b = list(map(int, input().split()))

res = [ 0 for i in range(n +1)] 

value = True 

for i in a[1:]: 
    res[i] = 1 

for j in b[1:]: 
    res[j] = 1 

for i in range(1, n + 1): 
    if (res[i] == 0):
        value = False 

if value: 
    print("I become the guy.")

else: 
    print("Oh, my keyboard!")

