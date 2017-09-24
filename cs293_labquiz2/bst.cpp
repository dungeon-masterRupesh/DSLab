#include "bst.h"

bst::bst(){
	root = NULL;
}

bst::~bst(){
	treenode * k = new treenode;
	treenode * l = new treenode;
	k = root;
	l=k;
	if (k = NULL){}
		else{
			while(k != NULL){
				k=k->ltree;
				delete l;
				l=k;
			}
		}
}
void bst::insert(int val){
	if (root == NULL){
		treenode * tempp = new treenode;
		tempp->parent = NULL;
		tempp->rtree = NULL;
		tempp->ltree = NULL;
		tempp->value = val;
		root = tempp;
	}
else{ 
 	treenode * tempp = new treenode;
 	treenode * prevv = new treenode;
 	tempp = root;
  while(true){
  	prevv = tempp;
  	if(val > tempp->value){
 	 		if (tempp->rtree == NULL)break;
 	 		tempp = tempp->rtree;
 	 	}
 	 	else{
 	 		if (tempp->ltree == NULL)break;
 	 		tempp = tempp->ltree;
 	 	}

}
	treenode * tem = new treenode;
 	tem->parent = prevv;
 	tem->rtree = NULL;
 	tem->ltree = NULL;
 	tem->value = val;
//prevv->ltree = tempp;
	if (val > prevv->value)
	{
		/* code */
		prevv->rtree = tem;
	}
	else{
		prevv->ltree = tem;
	}
 }

}

void bst::preorder(treenode* t){
	if(t == NULL){}
	else{   
			cout<< t->value <<" ";
			bst::preorder(t->ltree);
			bst::preorder(t->rtree);
		}
}

void bst::postorder(treenode* t){
	if(t == NULL){}
	else{   
			bst::postorder(t->ltree);
			bst::postorder(t->rtree);
			cout<< t->value <<" ";
		}
}

void bst::inorder(treenode* t){
	if(t == NULL){}
	else{   
			bst::inorder(t->ltree);
			cout<< t->value <<" ";
			bst::inorder(t->rtree);
		}
}

bool bst::search(int val){
	treenode* ser = new treenode;
	ser = root;
	while(ser != NULL){
		if(ser->value == val) return true;
		else if (ser->value > val){
			if (ser->ltree == NULL)return false;
			else {ser = ser->ltree;}
		}
		else{
			if (ser->rtree == NULL)return false;
			else {ser = ser->rtree;}
		}
	}
	return false;
}

void bst::delet(int val){
	treenode* ser = new treenode;
	ser = root;
	while(ser != NULL){
		if(ser->value == val){
			if(ser->ltree == NULL && ser->rtree == NULL){
				treenode* ne = new treenode;
				if (ser->parent != NULL) {ne = ser->parent;

				if (ne->value > val)
				{
					ne->ltree = NULL;return;
				}
				else {ne->rtree = NULL;return;}
			}else{root = NULL;return;}}
			else if (ser->rtree == NULL){
				treenode* ne = new treenode;
				if (ser->parent != NULL){ne = ser->parent;
				treenode* rep = new treenode;
				rep = ser->ltree;
				rep->parent = ne;
				if (ne->value > val)
				{
					
					ne->ltree = rep;return;
				}
				else {ne->rtree = rep;
				return;}
			}else{root = root->ltree; root->parent = NULL;return;}}
			else if (ser->ltree == NULL){
				treenode* ne = new treenode;
				if (ser->parent != NULL){ne = ser->parent;
				treenode* rep = new treenode;
				rep = ser->rtree;
				rep->parent = ne;
				if (ne->value > val)
				{
					
					ne->ltree = rep;return;
				}
				else {ne->rtree = rep;return;}
			}else{root = root->rtree; root->parent = NULL;return;}}
			else{if (ser->parent != NULL)
			{
				/* code */
				treenode* ne = new treenode;
				ne = ser->parent;
				if(ne->value > val)  //ser was left child
				{
					treenode* rch = new treenode;
					rch = ser->rtree;
					rch->parent = ne;
					ne->ltree = rch;
					treenode* lch = new treenode;
					lch = ser->ltree;
					treenode* temp = new treenode;
					temp = rch;
					while(temp->ltree != NULL){
						temp = temp->ltree;
					}
					temp->ltree = lch;
					lch->parent = temp;return;

				}
				else{
					treenode* rch = new treenode;
					rch = ser->rtree;
					rch->parent = ne;
					ne->rtree = rch;
					treenode* lch = new treenode;
					lch = ser->ltree;
					treenode* temp = new treenode;
					temp = rch;
					while(temp->ltree != NULL){
						temp = temp->ltree;
					}
					temp->ltree = lch;
					lch->parent = temp;return;
				}
			}
			else{

					treenode* rch = new treenode;
					rch = ser->rtree;
					rch->parent = NULL;
					root = rch;
					treenode* lch = new treenode;
					lch = ser->ltree;
					treenode* temp = new treenode;
					temp = rch;
					while(temp->ltree != NULL){
						temp = temp->ltree;
					}
					temp->ltree = lch;
					lch->parent = temp;return;

					

			}
		}
		}	
		else if (ser->value > val){
			if (ser->ltree == NULL){return;}
			else {ser = ser->ltree;}
		}
		else{
			if (ser->rtree == NULL){return;}
			else {ser = ser->rtree;}
		}
	}		
}

void bst::lca(int n1, int n2){
	treenode* ser = new treenode;
	ser = root;
	while(ser!=NULL){
		if((n1 < ser->value) && (n2 < ser->value)){
			ser = ser->ltree;
		}
		else if((n1 > ser->value) && (n2 > ser->value)){
			ser = ser->rtree;
		}
		else{
			cout<<ser->value<<endl;
			return;
		}
	}
	return;
}

void bst::lt(int n1, int n2){
	int k;
	treenode* ser = new treenode;
	ser = root;
	while(ser!=NULL){
		if((n1 < ser->value) && (n2 < ser->value)){
			ser = ser->ltree;
		}
		else if((n1 > ser->value) && (n2 > ser->value)){
			ser = ser->rtree;
		}
		else{
			k = ser->value;
		break;
		}
	}
	///the idea here is to use lca and ser node and then find distance between ser and each n1 and n2 and add them;
	treenode* sery = ser;
	int d1 = 0;
	int val = n1;
	while(ser != NULL){
		if(ser->value == val) break;
		else if (ser->value > val){
			if (ser->ltree == NULL)break;
			else {ser = ser->ltree; d1++;}
		}
		else{
			if (ser->rtree == NULL)break;
			else {ser = ser->rtree;d1++;}
		}
	}
	return;

}