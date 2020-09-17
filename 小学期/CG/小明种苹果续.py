# create by 15574946385 at 2019/10/4
# content:
n=int(input())
tree=[]
T,D,E=0,0,0
for i in range(n):
    temp=list(map(int,input().split()))
    temp=temp[1:]
    tempSum=temp[0]
    if len(temp)>1:
        for i in range(1,len(temp)):
            if temp[i]<=0:
                tempSum+=temp[i]
            elif tempSum>temp[i]:
                if temp[-1]!="False":
                    temp.append("False")
                    D+=1
                tempSum=temp[i]
        T+=tempSum
    tree.append(temp)
for i in range(len(tree)):
    pre=i-1
    if pre<0:
        pre+=len(tree)
    next=i+1
    if next>len(tree)-1:
        next-=len(tree)
    if tree[pre][-1]==tree[i][-1]==tree[next][-1]=="False":
        E+=1
print(T,D,E)