#按相反的顺序输出列表的值。
s=input("请输入赋给列表的值:")
list=[]
for i in range(0,len(s)):
    list.append(s[i])
for i in range(len(list),0,-1):
    print(f"{list[i-1]}",end=" ")