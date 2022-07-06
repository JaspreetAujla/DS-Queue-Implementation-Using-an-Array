#include <iostream>
using namespace std;

#define SIZE 10000
int M[SIZE];
int front = -1;
int rear = -1;
bool isempty()
{
 if(front == -1 && rear == -1)
 return true;
 else
 return false;
}

void enqueue ( int value )
{
 if (rear == SIZE-1)
  cout<<"Queue is full \n";
 else
 {
  if( front == -1)
   front = 0;
  rear++;
  M[rear] = value;
 }
}

void dequeue ( )
{
 if( isempty() )
  cout<<"\nQueue is empty\n";
 else
 if( front == rear )
  front = rear = -1;
 else
  front++;
}

void show( )
{
 if( isempty())
  cout<<"Queue is empty\n";
 else
  cout<<"\nelement at front is:\n"<<M[front]<<"\n";
}


void display()
{
 if(isempty())
  cout<<"\nQueue is empty\n";
 else
 {
  for( int i=front ; i<= rear ; i++)
   cout<<M[i]<<" ";
  cout<<"\n";
 }
}

int main()
{
 cout<<"\nInserting elements in queue:\n";
 enqueue(34);
 display();
 enqueue(52);
 display();
 enqueue(47);
 display();
 enqueue(80);
 display();
 enqueue(82);
 display();
 enqueue(90);
 display();
 show();

 cout<<"\nRemoving elements from queue:\n";
 
 dequeue();
 display();
 dequeue();
 display();
 dequeue();
 display();
 dequeue();
 display();
 dequeue();
 display();
 return 0;
}