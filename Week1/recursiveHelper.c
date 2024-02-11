struct node{
    int value;
    struct node*next;
};

struct list{
    struct node*head;
};

void listAppend(struct list*list, int value);

//* side notes:
// why do we have to use so many structs??