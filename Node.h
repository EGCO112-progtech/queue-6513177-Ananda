//
//  linkedlist.h
//  LinkedList_simple
//
//  Created by Mingmanas Sivaraksa on 5/2/2566 BE.
//
#ifndef Node_h
#define Node_h


typedef struct node{
   struct node* next;
   int order_number;
   int quan;
}order;

typedef struct node Node;
typedef struct node* NodePtr;


// void enqueue(NodePtr * head, NodePtr* tail, int x){
//   Node* new_node=(NodePtr) malloc(sizeof(Node));
//   new_node->data = x;
//   new_node->next = NULL;
//   if(new_node){ 

//     if (*head == NULL)
//     {
//       *head = new_node;
//       *tail = new_node;
//     }

//     (*tail)->next = new_node;
//     (*tail) = new_node;
//     return;
//   }
// }


// int dequeue(NodePtr* head, NodePtr* tail){
//   NodePtr t=*head;
//    if(t){
//     int value= t->data;
//     /* Finish dequeue*/
//     *head = (*head)->next;
//     if (!(*head)) *tail = NULL;
//     free(t);
//     return value;
//    }
//    printf("Empty queue");
//    return 0;
// }

#endif
