#编写一个函数，输入n为偶数时，调用函数求1/2+1/4+...+1/n,当输入n为奇数时，调用函数1/1+1/3+...+1/n
#记得要用浮点数才行 不然就是整数除以整数了
def oushu(n):
    total=0
    for i in range(2,n+2,2):
        total+=1.0/i
        # 记得要用浮点数才行 不然就是整数除以整数了
    print(total)

def jishu(n):
    total=0
    for i in range(1,n+1,1):
        total+=1.0/i
        # 记得要用浮点数才行 不然就是整数除以整数了
    print(total)

def test(n):
    if n%2==0:
        oushu(n)
    else:
        jishu(n)

n=int(input())
test(n)
