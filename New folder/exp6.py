def main():
    p=[]
    a(p)
    d(p)
    n=len(p)
    q(p,0,n-1)
    d(p)
    t(p)
def a(A):
    n=int(input("Enter The No. of elements: "))
    for i in range(n):
        a=float(input("Enter the Element: "))
        A.append(a)
def d(A):
    for i in range(len(A)):
        print("ELements of the list are:",A[i])
    print("\n")
def t(A):
    n=len(A)
    if(n<=5):
        print("Top 5 Are:",A[::-1])
    else:
        print("Top 5 Are:",A[:n-6:-1])
def P(A,lb,ub):
    i=lb+1
    j=ub
    while(i<=j):
        while(i<=j and A[lb]>=A[i]):
            i=i+1
        while(A[lb]<A[j]):
            j=j-1
        if(i<j):
            temp=A[i]
            A[lb]=A[j]
            A[j]=temp
        temp=A[lb]
        A[lb]=A[j]
        A[j]=temp
        return j
def q(A,lb,ub):
    if(lb<ub):
        mid=P(A,lb,ub)
        q(A,lb,mid-1)
        q(A,mid+1,ub)
main()
