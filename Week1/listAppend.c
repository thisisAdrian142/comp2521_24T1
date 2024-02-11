struct node*listAppend(struct node*list, int value) {
    if(list==NULL){
        return newNode(value);
    } else {
        list->next=listAppend(list->next,value);
        return list;
    }
}

