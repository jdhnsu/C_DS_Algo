#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{

    //sq_list* L = init_sq_list();
    //sq_list* N = init_sq_list();
    //for (int i = 1; i <= 3; i++)
    //{
    //    N->data[i - 1] = i+10;
    //}
    //for (int i = 1; i <= 10; i++)
    //{
    //    L->data[i - 1] = i;
    //}
    //N->length = 3;
    //L->length = 10;
    //print_sq_list(N);
    //print_sq_list(L);
    //mer_ge_sq_list(L,N);
    //print_sq_list(L);
    //printf("L->length:[%d]\n", L->length);
    /*sq_list* L = init_sq_list();
    sq_list* N = init_sq_list();
    for (int i = 1; i <= 3; i++)
    {
        N->data[i - 1] = i+10;
    }
    for (int i = 1; i <= 10; i++)
    {
        L->data[i - 1] = i;
    }
    N->length = 3;
    L->length = 10;
    print_sq_list(N);
    print_sq_list(L);                                                      
    mer_ge_sq_list(L,N);
    print_sq_list(L);
    printf("L->length:[%d]\n", L->length);*/

  
   /* array_stack* stack = init_array_stack();
    push_array_stack(stack, 1);
    push_array_stack(stack, 2);
    push_array_stack(stack, 3);*/



   /* array_queue *q = init_array_queue();
    push_array_queue(q,0);
    push_array_queue(q,1);
    push_array_queue(q,2);
    print_array_queue(q);
    printf("---------------------\n");
    pop_array_queue(q);
    print_array_queue(q);
    printf("----------\n");
    push_array_queue(q, 666);
    print_array_queue(q);*/

//    node* q1 = init_node(1);
//    node* q2 = init_node(2);
//    node* q3 = init_node(3);
//    node* q4 = init_node(4);
//    q1->next = q2;
//    q2->next = q3;
//    q3->next = q4;
//    //address_node *n =  find_node(q1, 3);
//    // printf("%d\n %p\n", n->n,n->p
//    //int e = get_node_list(q1);
//    node* q2_3 = init_node(0);
//    insert_node(q2, q2_3);
//    print_node_list(q1);
//    delete_node(q2);
//    print_node_list(q1);
 
/*
stack_linked* head = init_stack_linked();
    push_stack_linked(head, 1);
    push_stack_linked(head, 2);
    push_stack_linked(head, 3);
    print_linked(head);
    pop_stack_linked(head);
    print_linked(head);
*/

  // queue_test();
  array_queue *q = init_array_queue();
  push_array_queue(q, 1);
  push_array_queue(q, 2);
  push_array_queue(q, 3);
  print_array_queue(q);
  printf("----------\n");
  pop_array_queue(q);
  print_array_queue(q);
  printf("----------\n");
  push_array_queue(q, 666);
  print_array_queue(q);
    printf("Hello World!\n");
    system("pause");
    return 0;
}
