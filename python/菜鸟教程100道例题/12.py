#题目：判断101-200之间有多少个素数，并输出所有素数。
cnt=0
for i in range(101,201):
    s=1
    for n in range(2,i):
        if i%n==0:
            s=0
            break
    if s==1:
        cnt=cnt+1
        print(i)

print(cnt)