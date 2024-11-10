# 打印出如下图案（菱形）:
#    *
#   ***
#  *****
# *******
#  *****
#   ***
#    *
from turtledemo.sorting_animate import start_ssort

n=int(input("请输入一个正奇数："))
for i in range(1,n+2,2):
    space=" "*int((n-i)/2)
    stars="*"*i
    print(space+stars)

for i in range(n-2,0,-2):
    space = " " * int((n - i) / 2)
    stars = "*" * i
    print(space + stars)



