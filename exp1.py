"""In second year, computer engineering class, group A student’s play 
cricket, group B students play badminton and group C students play 
football. Write a Python program using functions to compute 
following: -
a) List of students who play both cricket and badminton 
b) List of students who play either cricket or badminton but not both 
c) Number of students who play neither cricket nor badminton
d) Number of students who play cricket and football but not 
badminton. 
(Note-While realizing the group, duplicate entries should be avoided, 
do not use SET built-in functions)"""
groupA=[]
groupB=[]
groupC=[]

n1=int(input("Enter the student count who play cricket"))
print("Enter students name:")
groupA=list(map(str ,input().split(" ")))

n2=int(input("Enter the student count who play badminton"))
print("Enter students name:")
groupB=list(map(str ,input().split(" ")))

n3=int(input("Enter the student count who play football"))
print("Enter students name:")
groupC=list(map(str ,input().split(" ")))

print("GroupA=" ,groupA)
print("GroupB=" ,groupB)
print("GroupC=" ,groupC)

def first (groupA,groupB):
    newlist=[]
    lena=len(groupA)
    lenb=len(groupB)

    for i in range(lena):
        for j in range(lenb):
            if(groupA[i]==groupB[j]):
                newlist.append(groupA[i])
                break
    print("List of students who play both cricket and badminton")
    print(newlist)

def second (groupA, groupB):
    newlist=[]
    lena = len(groupA)
    lenb = len(groupB)


    for i in range(lena):
        for j in range(lenb):
            if(groupA[i]==groupB[j]):
                flag=1
                break

        if(flag==0):
            newlist.append(groupA[i])
        flag=0


    for i in range(lenb):
        for j in range(lena):
            if(groupB[i]==groupA[j]):
                flag=1
                break

        if(flag==0):
            newlist.append(groupB[i])
        flag=0
    print("List of students who play either cricket or badminton but not both")
    print(newlist)


def third(groupA, groupB, groupC):
    newlist=[]
    lena=len(groupA)
    lenb=len(groupB)
    lenc=len(groupC)

    for i in range(lenc):
        for j in range(lena):
            if(groupC[i]==groupA[j]):
               flag=1
               break

        for var in range(lenb):
            if(groupC[i]==groupB[var]):
                flag=1
                break

        if(flag==0):
            newlist.append(groupC[i])
        flag=0
    print("Number of students who play neither cricket nor badminton")
    print(newlist)


def fourth(groupA,groupB,groupC):
    list1=[]
    newlist = []
    lena = len(groupA)
    lenb = len(groupB)
    lenc = len(groupC)

    for i in range(lena):
        for j in range(lenc):
            if(groupA[i]==groupC[j]):
                list1.append(groupA[i])
                break

    newl=len(list1)
    for i in range(newl):
        for j in range(lenb):
            if(list1[i]==groupB[j]):
                flag=1
                break

        if(flag==0):
            newlist.append(list1[i])
        flag=0
    print("Number of students who play cricket and football but not badminton")
    print(newlist)

first(groupA,groupB)
second(groupA,groupB)
third(groupA,groupB,groupC)
fourth(groupA,groupB,groupC)