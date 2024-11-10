#题目：求1+2!+3!+...+20!的和。
def leicheng(n):
    total=1
    for i in range(1,n+1):
        total*=i
    return total
n=int(input("请输入一个正整数:"))
total=0
# l=range(1,21)
# total=sum(map(leicheng,l))
for i in range(1,n+1):
    x=leicheng(i)
    total+=x
    print(f"{i}!",end=" ")
    if i!=n:
        print("+",end=" ")
    else:
        print("=",end=" ")
print(total)
