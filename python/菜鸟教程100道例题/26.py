#利用递归方法求5!。
def jiecheng(n):
    if n==1:
        ret=1
    else:
        ret=n*jiecheng(n-1)
    return  ret

n=5
print(jiecheng(n))