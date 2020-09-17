n = int(input())
number= list(map(int,input().split()))
number=sorted(number)
max = max(number)
min = min(number)
if(n%2!=0):
    index = (n-1)//2
    median = number[index]
else:
    start = (n-1)//2
    end = start+1
    result = number[start]+number[end]
    if(result%2==0):
        median = result//2
    else:
        median = result/2
print(max,median,min)