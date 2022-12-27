def a(D):
    n=int(input("Enter No. of Students: "))
    for i in range(n):
        k=float(input("Enter Marks %d "%(i+1)))
        D.append(k)
def display(D):
    print("Marks obtained:")
    for i in range(len(D)):
        print("Marks Of %d "%(i+1),D[i])
    print("Marks Obtained=",D)
def b(D):
    n=len(D)
    for i in range(1,n):
        for j in range(n-i):
            if(D[j]>D[j+1]):
                temp=D[j]
                D[j]=D[j+1]
                D[j+1]=temp
def s(D):
    n=len(D)
    for i in range(n-1):
        min=i
        for j in range(i+1,n):
            if(D[min]>D[j]):
                min_pos=j
        temp=D[min]
        D[min]=D[i]
        D[i]=temp
def t(D):
    for i in range(5):
        print("Top No. %d is"%(i+1),D[len(D)-(i+1)])
def main():
    D=[]
    a(D)
    b(D)
    s(D)
    t(D)
    display(D)
main()
