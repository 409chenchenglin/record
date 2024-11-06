n=int(input())
def pandaun(n):
    is_p=1
    if n==1:
        is_p=0
    if n>2:
        for i in range(2,n):
            is_p=1
            if n%i==0:
                is_p=0
                break
    return is_p


while(pandaun(n)!=1):
    for i in range(2,n):
        if pandaun(i)==1 and n%i==0:
            temp=i
            print(temp)
            break
    n=n//i

print(n)

