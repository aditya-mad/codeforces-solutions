list_inp = input()
count1, count2, count3 = 0, 0, 0

for num in list_inp:
    if num == '1':
        count1 += 1
    elif num == '2':
        count2 += 1
    elif num == '3':
        count3 += 1

for i in range(len(list_inp)):
    if i % 2 != 0:
        print("+", end="")
    elif count1 > 0:
        print('1', end="")
        count1 -= 1
    elif count2 > 0:
        print('2', end="")
        count2 -= 1
    elif count3 > 0:
        print('3', end="")
        count1 -= 1
