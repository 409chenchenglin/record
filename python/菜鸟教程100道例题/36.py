#题目：求100之内的素数。
import math
def sushu(n,m):
    for i in range(n,m+1):
        is_sushu=1
        if i<=1:
            is_sushu=0
        else:
            for x in range(2,int(math.sqrt(i+1))+1,1):
                if i%x==0:
                    is_sushu=0
                    break
        if is_sushu==1:
            print(i)

n=int(input("请输入起始值:"))
m=int(input("请输入结束值（包括在内）:"))
sushu(n,m)