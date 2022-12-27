// Name : Sneha Vishwas Kamble
// Roll no. : A11

/*Second year Computer Engineering class, set A of students like Vanilla Ice-cream and set 
B of students like butterscotch ice-cream. Write C++ program to store two sets using 
linked list. compute and display-
a) Set of students who like both vanilla and butterscotch
b) Set of students who like either vanilla or butterscotch or not both
c) Number of students who like neither vanilla nor butterscotch*/

#include<iostream>
using namespace std;

struct node{
   int roll;
   struct node* next;
 
};

class info
{        node *head1=NULL,*temp1=NULL,*head2=NULL,*temp2=NULL,*head=NULL,*temp=NULL,*h1=NULL,*head3=NULL,*temp3=NULL;
        int c,i,f,j,k;
       
        public:
   
            node  *create();
            void insert();
            void allstud();
            void vanila();
            void butters();
            void uice();
            void nice();
            void notice();
            void ovanila();
            void obutters();
            void display();        
};

node *info::create(){
      node* n=new (struct node);
      cout<<"enter the roll number of student: "<<endl;
      cin>>c;
      n->roll=c;
      n->next=NULL;
      return n;
}

void info::insert(){
     node* p=create();
     if(head==NULL){
        head=p;
     }
     else{
         temp=head;
         while(temp->next!=NULL)
            { temp=temp->next;}
         temp->next=p;
     }
}



void info::allstud(){
     cout<<"enter the total number of students: "<<endl;
     cin>>k;
     head=NULL;
     for(int i=0;i<k;i++){
          insert();
          head1=head;
     
     }
     display();
     head=NULL;
}


 void info:: vanila(){
      cout<<"enter the number of students who likes vanila ice-cream: "<<endl;
      cin>>k;
      head=NULL;
      for(int i=0;i<k;i++){
          insert();
          head2=head;
     
     }
     display();
     head=NULL;
 }
 
 void info:: butters(){
      cout<<"enter the number of students who likes Butterscotch ice-cream: "<<endl;
      cin>>k;
      head=NULL;
      for(int i=0;i<k;i++){
          insert();
          head3=head;
     
     }
     display();
     head=NULL;
 }
 
 
 void info::uice(){
      node* temp1=head2;
     
      node* temp2=head3;
     
      while(temp1!=NULL){
            cout<<"\n"<<temp1->roll;
            temp1=temp1->next;
      }
      while(temp2!=NULL){
           f=0;
           node* temp3=head2;
           while(temp3!=NULL){
                if(temp3->roll==temp2->roll){
                    f++;
                }
                temp3=temp3->next;
           }
           if(f==0){
               cout<<"\n"<<temp2->roll;
           
           }
           temp2=temp2->next;
      }
 }
 
void info:: nice(){
     
      node* temp2=head3;
      while(temp2!=NULL){
           f=0;
           node* temp3=head2;
           while(temp3!=NULL){
                if(temp3->roll==temp2->roll){
                    f++;
                }
                temp3=temp3->next;
           }
           if(f!=0){
               cout<<"\n"<<temp2->roll;
           
           }
           temp2=temp2->next;
      }
 }
 
 
void info::ovanila(){

      node* temp3=head2;
     
      while(temp3!=NULL){
           f=0;
           node* temp2=head3;
           while(temp2!=NULL){
                if(temp3->roll==temp2->roll){
                    f++;
                }
                temp2=temp2->next;
           }
           if(f==0){
               cout<<"\n"<<temp3->roll;
           
           }
           temp3=temp3->next;
      }
}


void info:: obutters(){
     
      node* temp2=head3;
      while(temp2!=NULL){
           f=0;
           node* temp3=head2;
           while(temp3!=NULL){
                if(temp3->roll==temp2->roll){
                    f++;
                }
                temp3=temp3->next;
           }
           if(f==0){
               cout<<"\n"<<temp2->roll;
           
           }
           temp2=temp2->next;
      }
 }
 
 
 
 void info:: notice(){
  temp1=head1;
  temp2=head2;
  temp3=head3;
  node* t=temp2;
  while(temp2->next!=NULL){
  temp2=temp2->next;
}
while(temp3!=NULL){
temp2->next=temp3;
temp3=temp3->next;
}

while(temp1!=NULL){
f=0;
temp=t;
while(temp!=NULL){
if(temp1->roll==temp->roll){
f=1;
}
temp=temp->next;
}
if(f==0){
cout<<temp1->roll<<endl;
}
temp1=temp1->next;
}
temp2=head2;
while(temp2->next!=head3){
  temp2=temp2->next;
}
temp2->next=NULL;

 }





void info::display()
   {  temp=head;
      while(temp!=NULL)
      { cout<<"\n"<<temp->roll;
        temp=temp->next;
      }
   }

int main()
  { info s;
  int i;
   
          char ch;
       do{
          cout<<"\n OPERATIONS";
          cout<<"\n  1. To enter all students rollno  ";
          cout<<"\n  2. To enter the rollno of student who like vanila";
          cout<<"\n  3. To enter the rollno of student who like butterscotch";
          cout<<"\n  4. To display the rollno of student who like vanila or butterscotch";
          cout<<"\n  5. To display the rollno of student who like only vanila";
          cout<<"\n  6. To display the rollno of student who like only butterscotch";
          cout<<"\n  7. To display the rollno of student who like both vanila and butterscotch ";
          cout<<"\n  8. To display the rollno of student who neither like vanila nor butterscotch";
       
           cout<<"\n enter your choice:  "<<endl;
          cin>>i;
         switch(i)
         {        case 1:   s.allstud();
                                  break;
         
                 case 2:   s.vanila();
                                  break;
                  case 3: s.butters();
                                  break;
                  case 4:   s.uice();
                                  break;
                  case 5:   s.ovanila();
                                  break;
                  case 6:   s. obutters();
                                  break;
                  case 7:   s.nice();
                                 
 break;
                  case 8:   s.notice();
                                 break;      
               
               
                                       
                  default:  cout<<"\n unknown choice";
          }
            cout<<"\n do you want to continue enter y/Y \n";
            cin>>ch;
       
       }while(ch=='y'||ch=='Y');  

return 0;
}

