#Monday（星期一）、Tuesday（星期二）、Wednesday（星期三）、Thursday（星期四）、Friday（星期五）、Saturday（星期六）、Sunday（星期日）
from operator import ifloordiv

diyi=input("请输入第一个单词(小写):")
if diyi=="m":
    print("Monday（星期一）")

elif diyi=="w":
    print("Wednesday（星期三)")

elif diyi=="f":
    print("Friday（星期五）")

elif diyi=="t":
    dier=input("请输入第二个单词(小写)::")
    if dier=="u":
        print("Tuesday（星期二）")
    elif dier=="h":
        print("Thursday（星期四）")
    else:
        print("没有找到")

elif diyi=="s":
    dier=input("请输入第二个单词(小写)::")
    if dier=="a":
        print("Saturday（星期六）")
    elif dier=="u":
        print("Sunday（星期日）")
    else:
        print("没有找到")
        
else :
    print("没有找到")