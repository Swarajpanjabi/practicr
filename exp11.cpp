// Name : Sneha Vishwas Kamble
// Roll no. : A11

/*
Queues are frequently used in computer programming, and a typical example is the 
creation of a job queue by an operating system. If the operating system does not use 
priorities, then the jobs are processed in the order they enter the system. Write C++ 
program for simulating job queue. Write functions to add job and delete job from queue.
*/



#include <iostream>
#define MAX 10
using namespace std;
struct queue
{       int data[MAX];
int front,rear;
};
class Queue
{    struct queue q;
   public:
      Queue(){q.front=q.rear=-1;}
      int isempty();
      int isfull();
      void enqueue(int);
      int delqueue();
      void display();
};
int Queue::isempty()
{
return(q.front==q.rear)?1:0;
}
int Queue::isfull()
{    return(q.rear==MAX-1)?1:0;}
void Queue::enqueue(int x)
{q.data[++q.rear]=x;}
int Queue::delqueue()
{return q.data[++q.front];}
void Queue::display()
{   int i;
    cout<<"\n";
    for(i=q.front+1;i<=q.rear;i++)
   cout<<q.data[i]<<" ";
}
int main()
{      Queue obj;
int ch,x;
do{    cout<<"\n 1. insert job\n 2.delete job\n 3.display\n 4.Exit\n Enter your choice:";
     cin>>ch;
    if(ch==1){
         if(!obj.isfull())
    {   cout<<"\n Enter data:";
     cin>>x;
    obj.enqueue(x);
     }
        else
    cout<< "Queue is overflow";
       
    }
    else if(ch==2){
   
       if(!obj.isempty())
      cout<<"\n Deleted Element="<<obj.delqueue();
   else
{   cout<<"\n Queue is underflow";  }
     cout<<"\nremaining jobs :";
     obj.display();
   
    }
    else if(ch==3){
        if(!obj.isempty())
      {  cout<<"\n Queue contains:";
     obj.display();
      }
      else
       cout<<"\n Queue is empty";
   
    }
    else if(ch==4){
               cout<<"Thank You!"<<endl;
               break;    
   
    }
     }while(ch!=4);
return 0;
}


