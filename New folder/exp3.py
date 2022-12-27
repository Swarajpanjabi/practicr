def a(M) :
    print("\nEnter the order of the Matrix (row,col) : ")
    r = int(input("\trow = "))
    c = int(input("\tcol = "))
    print("Enter the elements of the Matrix : \n")
    for i in range(r) :
       A = []
       for j in range (c) :
          A.append(int(input()))
       M.append(A)
    print("\nMatrix accepted successfully\n")


def d(M,r,c):
   print("Matrix (%d,%d) : "%(r,c))
   for i in range(r):
      print("\t\t" ,end=' ')
      for j in range(c):
          print("%3d"%M[i][j],end=' ')
      print("")


def add(M1,M2,M3,r,c) :
    for i in range(r) :
        A = []
        for j in range(c):
           A.append(M1[i][j] + M2[i][j])
        M3.append(A)

def sub(M1,M2,M3,r,c) :
    for i in range(r) :
        A = []
        for j in range(c):
           A.append(M1[i][j] - M2[i][j])
        M3.append(A)


def mul(M1,M2,M3,r1,c1,c2) :
      for i in range(r1) :
        A = []
        for j in range(c2) :
            sum = 0
            for k in range(c1) :
                sum = sum + (M1[i][k] * M2[k][j])
            A.append(sum)
        M3.append(A)

def find_transpose(M,r,c,T) :
    for i in range(c):
        A = []
        for j in range(r):
           A.append(M[j][i])
        T.append(A)

def main():
    M1=[]
    M2=[]
    M3=[]
    r1 = len(M1)
    c1 = len(M1[0])
    r2 = len(M2)
    c2 = len(M2[0])
    a(M)
    add()
    sub()
    d()
main()
quit()
