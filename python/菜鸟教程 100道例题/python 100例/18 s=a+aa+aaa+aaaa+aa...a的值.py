#求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。例如2+22+222+2222+22222(此时共有5个数相加)，几个数相加由键盘控制。
def sum(a,n):
    sum1=0
    for i in range(1,n+1):
        sum1=sum1*10+a
    return sum1

n=int(input())
a=int(input())
sum2=0
for i in range(1,n+1):
    print(sum(a,i))
    sum2=sum2+sum(a,i)

print(sum2)