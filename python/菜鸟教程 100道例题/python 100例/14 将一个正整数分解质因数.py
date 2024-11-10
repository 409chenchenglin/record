#将一个正整数分解质因数。例如：输入90,打印出90=2*3*3*5。
n=int(input())
print(f"{n}=",end="")
def pandaun(n):
    is_p=1
    if n==1:
        is_p=0
    if n>2:
        for i in range(2,n):
            is_p=1
            if n%i==0:
                is_p=0
                break
    return is_p


while(pandaun(n)!=1):
    for i in range(2,n):
        if pandaun(i)==1 and n%i==0:
            temp=i
            print(f"{temp}*",end="")
            break
    n=n//i
print(n)
print()

