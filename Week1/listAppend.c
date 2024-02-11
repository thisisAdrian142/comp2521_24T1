struct node*listAppend(struct node*list, int value) {
    if (list==NULL){
        return newNode(value);
    } else {
        listAppend(list->next,value);
        return list;
    }
}

//* listAppend should insert the given value at the end of 
//* the given list and return a pointer to the star of
//* the updated list.