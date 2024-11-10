#题目：输入三个整数x,y,z，请把这三个数由小到大输出。
list=[]
i=0
while(i<3):
#for i in range(3):
    x=int(input())
    list.append(x)
    i=i+1

list.sort()
print(list)

for i in list:
    print(i)
