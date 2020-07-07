import sys
scan = sys.stdin.readline
arr = []
n = int(input().strip())
for x in range(n):
    inp = scan().strip()
    inp = inp.split(' ')
    if inp[0] == "push":
        arr.append(inp[1])
    elif inp[0] == "pop":
        print(arr.pop() if len(arr) != 0 else -1)
    elif inp[0] == "size":
        print(len(arr))
    elif inp[0] == "top":
        print(arr[-1] if len(arr) != 0 else -1)
    elif inp[0] == "empty":
        print(1 if len(arr) == 0 else 0)
