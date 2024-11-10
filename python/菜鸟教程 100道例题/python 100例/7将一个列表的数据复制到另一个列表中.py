#将一个列表的数据复制到另一个列表中。
#程序分析：使用列表[:]。
list1=[17,665]
list2=[]
list3=[]
for i in range(0,len(list1)):
    list2.append(list1[i])

print(list2)

list3=list1[:]
print(list3)