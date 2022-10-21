//Mohd. Asim Khan
// Binary Tree Traversal in C

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

// ADD A NODE
struct node* newNode(int data) {
	struct node* node = (struct node*)malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;

	return (node);
}

// BUILD TREE
struct node *buildTree(int *arr, int low, int high, struct node *n) {
    
    if(low < high) {
        struct node *new_node  = newNode(arr[low]);
	    
        n = new_node;

	    n->left = buildTree(arr, 2*low+1 , high, n->left);
	    n->right = buildTree(arr, 2*low+2 , high, n->right);
    }

    return n;
}

// PRINT IN-ORDER
void printInorder(struct node *n) {
    if(n != NULL) {
        printInorder(n->left);
        printf("%d ", n->data);
        printInorder(n->right);
    }
}

// PRINT PRE-ORDER
void printPreOrder(struct node *n) {
    if(n != NULL) {
        printf("%d ", n->data);
        printPreOrder(n->left);
        printPreOrder(n->right);
    }
}

// PRINT POST-ORDER
void printPostOrder(struct node *n) {
    if(n != NULL) {
        printPostOrder(n->left);
        printPostOrder(n->right);
        printf("%d ", n->data);
    }
}

int main() {
    
    // char arr[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G'};
    // int size = sizeof(arr)/sizeof(arr[0]);

    // printf("\nSIZE: %d\n", size);

    int size=7;
    int arr[7];

    //printf("\nEnter each node with a space: ");
    for (size_t i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    struct node *root = buildTree(arr, 0, size, root);

    printf("Preorder: ");
    printPreOrder(root);

    printf("\nInorder: ");
    printInorder(root);

    printf("\nPostorder: ");
    printPostOrder(root);
    
    return 0;
}
