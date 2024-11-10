#给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字。
numbers=int(input('给一个不多于5位的正整数:'))
cnt=0
list=[]
if numbers==0:
    weishu=1
    print("numbers")
else :
    while(numbers>0):
        list.append(numbers%10)
        cnt+=1
        numbers//=10

print(cnt)
for i in range(0,len(list),1):
    print(f"{list[i]}",end=" ")