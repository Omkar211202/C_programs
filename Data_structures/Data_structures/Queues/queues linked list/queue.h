//programmer:Omkar Kathi
//Queues

struct node{
int data;
struct node*next;
};

typedef struct node node;

struct queue
{
node* front;
node* back;
};

typedef struct queue queue;

int is_queue_empty(queue a);
queue enqueue(queue a,int c);
int dequeue(queue *a);
void initialise(queue *a);
void printq(queue a);


