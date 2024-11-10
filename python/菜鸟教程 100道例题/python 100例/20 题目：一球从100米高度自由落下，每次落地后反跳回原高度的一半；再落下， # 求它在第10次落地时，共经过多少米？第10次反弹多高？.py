#题目：一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，
# 求它在第10次落地时，共经过多少米？第10次反弹多高？
n=100
sum_height=0
height=0
for i in range(1,11):
    if i==1:
        sum_height=sum_height+n
    else:
        sum_height=sum_height+n*2
    n=n/2
height=n
print(sum_height)
print(height)
