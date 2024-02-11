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

//* side notes:
// we cant recurse this "listAppend" function
// since the recursive function needs to take in
// a struct node pointer

//* solution -> use a recursive helper function

// ADDING NEW ELEMENTS TO THE END OF THE LIST