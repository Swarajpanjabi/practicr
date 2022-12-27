// Name : Sneha Vishwas Kamble
// Roll no. : A11

/*
Department of Computer Engineering has student's club named 'Pinnacle Club'. Students
of second, third and final year of department can be granted membership on request.
Similarly one may cancel the membership of club. First node is reserved for president of
club and last node is reserved for secretary of club. Write C++ program to maintain club
member‘s information using singly linked list. Store student PRN and Name. Write
functions to:
a) Add and delete the members as well as president or even secretary.
b) Compute total number of members of club
c) Display members
d) Two linked lists exists for two divisions. Concatenate two lists.
"""
*/
#include<iostream>
#include<string.h>
using namespace std;

class node
{
   public:
    string name;
    int PRN;
    node* next;
   
    node(int val,string Name){
          PRN=val;
          name=Name;
          next=NULL;
   
    }
   
};

node*  Insert_beg(node* &head, int val,string name){

        node* n=new node(val,name);
        if(head==NULL){
            head=n;
            return head;    
        }
        else{
           n->next=head;
           head=n;
           return head;
             
        }

}

node*  Insert_At(node* &head, int val,string name,int k){

        node* n=new node(val,name);
        if(head==NULL){
            head=n;
            return head;    
        }
        else if(head->next==NULL){
            head->next=n;
            return head;
        }
        else{
           node * temp=head;
           int s=1;
           while(s!=k){
                s++;
                temp=temp->next;    
           }
           node* t=temp->next;
           temp->next=n;
           n->next=t;
           return head;
             
        }

}

node*  Insert_end(node* &head, int val,string name){

        node* n=new node(val,name);
        if(head==NULL){
            head=n;
            return head;    
        }
        else{
           node * temp=head;
           while(temp->next!=NULL){
                temp=temp->next;    
           }
           temp->next=n;
           return head;
             
        }

}

node* rev(node* &head){
node* temp=head;
node* prev=NULL;
node* nxt=NULL;
while(temp!=NULL){
nxt=temp->next;
temp->next=prev;
prev=temp;
temp=nxt;
}
return prev;
}

void display(node* head){
     node* temp=head;
     while(temp!=NULL){
          cout<<temp->name<<"  "<<temp->PRN<<endl;
          temp=temp->next;
     }

}

void delete_beg(node* &head ){
    if(head==NULL){
        cout<<"There is no president assigned!"<<endl;
    }
    else{
        node* temp=head;
        head=head->next;
    }

}

void delete_At(node* &head , int k){
    node* temp=head;
    int s=1;
    while(k!=s){
    temp=temp->next;
    s++;
}
   
    temp=temp->next;
   

}

void delete_end(node* &head ){
    if(head==NULL ){
        cout<<"Club id Empty!"<<endl;
    }
    else if(head->next==NULL){
        head=NULL;
    }
    else{
        node* temp=head;
        while(temp->next->next!=NULL){
          temp=temp->next;
          cout<<"Club dont have any secretory!"<<endl;
   
    }
   temp->next=NULL;
   cout<<"New Secretory is assigned!"<<endl;
    }

}

int count(node* &head ){
    node* temp=head;
    int cnt=1;
    if(head==NULL){
        return 0;
}
    while(temp->next!=NULL){
    temp=temp->next;
    cnt++;
   
}
return cnt;

}

 

class List_A{
    public:
    node* head1;
    node* head=NULL;
    void operations(){
        while(true){
        cout<<"\n1. Add   \n2. Delete  \n3. Member's Count \n4. Display \n5. Reverse the List \n6. Prev Menu "<<endl;
        int ch;
        cout<<"enter your choice : "<<endl;
        cin>>ch;
        if(ch==1){
             while(true){
                cout<<"\n 1. Add President \n 2. Add Member \n 3. Add Secretary \n 4. Exit";
                int  cho;
                cout<<"\n enter your choice : "<<endl;
                cin>>cho;
                if(cho==1){
                   int val;
                   string name;
                   cout<<"enter the prn number: "<<endl;
                   cin>>val;
                   cout<<"enter the name: "<<endl;
                   cin>>name;
                   Insert_beg(head,val, name);
                 
                }
                else if(cho==2){
                   int val;
                   int pos;
                   string name;
                   cout<<"enter the prn number: "<<endl;
                   cin>>val;
                   cout<<"enter the name: "<<endl;
                   cin>>name;
                   cout<<"enter the position of member: "<<endl;
                   cin>>pos;
                   Insert_At(head,  val, name, pos);
                }
                else if (cho==3){
                   int val;
                   string name;
                   cout<<"enter the prn number: "<<endl;
                   cin>>val;
                   cout<<"enter the name: "<<endl;
                   cin>>name;
                   Insert_end(head, val,name);
                 
                }
                else{
                    break;
                }
             }
        }
        else if(ch==2){
           while(true){
             cout<<"\n 1. remove President \n 2. remove Member \n 3. remove Secretary \n 4. Exit"<<endl;;
            int cho;
            cout<<"enter your choice:  "<<endl;
            cin>>cho;
            if(cho==1){
                delete_beg(head);
                cout<<"New president is assigned!"<<endl;
               
            }
            else if(cho==2){
            cout<<"Enter the pos of member: "<<endl;
            int pos;
            cin>>pos;
            delete_At(head,pos);
            cout<<"Member removed sucessfully !"<<endl;
           
}
else if(cho==3){
delete_end(head);

   
}
            else if(cho==4){
                break;
            }
            else{
            cout<<"Invalid choice "<<endl;
}
           
               
            }
        }
        else if(ch==3){
        cout<<"Total number of students in club are: "<<count(head)<<endl;
}
        else if(ch==4){
       
           display(head);
        }
        else if(ch==5){
        cout<<"reversed Linked List is: "<<endl;
        display(rev(head));
       
}
        else if(ch==6){
       
           break;
        }
        else{
        cout<<"invalid choice!"<<endl;
}
       
       
        }
   
    }
   
   

};

