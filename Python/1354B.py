def find_shortest_substring(s):
    n = len(s)
    start = end = 0
    count_1 = count_2 = count_3 = 0
    flag_1 = flag_2 = flag_3 = False
    min_length = float('inf')

    while end < n:
        if s[end] == '1':
            count_1 += 1
            flag_1 = True
        elif s[end] == '2':
            count_2 += 1
            flag_2 = True
        else: 
            count_3 += 1
            flag_3 = True

        while flag_1 and flag_2 and flag_3:
            min_length = min(min_length, end - start + 1)

            if s[start] == '1':
                count_1 -= 1
                if count_1 == 0:
                    flag_1 = False
            elif s[start] == '2':
                count_2 -= 1
                if count_2 == 0:
                    flag_2 = False
            else:  # s[start] == '3'
                count_3 -= 1
                if count_3 == 0:
                    flag_3 = False

            start += 1

        end += 1

    return min_length if min_length != float('inf') else 0


t = int(input())

for _ in range(t): 
    s = input() 
    print(find_shortest_substring(s))
