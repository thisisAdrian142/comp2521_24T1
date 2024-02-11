struct node {
    int value;
    struct node *next;
}

int listSum(struct node*list) {
    if (list==NULL) {
        return 0;
    } else {
        return value+listSum(value->next);
    }
}