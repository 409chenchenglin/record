#题目：按逗号分隔列表
#有新函数 就抄答案了
L = [1,2,3,4,5]
s1 = ','.join(str(n) for n in L)
print (s1)

'''for n in L：这是一个列表推导式，它遍历列表L中的每个元素n。

str(n)：将每个元素n转换成字符串。如果n已经是字符串类型，这一步不会改变它；如果n是其他类型（如整数、浮点数等），这一步会将其转换成字符串。

','.join(...)：  join()方法用于将一个可迭代对象（如列表）中的元素连接成一个字符串。
在这个例子中，join()方法将上一步得到的字符串列表中的元素用逗号,连接起来。'''
