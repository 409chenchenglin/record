'''题目：斐波那契数列。
程序分析：斐波那契数列（Fibonacci sequence），又称黄金分割数列，指的是这样一个数列：0、1、1、2、3、5、8、13、21、34、……。
在数学上，费波那契数列是以递归的方法来定义：
'''
from zoneinfo import reset_tzpath


def fib (n):
    if n==1 or n==2:
        ret=1
    else:
        ret=fib(n-1)+fib(n-2)
    return ret

n=int(input())
print(fib(n))

list=[]
for i in range(1,n+1):
# print(fib(i))
    x=fib(i)
    list.append(x)

print(list)
