         # Name : Sneha Vishwas Kamble
# Roll no. : A11

"""Write a Python program to store first year percentage of students in array. Write
function for sorting array of floating point numbers in ascending order using
a) Selection Sort
b) Bubble sort and display top five scores"""

def accep(D):
   n=int(input("Enter NO OF STUDENTS"))
   for i in range (n):
    K=float(input("ENTER MARKS %d " %(i+1)))
    D.append(K)

def disp(D):
   print ("marks obtained =")
   for i in range(len(D)):
    print ("MARKS OF %d"%(i+1),D[i])
   print ("marks obtained =",D)

def bubb_sort(D):
   n=len(D)
   for i in range (1,n):
     for j in range (n-i):
       if (D[j]>D[j+1]):
          temp=D[j]
          D[j]=D[j+1]
          D[j+1]=temp

def select_sort(D):
   n=len(D)
   for i in range (n-1):
       min_pos=i
       for j in range (i+1,n):
         if (D[min_pos]>D[j]):
              min_pos=j
       temp=D[min_pos]
       D[min_pos]=D[i]
       D[i]=temp
       
def top_five_are(D):
    for i in range (5):
       print("top no .%d is"%(i+1),D[len(D)-(i+1)])

def main():
  D=[]
  accep(D)
  bubb_sort(D)
  #select_sort(D)
# top_five_are(D)
  disp(D)
main()