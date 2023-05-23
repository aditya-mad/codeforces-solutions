length = int(input())
nums = list(map(int, input().split()))
nums.sort()
squares = 0


for i in range(length//2):
    squares += (nums[i] + nums[length - 1 - i]) ** 2


print(squares)
