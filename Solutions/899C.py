num = int(input())
# array1 = list(range(1, num + 1))
array1 = []
sum1 = 0
sum2 = 0


for i in range(num, 0, -1):
    if sum1 <= sum2:
        sum1 += i
        array1.append(i)
    else:
        sum2 += i
        # array1.remove(i)

print(abs(sum2 - sum1))
print(len(array1), end=" ")
for i in array1:
    print(i, end=" ")
