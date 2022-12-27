
# Name : Sneha Vishwas Kamble
# roll no. : A11

"""Write a Python program to store marks scored in subject “Fundamental of Data
Structure” by N students in the class. Write functions to compute following:
a) The average score of class
b) Highest score and lowest score of class
c) Count of students who were absent for the test
d) Display mark with highest frequency
"""

def store(A):
  N=int(input("Enter the number of students whose marks are to be entered: "))
  for i in range(N):
      while True:
         m=input("Enter marks of %d student: "%(i+1))
         if(m=='AB' or m=='ab'):
            m=-1
            break
         m=int(m)
         if(m<0 or m>30):
           print("Please enter valid marks")
         else:
           break
      A.append(m)

def display(A):
  print("Marks of students are: ")
  for i in range(len(A)):
    c=print(A[i],end=" ")
  print("\n")

def average(A):
   sum=0
   for i in range(len(A)):
     if(A[i]!=-1):
       sum=sum+A[i]
   avg=sum/len(A)
   print("The average score of all students is: ",avg)

def max_min(A):
  max=-1
  min=31
  for i in range(len(A)):
    if(max<A[i]):
      max=A[i]
      ind=i+1
    if(min>A[i] and A[i]!=-1):
      min=A[i]
      ind1=i+1
  print("The max marks are: ",max)
  print("The student having max marks: ",ind)
  print("The min marks are: ",min)
  print("The student having min marks: ",ind1)


def frequency(A):
   freq = 0
   for i in range(len(A)):
      cout = 0
      for j in range(len(A)):
          if (A[i] == A[j]):
              cout+=1
      if (freq<cout):
          freq= cout
          marks=A[i]
   print("marks with highest frequency: " ,marks)


def main():
   FDS=[]
   store(FDS)
   display(FDS)
   average(FDS)
   max_min(FDS)
   frequency(FDS)

main()
