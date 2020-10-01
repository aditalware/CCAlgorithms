from itertools import combinations_with_replacement;

def extended_euclid(a, b):
    assert a > 0
    assert b > 0
    
    x1, y1, m = 1, 0, a
    x2, y2, n = 0, 1, b
    while m % n != 0:
        q = m // n
        x1, y1, m, x2, y2, n = x2, y2, n, x1 - q * x2, y1 - q * y2, m - q * n
    
    return (x2, y2, n)

mod = 10**9 + 7


for i in range(int(input())):
    n=int(input())
    s=input()
    u=[]
    # op=0
    # cl=0
    p=0
    # if(s[0]=='('):
    #     print("hello")
    qq=(n*(n+1))//2
    
    for i in range(n):
        u.append(i)
    # print(p)
    k=list(combinations_with_replacement(u,2))
    for i,j in k:
        # print(i,j)
        op=0
        cl=0
        for q in range(i,j+1):
            if(s[q]=='('):
                op+=1
            elif(s[q]==')'):
                cl+=1
            if(cl>op):
                cl-=1
                op+=1
                p+=1
                # print("p = ",p)
    x, y, n = extended_euclid(qq, mod)
    print((p*x + mod)%mod)    




# Q = 15
# P = 4
