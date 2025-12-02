#include <stdio.h>

#define MAX_SIZE    10

typedef struct {
    int items[MAX_SIZE];
    int front;
    int rear;
}queue_t;

void queue_init(queue_t *q) {
    q->front = q->rear = -1;
}

int is_queue_empty(queue_t *q) {
    return ((q->front == -1)); 
}

int is_queue_full(queue_t *q) {
    return (q->rear == MAX_SIZE -1);
}

int queue_enqueue(queue_t *q, int item) {
    if (is_queue_full(q)) {
        return -1;
    }

    /** Check is it the first element */

    if (is_queue_empty(q)) {
        q->front = 0;
    }

    q->items[++(q->rear)] = item;

    return 0;
}
int queue_dequeue(queue_t *q, int *out) {
    if (is_queue_empty(q)) {
        return -1; //under flow
    }

    *out = q->items[(q->front)];

    if (q->front == q->rear) {
        q->front = q->rear = -1;
    } else {
        (q->front)++;
    }

    return 0;
}

int queue_peek(queue_t *q, int *out) {
    if (is_queue_empty(q)) {
        return -1;
    }

    *out = q->items[q->front];

    return 0;
}

int queue_print(queue_t *q) {
    if (is_queue_empty(q)) {
        printf("queue is empty\n");
        return -1;
    }

    for (int i = q->front; i <= q->rear; i++) {
        printf("%d\n", q->items[i]);
    }

    return 0;
}

int queue_size(queue_t *q) {
    if (is_queue_empty(q))
        return 0;

    return q->rear - q->front + 1;
}

/* ---- Test Driver ---- */
int main(void) {
    queue_t q;
    int val;

    queue_init(&q);

    queue_dequeue(&q, &val); // test empty

    queue_enqueue(&q, 1);
    queue_enqueue(&q, 2);
    queue_enqueue(&q, 3);
    queue_enqueue(&q, 4);
    queue_enqueue(&q, 5);

    if (queue_enqueue(&q, 6) == -1)
        printf("Queue overflow detected\n");

    queue_print(&q);

    if (queue_dequeue(&q, &val) == 0)
        printf("Dequeued = %d\n", val);
    if (queue_dequeue(&q, &val) == 0)
        printf("Dequeued = %d\n", val);
    if (queue_dequeue(&q, &val) == 0)
        printf("Dequeued = %d\n", val);
    if (queue_dequeue(&q, &val) == 0)
        printf("Dequeued = %d\n", val);
    if (queue_dequeue(&q, &val) == 0)
        printf("Dequeued = %d\n", val);
    if (queue_dequeue(&q, &val) == 0)
        printf("Dequeued = %d\n", val);
    printf("-----\n");
    queue_print(&q);

    queue_enqueue(&q, 5);

    printf("Front element = ");
    if (queue_peek(&q, &val) == 0)
        printf("%d\n", val);

    printf("Queue size = %d\n", queue_size(&q));

    return 0;
}