#有 n 个整数，使其前面各数顺序向后移 m 个位置，最后 m 个数变成最前面的 m 个数
a=[]
b=[]
n=int(input("整数为n:"))
m=int(input("向后移动m个位置:"))
for i in range(0,n):
    a.append(int(input()))



print(a)

while m>n:
    m-=n

if m==n:
    print(a)
else:
    for j in range(n-m,n):
        b.append(a[j])

    for k in range(0,n-m):
        b.append(a[k])
    print(b)