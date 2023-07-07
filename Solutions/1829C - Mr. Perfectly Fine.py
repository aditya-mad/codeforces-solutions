test = int(input())

for i in range(test):
    size = int(input())
    memo = {'01': [], '10': [], '11': []}
    valid = ['01', '10', '11']
    for j in range(size):
        mins, skills = map(str, input().split())
        if skills in valid:
            memo[skills].append(int(mins))
    if len(memo['11']) == 0:
        if len(memo['01']) == 0 or len(memo['10']) == 0:
            print(-1)
        else:
            print(min(memo['10']) + min(memo['01']))
    else:
        if len(memo['01']) == 0 or len(memo['10']) == 0:
            print(min(memo['11']))
        else:
            print(min(min(memo['10']) + min(memo['01']), min(memo['11'])))