#有一个已经排好序的列表。现输入一个数，要求按原来的规律将它插入列表中。
a = [1,4,6,9,13,16,19,28,40,100,0]
n=int(input())
print(a)
if n>a[len(a)-2]:
    a[len(a)-1]=n

elif n<a[0]:
    for i in range(len(a)-1,0,-1):
        a[i]=a[i-1]
    a[0]=n

else :
    for i in range(len(a)-3,0-1,-1):
        if n>a[i]:
            for k in range(len(a)-1,i+1,-1):
                a[k]=a[k-1]
            a[i+1]=n
            break

  
print(a)