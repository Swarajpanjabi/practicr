// Name : Sneha Vishwas Kamble
// Roll no. : A11

/*
In any language program mostly syntax error occurs due to unbalancing delimiter such as 
(),{},[]. Write C++ program using stack to check whether given expression is well 
parenthesized or not
*/


#include<iostream>
#define max 20
using namespace std;

class stack{
      private :
      char a[max];
      int top;
      public:
          stack(){
             top=-1;
          }
          void push(char ch);
          char pop();
          bool isEmpty();
          void display();
          bool isFull();
          void checkParenthesis();
};

void stack:: push(char ch){

     top++;
     a[top]=ch;
 
}

char stack:: pop(){
     if(!isEmpty()){
          char ch=a[top];
          top--;
          return ch;
     
     }
     else{
         return '\0';
     }
}


bool stack:: isEmpty(){
      if(top==-1){
           return 1;
      }
      else{
     
          return 0;
      }

}

bool stack:: isFull(){
      if(top==max-1){
        return 1;
      }
      else{
          return 0;
      }
}

void stack:: display(){
       for(int i=top;i>-1;i--){
           cout<<a[i]<<" ";
       
       }
       cout<<endl;
}


void stack:: checkParenthesis(){
       char s[50];
       
       cout<<"\nEnter # as a deliminator after expression(At the end)\n";
       cout<<"enter the expression: "<<endl;
       cin.getline(s,max,'#');
       char ch;
       bool flag=0;
       
       for(int i=0;s[i]!='\0';i++){
           if(s[i]=='(' || s[i]=='{' ||s[i]=='['){
                 push(s[i]);          
           }
           else if(s[i]==')' || s[i]=='}' ||s[i]==']'){
                  ch=pop();
                  if((s[i]==')' && ch!='(') ||(s[i]=='}' && ch!='{') || (s[i]==']' && ch!='[')){
                            flag=1;
                            cout<<"\nNot parenthesized At "<<i<<" = "<<s[i]<<endl;;
                            break;
                 }
           }
       }
       if(isEmpty() && flag==0){
              cout<<"Expression is well Parenthesized"<<endl;
       }
       else{
       
              cout<<"Expression is not well parenthesized"<<endl;
       }
       


}


int main(){


    int k=1;
    while(k==1){
        stack s;
        s.checkParenthesis();
        cout<<"Do you want to continue  0/1:  "<<endl;
        cin>>k;
    }
    return 0;
   
       

}


   