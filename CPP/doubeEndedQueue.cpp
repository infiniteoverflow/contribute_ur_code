#include<iostream>

using namespace std;
#define SIZE 5;

class dequeue{
    int arr[10];
    int front,rear;
    public:
    dequeue();
    void addAtBeg(int);
    void addAtEnd(int);
    void delFrFront();
    void delFrRear();
    void display();
};

dequeue::dequeue(){
    front = -1;
    rear = -1;
}

void dequeue::addAtEnd(int item){
    if(rear >= SIZE-1){
        cout<<"\n Insertion Not Possible,OVERFLOW";
    }else{
        if(front == -1){
            front++;
            rear++;
        }else{
            rear +=1;
        }
        a[rear] = item;
        cout<<"\nInserted item is:"<<a[rear];
    }
}

void dequeue::addAtBeg(int item){
    if(front == -1){
        front = 0;
        a[++rear] = item;
        cout<<"\nItem inserted is:"<<item;
    }else if(front!= 0){
        a[--front] = item;
        cout<<"\n Inserted item is:"<<item;
    }else{
        cout <<"Insertion not possible,OVERFLOW"<<endl;
    }
}


void 