#include<iostream>
using namespace std;
/*...................................Linked List..........................................*/
struct node

{

    int info;

    struct node *next;

}*start;



/*

 * Class Declaration

 */

class single_llist

{

    public:

        node* create_node(int);

        void insert_begin();

        void insert_pos();

        void insert_last();

        void delete_pos();

        void sort();

        void search();

        void update();

        void reverse();

        void display();

        single_llist()

        {

            start = NULL;

        }

};
int ll(){
  int choice, nodes, element, position, i;

single_llist sl;

start = NULL;

while (1)

{

    cout<<endl<<"---------------------------------"<<endl;

    cout<<endl<<"Operations on singly linked list"<<endl;

    cout<<endl<<"---------------------------------"<<endl;

    cout<<"1.Insert Node at beginning"<<endl;

    cout<<"2.Insert node at last"<<endl;

    cout<<"3.Insert node at position"<<endl;

    cout<<"4.Sort Link List"<<endl;

    cout<<"5.Delete a Particular Node"<<endl;

    cout<<"6.Update Node Value"<<endl;

    cout<<"7.Search Element"<<endl;

    cout<<"8.Display Linked List"<<endl;

    cout<<"9.Reverse Linked List "<<endl;

    cout<<"10.Exit "<<endl;

    cout<<"Enter your choice : ";

    cin>>choice;

    switch(choice)

    {

    case 1:

        cout<<"Inserting Node at Beginning: "<<endl;

        sl.insert_begin();

        cout<<endl;

        break;

    case 2:

        cout<<"Inserting Node at Last: "<<endl;

        sl.insert_last();

        cout<<endl;

        break;

    case 3:

        cout<<"Inserting Node at a given position:"<<endl;

        sl.insert_pos();

        cout<<endl;

        break;

    case 4:

        cout<<"Sort Link List: "<<endl;

        sl.sort();

        cout<<endl;

        break;

    case 5:

        cout<<"Delete a particular node: "<<endl;

        sl.delete_pos();

        break;

    case 6:

        cout<<"Update Node Value:"<<endl;

        sl.update();

        cout<<endl;

        break;

    case 7:

        cout<<"Search element in Link List: "<<endl;

        sl.search();

        cout<<endl;

        break;

    case 8:

        cout<<"Display elements of link list"<<endl;

        sl.display();

        cout<<endl;

        break;

    case 9:

        cout<<"Reverse elements of Link List"<<endl;

        sl.reverse();

        cout<<endl;

        break;

    case 10:

        cout<<"Exiting..."<<endl;

        exit(1);

        break;

    default:

        cout<<"Wrong choice"<<endl;

    }

}
}
/*

 * Creating Node

 */

node *single_llist::create_node(int value)

{

    struct node *temp, *s;

    temp = new(struct node);

    if (temp == NULL)

    {

        cout<<"Memory not allocated "<<endl;

        return 0;

    }

    else

    {

        temp->info = value;

        temp->next = NULL;

        return temp;

    }

}
/*

 * Inserting element in beginning

 */

void single_llist::insert_begin()

{

    int value;

    cout<<"Enter the value to be inserted: ";

    cin>>value;

    struct node *temp, *p;

    temp = create_node(value);

    if (start == NULL)

    {

        start = temp;

        start->next = NULL;

    }

    else

    {

        p = start;

        start = temp;

        start->next = p;

    }

    cout<<"Element Inserted at beginning"<<endl;

}
/*

 * Inserting Node at last

 */

void single_llist::insert_last()

{

    int value;

    cout<<"Enter the value to be inserted: ";

    cin>>value;

    struct node *temp, *s;

    temp = create_node(value);

    s = start;

    while (s->next != NULL)

    {

        s = s->next;

    }

    temp->next = NULL;

    s->next = temp;

    cout<<"Element Inserted at last"<<endl;

}








/*................................Normal Queue.......................*/


int queue[100], n = 100, front = - 1, rear = - 1;
void Insert2() {
   int val;
   if (rear == n - 1)
      cout<<"Queue Overflow"<<endl;
   else {
      if (front == - 1)
      front = 0;
      cout<<"Insert the element in queue : "<<endl;
      cin>>val;
      rear++;
      queue[rear] = val;
   }
}
void Delete2() {
   if (front == - 1 || front > rear) {
      cout<<"Queue Underflow ";
   return ;
   } else {
      cout<<"Element deleted from queue is : "<< queue[front] <<endl;
      front++;;
   }
}
void Display2() {
   if (front == - 1)
   cout<<"Queue is empty"<<endl;
   else {
      cout<<"Queue elements are : ";
      for (int i = front; i <= rear; i++)
         cout<<queue[i]<<" ";
      cout<<endl;
   }
}
int norqueue(){
  int ch;
   cout<<"1) Insert element to queue"<<endl;
   cout<<"2) Delete element from queue"<<endl;
   cout<<"3) Display all the elements of queue"<<endl;
   cout<<"4) Exit"<<endl;
do {
   cout<<"Enter your choice : "<<endl;
   cin>>ch;
   switch (ch) {
      case 1: Insert2();
         break;
      case 2: Delete2();
         break;
      case 3: Display2();
         break;
      case 4: cout<<"Exit"<<endl;
         break;
      default: cout<<"Invalid choice"<<endl;
   }
} while(ch!=4);
   return 0;
}





/*.............................Normal Stack..........................*/



int stack[100], top=-1;
void push(int val) {
   if(top>=n-1)
      cout<<"Stack Overflow"<<endl;
   else {
      top++;
      stack[top]=val;
   }
}
void pop() {
   if(top<=-1)
      cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The popped element is "<< stack[top] <<endl;
      top--;
   }
}
void display() {
   if(top>=0) {
      cout<<"Stack elements are:";
      for(int i=top; i>=0; i--)
         cout<<stack[i]<<" ";
         cout<<endl;
   } else
      cout<<"Stack is empty";
}
int norstack(){
  int ch, val;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=4);
      return 0;
}







/*..............................................main.................................*/


int main()
           {
             int choice;
             int option=-1;
             while(option)
               {
                 printf("1.Normal Stack\n2.Normal Queue  \n15.Exit\n");
                 printf("Enter your choice :- ");
                 scanf("%d",&choice);
                 switch(choice)
                 {
                   case 1: norstack() ;
                           break;
                   case 2: norqueue();
                           break;
                 }
                 fflush(stdin);
                 printf("To continue press 1\nTo exit press 0.\n -  ");



                 scanf("%d",&option);
               }

               return 0;
           }
