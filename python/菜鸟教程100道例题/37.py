# 题目：对10个数进行排序。
# 程序分析：可以利用选择法，即从后9个比较过程中，选择一个最小的与第一个元素交换，下次类推，即用第二个元素与后8个进行比较，并进行交换。
list=[]
for i in range(0,10):
    list.append(int(input()))
# input 默认是字符串类型 要转换为int类型 不然用字符串后面比较可能会出错

for item in list:
    print(item,end=" ")
print()

for i in range (0,9):
    for x in range(i+1,10):
        if list[x]<list[i]:
            temp=list[i]
            list[i]=list[x]
            list[x]=temp

for item in list:
    print(item,end=" ")
print()

