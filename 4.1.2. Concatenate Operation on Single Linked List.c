struct node {
    int data;
    struct node* next;
};

typedef struct node* NODE;

NODE createNode(int x) {
    //write your code here..
	NODE temp=(NODE)malloc(sizeof(struct node));
	if(temp==NULL){
		printf("Memory allocation failed\n");
		return NULL;
	}
	temp->data=x;
	temp->next=NULL;
	return temp;
}

NODE addNode(NODE first, int x) {
    //write your code here..
	NODE temp=createNode(x);
	NODE cur;
	if(temp==NULL){
		return first;
	}
	if(first==NULL)
		return temp;
	
	cur=first;
	while(cur->next!=NULL){
		cur=cur->next;
	}
	cur->next=temp;
	return first;
}
}
