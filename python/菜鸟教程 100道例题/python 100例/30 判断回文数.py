#一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同
n=(input("请输入一个正五位数:"))
#list=[]
# while(n>0):
#     list.append(n%10)
#     n//=10
long=len(n)
is_hui=1
for i in range(0,long//2,1):
    if n[i]!=n[long-1-i]:
        is_hui=0
        break
if is_hui==1:
    print("这个五位数是回文数")
else :
    print("这个五位数不是回文数")