#include <stdio.h> 
#include<stdlib.h>
   
//Represent a node of the singly linked list  
struct node{  
    int data;  
    struct node *next;  
};      
   
//Represent the head and tail of the singly linked list  
struct node *head, *tail = NULL;  
   
//addNode() will add a new node to the list  
void addNode(int data) {  
    //Create a new node  
    struct node *newNode = (struct node * )malloc( sizeof(struct node));  
    newNode->data = data;  
    newNode->next = NULL;  
      
    //Checks if the list is empty  
    if(head == NULL) {  
        //If list is empty, both head and tail will point to new node  
        head = newNode;  
        tail = newNode;  
    }  
    else {  
        //newNode will be added after tail such that tail's next will point to newNode  
        tail->next = newNode;  
        //newNode will become new tail of the list  
        tail = newNode;  
    }  
}  
   
    
   

void display() {  
      
    struct node *current = head;  
    if(head == NULL) {  
        printf("List is empty \n");  
        return;  
    }  
    while(current != NULL) {  
          
        printf("%d ", current->data);  
        current = current->next;  
    }  
    printf("\n");  
} 
void insertanypos(int val,int pos){
    struct node *current = head;  
    if(head == NULL) {  
        printf("List is empty \n");  
        return;  
    }  
    for(int i=0;i<pos-1;i++){
        current = current->next;
    }
    current->data=val;
}
      
int main()  
{  
    int n,x,p,data;
    scanf("%d%d%d",&n,&x,&p);
    
   for(int i=0;i<n;i++)
   {
       scanf("%d",&data);
       addNode(data);
   }
    
    //display(); 
    insertanypos(x,p);
    display();
          
    return 0;  
}
