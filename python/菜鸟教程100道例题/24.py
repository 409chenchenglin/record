#题目：有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...求出这个数列的前20项之和。
# m1=1
# m2=2
# z1=2
# z2=3
# fenzi=0
# fenmu=0
fenzi=[]
fenmu=[]
sum_number=0
for i in range(0,20):
    if i==0:
        fenzi.append(2)
        fenmu.append(1)
        sum_number+=fenzi[i]/fenmu[i]
    elif i==1:
        fenzi.append(3)
        fenmu.append(2)
        sum_number+=fenzi[i]/fenmu[i]
    else :
        fenzi.append(fenzi[i-1]+fenzi[i-2])
        fenmu.append(fenmu[i - 1]+fenmu[i - 2])
        sum_number+=fenzi[i]/fenmu[i]

print(f"{sum_number:.10f}")

