#include <stdio.h>
    NODE temp = (NODE) malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

// Create CLL with n nodes
NODE createCLL(   int n  ) {

// write your code here...
NODE first = NULL, last = NULL;
    int x;

    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        NODE temp = createNodeInCLL(x);

        if (first == NULL) {
            first = last = temp;
            temp->next = first;
        } else {
            last->next = temp;
            temp->next = first;
            last = temp;
        }
    }
    return first;

}

// Traverse CLL
void traverseListInCLL( NODE first   ) {
NODE temp = first;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != first);
    printf("\n");
// write your code here...


}

// Insert at given position in CLL
NODE insertAtPositionInCLL(  NODE first, int pos, int x       ) {
if (pos <= 0) {
        printf("Position not found\n");
        return first;
    }

    NODE temp = (NODE)malloc(sizeof(struct node));
    temp->data = x;

    if (pos == 1) {
        if (first == NULL) {
            temp->next = temp;
            return temp;
        }
        NODE last = first;
        while (last->next != first)
            last = last->next;

        temp->next = first;
        last->next = temp;
        return temp;
    }

    NODE curr = first;
    for (int i = 1; i < pos - 1; i++) {
        curr = curr->next;
        if (curr == first) {
            printf("Position not found\n");
            free(temp);
            return first;
        }
