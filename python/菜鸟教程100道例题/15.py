#题目：利用条件运算符的嵌套来完成此题：学习成绩>=90分的同学用A表示，60-89分之间的用B表示，60分以下的用C表示
score=int(input())
if score>=90:
    print("A")
elif 60<=score<=89:
    print("B")
else:
    print("C")
