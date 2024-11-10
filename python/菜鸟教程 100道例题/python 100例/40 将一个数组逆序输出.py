#将一个数组逆序输出
a=[9, 6, 5, 4, 1]
print(a)
b=[]
for i in range(len(a)-1,0-1,-1):
    b.append(a[i])

a=b
print(a)
print()

a=[9, 6, 5, 4, 1]
print(a)
for i in range(0,len(a)//2):
    temp=a[i]
    a[i]=a[len(a)-1-i]
    a[len(a) - 1 - i]=temp

print(a)