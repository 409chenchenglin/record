#两个 3 行 3 列的矩阵，实现其对应位置的数据相加，并返回一个新矩阵：
"""X = [[12,7,3],
    [4 ,5,6],
    [7 ,8,9]]

Y = [[5,8,1],
    [6,7,3],
    [4,5,9]]"""
X = [[12,7,3],[4 ,5,6],[7 ,8,9]]

Y = [[5,8,1],[6,7,3],[4,5,9]]

a=[]
for j in range(0,3):
    a.append([])
    for k in range(0,3):
        a[j].append(X[j][k]+Y[j][k])
print(a)

#或者也可以这样
"""#!/usr/bin/python
# -*- coding: UTF-8 -*-
 
X = [[12,7,3],
    [4 ,5,6],
    [7 ,8,9]]
 
Y = [[5,8,1],
    [6,7,3],
    [4,5,9]]
 
result = [[0,0,0],
         [0,0,0],
         [0,0,0]]
 
# 迭代输出行
for i in range(len(X)):
   # 迭代输出列
   for j in range(len(X[0])):
       result[i][j] = X[i][j] + Y[i][j]
       因为之前已经定义了 每个元素是0 所以可以通过索引直接赋值 但上面自己写的不能 因为没有初始化
 
for r in result:
   print(r)"""