#海滩上有一堆桃子，五只猴子来分。第一只猴子把这堆桃子平均分为五份，多了一个，这只猴子把多的一个扔入海中，拿走了一份。
# 第二只猴子把剩下的桃子又平均分成五份，又多了一个，它同样把多的一个扔入海中，拿走了一份，
# 第三、第四、第五只猴子都是这样做的，问海滩上原来最少有多少个桃子？
i=1#遍历5的倍数
j=0 #桃子为5的倍数加1
k=0#记录能被整除的次数 作为判断
l=0#循环判断条件次数
is_found=0
while(is_found!=1):
    k=0
    j=i*5+1
    i+=1
    temp=j #用临时变量 记录j 不然后面会被除掉
    for l in range(0,5):
        if (temp-1)%5==0:
            k+=1
            temp=4*(temp-1)/5
        else:
            break
    if k==5:
        print(j)
        is_found=1
    else:
        k=0