n=int(input("enter the number: "))
f=0
s=1
print(f)
print(s)
for i in range(2,n+1):
    t=f+s
    print(t)
    f=s
    s=t
