#求一个3*3矩阵主对角线元素之和。
#提示：要用到二维列表
a=[]
sum=0
for i in range(0,3):
    a.append([])
    for j in range(0,3):
        a[i].append(float(input()))

for i in range(0,3):
    sum+=a[i][i]

print(sum)