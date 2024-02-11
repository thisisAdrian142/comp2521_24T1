struct node{
    int value;
    struct node*next;
};

struct list{
    struct node*head;
};

void listAppend(struct list*list, int value) {
    list->head=doListAppend(list->head,value);
}

struct node*doListAppend(struct node*node, int value){
    if(node==NULL){
        return newNode(value);
    }else{
        node->next=doListAppend(node->next, value);
        return node;
    }
} 

//* base case:
// if the passed "node" is NULL (at the end of the list)
// -> creates a new node by using "newNode" -> return the node.

//* recursive case:
// if the passed "node" is not NULL
// -> there are still nodes in the list.
// -> will recursively call the function itself to append more ele
// further down the list

//-> at the same time, it still return the node -> make sure that the 
// chain of pointers remains the same while adding new nodes.