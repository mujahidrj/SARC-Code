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


void enQueue(int add_item){    
  if (rear < MAX) {        
    queue_array[rear] = add_item;        
    rear = rear + 1;       
    printf("\nAdded to queue");    
    }    
  else {        
    printf("Queue Overflow \n");    
  }
} 

int deQueue() {    
  if(front==rear)    
  { 
    printf("\n Empty");        
    return -9999;    
  }    
  else        
   return queue_array[front++];
} 
