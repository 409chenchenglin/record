#这是记录最大值 最小值的下标后 在交换 为了少改变输入数据的顺序
#其实也可以 在循环中有大于/小于的就交换 也能满足条件 就是数据的顺序会被打乱
a=[]
n=int(input("输入数组元素的个数:"))
for i in range(n):
    a.append(int(input()))

max=a[0]

for i in range(1,n):
    if a[i]>max:
        max=a[i]
        index=i
temp=a[0]
a[0]=max
a[index]=temp

min=a[n-1]
for i in range(1,n-1):
    if a[i]<min:
        min=a[i]
        i=index

temp=a[n-1]
a[n-1]=min
a[index]=temp

print(a)