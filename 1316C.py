I=map(int,input().split(' '))
n,m,p=list(I)
a=list(I)
b=list(I)
fir=sec=0
for i in a:
    if(i%p!=0):
        fir=i
        break
for i in b:
    if(i%p!=0):
        sec=i
        break
print(fir+sec)
    