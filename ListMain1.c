#include "List1.h"

int main(void){
    struct Node* list = createLink();
    insertNodeByHead(list, 1);
    insertNodeByHead(list, 2);
    insertNodeByHead(list ,3);
    printList(list);
    deleteNodeByAppoin(list, 2);
    printList(list);
    return 0;
}
