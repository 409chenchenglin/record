a=[]
n=int(input())
for j in range(n):
    a.append([])
    for k in range(j+1):
        if k==0 or k==j:
            a[j].append(1)
        else :
            a[j].append(a[j-1][k-1]+a[j-1][k])

for i in range(len(a)):
    for m in range(i+1):
        print(a[i][m],end=" ")
    print()