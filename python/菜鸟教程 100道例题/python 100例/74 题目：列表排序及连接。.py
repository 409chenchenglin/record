#题目：列表排序及连接。
# 程序分析：排序可使用 sort() 方法，连接可以使用 + 号或 extend() 方法。
W=[1,2,4,64,1,34,48,999]
m=[120,163,1465,41,641]
print(W)
print(m)
W.sort()
m.sort()
print(W+m)
print((W+m).sort())