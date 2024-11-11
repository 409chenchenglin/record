# test=[]
# a=int(input())
# test.append(a)
# b=int(input())
# test.append(b)
# c=int(input())
# test.append(c)
# test.sort()
# print(test)
a=int(input())
b=int(input())
c=int(input())
if a>b:a,b=b,a
if a>c: a,c=c,a
if b>c: b,c=c,b
print(a,b,c)



