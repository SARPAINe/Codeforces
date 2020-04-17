tc=int(input())
for _ in range(tc):
    n=int(input())
    a=list(map(int,input().split(' ')))
    a.sort()
    if(n%2==0):
        i=int(n/2)
        j=int(n/2-1)
        for _ in range(int(n/2)):
            print(a[j],a[i],end=' ')
            j-=1
            i+=1
    else:
        i=int(n/2)
        j=int(n/2+1)
        for _ in range(int(n/2)):
            print(a[i],a[j],end=' ')
            i-=1
            j+=1
        print(a[0],end=' ')
