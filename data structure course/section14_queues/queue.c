#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    void ** array ;
    int  front   ; 
    int  reare ; 
    int size ; 
    int counter ; 

}queue_t ;
void  init_queue(queue_t  * queue ) ; 
void enqueue(queue_t  * queue , void * element  ); 
void dequeue(queue_t  * queue , void ** element  );

int main () 
{

 queue_t queue ;
 queue.size = 3 ; 
 queue.counter = 0 ; 
 init_queue(&queue ) ;
 int x  =  8 ; 
  int * t ;
enqueue(&queue , &x) ; 
enqueue(&queue , &x) ; 
enqueue(&queue , &x) ; 
dequeue(&queue , &t) ;
dequeue(&queue , &t) ; 
dequeue(&queue , &t) ;
dequeue(&queue , &t) ;
enqueue(&queue , &x) ; 
enqueue(&queue , &x) ;   
enqueue(&queue , &x) ; 
enqueue(&queue , &x) ; 

for (int i = 0 ; i <queue.size; i++ )
{
    printf("%d ", *((int * )queue.array[i]));
}




}
void init_queue(queue_t  * queue ) 
{
    if (queue) 
    {
        queue->array = (void **) malloc ((queue->size ) * sizeof(void *)); 
        queue->front = -1 ;
        queue->reare = -1 ;
    }

}
void enqueue(queue_t  * queue , void * element  )
{
    if (queue->counter == queue->size )
    {
        printf("queue is full");
    }
    else if(queue->reare == -1 && queue->front == -1) {
        queue->reare++; 
        queue->front++;
        queue->array[queue->reare] = element ; 
        queue->counter++;

    }
    else
    {
        if (queue->reare == (queue->size  ))
        {
            queue->reare = 0 ; 
        }
        queue->array[queue->reare] = element ; 
        queue->reare++;  
        queue->counter++;
    }
}
void dequeue(queue_t  * queue , void ** element  )
{
    if (queue->counter == 0 )
    {
        printf("queue is empty");
    }
    else
    {
        if (queue->front == queue->size  )
            queue->front = 0 ; 
        *element =  queue->array[queue->front] ; 
        queue->front++;  
        queue->counter--;
    }
}
