tc=int(input())
for _ in range(int(tc)):
    n=int(input())
    a=list(map(int,input().split()))
    mx=max(a)
    d=[]
    # print(set(a[:mx]))
    # print(set(range(1,mx)))
    if(set(a[:mx])==set(range(1,mx+1)) and set(a[mx:n])==set(range(1,n-mx+1))):
        d.append(mx)
    if(set(a[:n-mx])==set(range(1,n-mx+1)) and set(a[n-mx:n])==set(range(1,mx+1))):
        d.append(n-mx)
    d=set(d)
    print(len(d))
    for i in d:
        print(i,n-i)

