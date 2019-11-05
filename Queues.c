/** C Program to Implement an array based linear Queue*/

typedef struct queue {
  int front, rear, size;
  int *array;
} queue;

queue *createQueue(int size)
{
  queue *q = malloc(sizeof(queue));
  q->front = 0;
  q->rear = 0;
  q->size = size;
  q->array = malloc(sizeof(int)*size);

  return q;
}

void enQueue(queue* q, int add_item){    
  if (q->rear < MAX) {        
    q->array[q->rear] = add_item;        
    q->rear = q->rear + 1;       
    printf("\nAdded to queue");    
    }    
  else {        
    printf("Queue Overflow \n");    
  }
} 

int deQueue(queue* q) {    
  if(q->front == q->rear)    
  { 
    printf("\n Empty");        
    return -9999;    
  }    
  else        
   return q->array[q->front++];
} 
