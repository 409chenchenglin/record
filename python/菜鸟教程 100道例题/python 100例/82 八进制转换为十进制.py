#八进制转换为十进制
n=int(input())
# if __name__ == '__main__':
#     n = 0
#     p = input('input a octal number:\n')
#     for i in range(len(p)):
#         n = n * 8 + ord(p[i]) - ord('0')
#     print(n)
total=0
i=0
if n==0:
    total=n
else:
    while(n>0):
        t=n%10
        total+=t*(8**i)
        i+=1
        n=n//10
print(total)