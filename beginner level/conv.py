a=list(input())
b=list(input())
d=len(a)
e=len(b)
i=0
j=0
r=[]
while d>0:
    if a[i]==b[j]:
        r.append(a[i])
    j=j+1
    i=i+1
    d=d-1
print(e-len(r))
