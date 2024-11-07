# 题目：输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。
# 程序分析：利用 while 或 for 语句,条件为输入的字符不为 '\n'。
str1=input()
number=0
letter=0
blank=0
other=0
for i in str1:
    if '0'<=i<="9":
        number=number+1
    elif "a"<=i<='z' or "A"<=i<="Z":
        letter=letter+1
    elif i==' ':
        blank=blank+1
    else:
        other=other+1

print(number)
print(letter)
print(blank)
print(other)
