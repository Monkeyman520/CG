n = int(input())
a = []
for i in range(n):
    a.append(input())
 
for s in a:
    s = s.replace("/","//") # 除法换成整除
    s = s.replace("x","*") # x换成乘法*
    msum = eval(s) # 执行表达式得出运算结果
    if(msum == 24):
        print("Yes")
    else:
        print("No")
