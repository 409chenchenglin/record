# 编写输入输出函数 统计学生的学号 名字 三科成绩

def stu_input(stu,n):
    for i in range(n):
        stu[i][0]=input("mun")
        stu[i][1]=input("name")
        for j in range(3):
            stu[i][2].append(input('score')) 

def stu_output(stu,n):
    print(stu)
    for i in range(n):
        print(stu[i])



student=[]
n=int(input())
for i in range(n):
    student.append(["",'',[]])
stu_input(student,n)
stu_output(student,n)