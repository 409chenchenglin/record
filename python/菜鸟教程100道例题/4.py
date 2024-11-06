#题目：输入某年某月某日，判断这一天是这一年的第几天？
month_list=[0,31,28,31,30,31,30,31,31,30,31,30,31]
year=int(input())
month=int(input())
day=int(input())
sum=day
for i in month_list[0:month]:
    sum=sum+i

if year%400==0 or (year%4==0 and year%100!=0):
    if month>2:
        sum=sum+1

print(sum)
