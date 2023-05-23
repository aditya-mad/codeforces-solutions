string1 = input()
string2 = input()

string1 = string1.lower()
string2 = string2.lower()
count = 0
for letter in range(len(string1)):
    if string1[letter] > string2[letter]:
        print(1)
        count = 1
        break
    elif string1[letter] < string2[letter]:
        print(-1)
        count = 1
        break

if count != 1:
    print(0)
