#include <stdlib.h>
#include <stdio.h>
#include "bintree.h"

bintree_t * 
bintree_create (char data) 
{
	node_t * root ;
	root = (node_t *) malloc(sizeof(node_t)) ;
	root->data = data ;
	root->left= NULL ;
	root->right = NULL ; 
	return root ;
}

bintree_t *
bintree_add_left (bintree_t * parent, bintree_t * child)
{
	/*TODO*/
	parent->left = child ;
}

bintree_t *
bintree_add_right (bintree_t * parent, bintree_t * child)
{
	/*TODO*/
	parent->right= child ;
}

bintree_t *
bintree_search (bintree_t * t, char key)
{
	/*TODO*/
	if (t->data == key)
		return t;
	bintree_t*r ;
	r = bintree_search(t->left)

}

int
bintree_is_parent (bintree_t * parent, bintree_t * child)
{
	/*TODO*/
	if(t1->left == t2 || t1->right == t2)
}
int 
bintree_is_ancestor (bintree_t * parent, bintree_t * child){
	if(t1->left == t2 || t1->right == t2)
	return 1;
	if (t1->left){
		if ()
	}
}
void
bintree_delete (bintree_t * t)
{
	/*TODO*/
	if (t->left)
		bintree_delete(t->left);
	if (t->right)
		bintree_delete(t->right);
	free(t);

}


int
bintree_height(bintree_t * t) 
{
	/*TODO*/
	if (t->left){
		int height;
		height = bintree_height(t->left);
		if (max_height < height){
			max_height = height;
		}
			
}
if (t->right){
		int height;
		height = bintree_height(t->right);
		if (max_height < height){
			max_height = height;
		}
			
}

return max_height + 1 ;
void
bintree_print (bintree_t * t)
{
	/*TODO*/
	bintree_print (bintree_t)
}