class List_B{
public:
   node* head=NULL;
        void operation(){
        while(true){
        cout<<"\n1. Add   \n2. Delete  \n3. Member's Count \n4. Display \n5. Reverse the List \n6. Prev Menu "<<endl;
        int ch;
        cout<<"enter your choice : "<<endl;
        cin>>ch;
        if(ch==1){
             while(true){
                cout<<"\n 1. Add President \n 2. Add Member \n 3. Add Secretary \n 4. Exit";
                int  cho;
                cout<<"\n enter your choice : "<<endl;
                cin>>cho;
                if(cho==1){
                   int val;
                   string name;
                   cout<<"enter the prn number: "<<endl;
                   cin>>val;
                   cout<<"enter the name: "<<endl;
                   cin>>name;
                   Insert_beg(head,val, name);
                 
                }
                else if(cho==2){
                   int val;
                   int pos;
                   string name;
                   cout<<"enter the prn number: "<<endl;
                   cin>>val;
                   cout<<"enter the name: "<<endl;
                   cin>>name;
                   cout<<"enter the position of member: "<<endl;
                   cin>>pos;
                   Insert_At(head,  val, name, pos);
                }
                else if (cho==3){
                   int val;
                   string name;
                   cout<<"enter the prn number: "<<endl;
                   cin>>val;
                   cout<<"enter the name: "<<endl;
                   cin>>name;
                   Insert_end(head, val,name);
                 
                }
                else{
                    break;
                }
             }
        }
        else if(ch==2){
           while(true){
             cout<<"\n 1. remove President \n 2. remove Member \n 3. remove Secretary \n 4. Exit"<<endl;;
            int cho;
            cout<<"enter your choice:  "<<endl;
            cin>>cho;
            if(cho==1){
                delete_beg(head);
                cout<<"New president is assigned!"<<endl;
               
            }
            else if(cho==2){
            cout<<"Enter the pos of member: "<<endl;
            int pos;
            cin>>pos;
            delete_At(head,pos);
            cout<<"Member removed sucessfully !"<<endl;
           
}
else if(cho==3){
delete_end(head);
cout<<"New Secretory is assigned!"<<endl;
   
}
            else if(cho==4){
                break;
            }
            else{
            cout<<"Invalid choice "<<endl;
}
           
               
            }
        }
        else if(ch==3){
        cout<<"Total number of students in club are: "<<count(head)<<endl;
}
        else if(ch==4){
       
           display(head);
        }
        else if(ch==5){
        cout<<"reversed Linked List is: "<<endl;
        display(rev(head));
}
        else if(ch==6){
       
           break;
        }
        else{
        cout<<"invalid choice!"<<endl;
}
        }
    }
};

void concatenate(List_A a,List_B b){
node* ptr1=a.head;
node* ptr2=b.head;
while(ptr1!=NULL){
cout<<ptr1->name<<" "<<ptr1->PRN<<endl;
ptr1=ptr1->next;
}
while(ptr2!=NULL){
cout<<ptr2->name<<" "<<ptr2->PRN<<endl;
ptr2=ptr2->next;
}
}

int main(){
List_A a ;
List_B b;

    while(true){
         cout<<"\n 1 List A";
         cout<<"\n 2 List B";
         cout<<"\n 3 Concatenate";
         cout<<"\n 4 Exit";
         cout<<"\n enter your choice: "<<endl;
         int ch;
         cin>>ch;
         if(ch==1){
             
            a.operations();
              //break;
             
         }
         else if(ch==2){
         
          b.operation();
}
else if(ch==3){
concatenate(a,b);
}
         else if(ch==4){
          cout<<"Thank You!"<<endl;
          break;
}
    }
   

}