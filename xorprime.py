import math

def prime(num):
    for i in range(2, int(math.sqrt(num)) + 1):
        if num % i == 0:
            return False
    return True


t = input()
if(t.isdigit()==False):
    print("Enter valid values")
else:
    while t > 0:
        n = int(input())
        ans = -1
        for i in range(2, n + 1):
            if prime(i):
                if ans == -1:
                    ans = i
            else:
                ans = ans ^ i
        print(ans)
        t -= 1
