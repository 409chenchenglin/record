#某个公司采用公用电话传递数据，数据是四位的整数，在传递过程中是加密的，加密规则如下：
# 每位数字都加上5,然后用和除以10的余数代替该数字，再将第一位和第四位交换，第二位和第三位交换。
n=(input("请输入加密前的四位整数:"))
a=[]
for i in range(len(n)):
    a.append(n[i])
print(a)

for i in range(4):
    a[i]=(int(a[i])+5)%10

print(a)
a[0],a[3]=a[3],a[0]
# temp=a[0]
# a[0]=a[3]
# a[3]=temp
#
# temp=a[1]
# a[1]=a[2]
# a[2]=temp
a[1],a[2]=a[2],a[1]

for i in range(len(a)):
    print(a[i],end="")