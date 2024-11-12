#输入一个奇数，然后判断最少几个 9 除于该数的结果为整数
n=int(input("请输入一个奇数"))
m=9
cnt=1
while(m%n!=0):
    m=m*10+9
    cnt+=1
print(f"{cnt}个9可以被{n}整除 {m}")
print(f"{m}/{n}={m/n}")
