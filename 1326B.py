n=int(input())
a=[]
b=list(map(int,input().split(' ')))
x=0
for i in range(0,n):
    a.append(b[i]+x)
    x=max(x,a[i])
for i in range(0,n):print(a[i])