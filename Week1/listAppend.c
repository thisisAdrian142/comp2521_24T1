struct node*listAppend(struct node*list, int value) {
    if (list==NULL){
        return newNode(value);
    } else if (list->next==NULL) {
        list->next=newNode(value);
        return list;
    } else {
        listAppend(list->next,value);
        return list;
    }
}

//cons: repeats the call to newNode 
//cons: repeats rturn list;