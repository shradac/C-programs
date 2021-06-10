n=int(input("enter a number"))
temp=n
revn=0
while(n!=0):
    r=(n%10)
    revn=(revn*10)+r
    n=(n//10)
if(revn==temp):
    print("palindrome")
else:
    print("not a palindrome")
