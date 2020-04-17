n,k=map(int,input().split(' '))
pos=[0]*(n+1)
a=list(map(int,input().split(' ')))
for i in range(0,n):
    pos[a[i]]=i+1

mx=0
ans=1
sr=[]
for i in range(n,n-k,-1):
    mx+=i
    sr.append(pos[i])
sr.sort()
for i in range(1,k):
    ans=ans*(sr[i]-sr[i-1])%998244353

print(mx,ans)