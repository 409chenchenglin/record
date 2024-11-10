#题目：一个数如果恰好等于它的因子之和，这个数就称为"完数"。例如6=1＋2＋3.编程找出1000以内的所有完数。
def inzihe(n):
    sum=0
    for i in range(1,n):
        if n%i==0:
            sum=sum+i
    return  sum

def inzi(n):
    list=[]
    for i in range(1,n):
        if n%i==0:
            print(f"{i}",end=' ')


for i in range(1,1001):
    if inzihe(i)==i:
        print(i)
        inzi(i)
        print()
