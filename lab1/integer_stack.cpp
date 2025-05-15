#include<iostream>
using namespace std;

int msize = 5;
int stack[5];
int tos = -1;

bool isFull(){
    if(tos == msize)
     {
         return true;
     } 
    else
    return false;
}

bool isEmpty(){
    if(tos == -1)
    {
        return tos;
    }
    else
    return false;
}
void push(){
    if(!isFull()){
        int data;
        cout << "Enter input to be pushed" << endl;
        cin >> data;
         tos++;
        stack[tos] = data;
       
        cout << "Pushed " << data << " at tos" << endl;
    }
    else{
        cout<< "Stack Overflow!!" << endl;
    }
}

void pop(){
    if(!isEmpty()){
        int data;
        data = stack[tos];
        tos--;
        cout << "Popped " << data << " from TOS" << endl;
    }
    else{
        cout << "Stack Underflow!!"<< endl;
    }
}
void peek(){
    if(!isEmpty()){
    cout << "The data at TOS is " << stack[tos] << endl;
    }
    else
    {
    cout << "The stack is empty" << endl;
    }
}
int main()
{
    int choice;
    while(1){
        cout << "Enter your choice: " << endl;
        cout << "Enter 1 to push" << endl;
        cout << "Enter 2 to pop" << endl;
        cout << "Enter 3 to peek" << endl;
        cout << "Enter 4 to exit" << endl;
        cin >> choice;
        
        switch(choice){
        
        case 1: 
        push();
        break;
        case 2:
        pop();
        break;
        case 3:
        peek();
        break;
        case 4:
        cout << "Exited" << endl;
        return 1;
        break;
        default:
        cout << "Program terminated" << endl;
        return 1;
        break;
    }
 }
}
