#include<stdio.h>
#include<stdlib.h>
struct num{
	int n;
	struct num *next;
};
int main()
{
	int mark;
	struct num *p,*head,*tail;
	head=tail=NULL;
	scanf("%d",&mark);
	while(mark!=-1){
		p=(struct num *)malloc(sizeof(struct num));
		p->n=mark;
		p->next=NULL;
		if(head==NULL){
			head=p;
//			tail=head;
		}else{
			tail->next=p;
//			tail=p;
		}
		tail=p; //19行和22行可以合并为24行 
		scanf("%d",&mark);
	}
	struct num *q,*h,*t,*move;
	h=t=NULL;
	for(move=head;move!=NULL;move=move->next){
		if((move->n)%2!=0){ 
			q=(struct num *)malloc(sizeof(struct num));
			q->n=move->n;
			q->next=NULL; 
			if(h==NULL){
				h=q;
			}else{
				t->next=q;
			}
			t=q;
		}
	} 
	// q=h 和move=h 都行 
	for(q=h;q!=NULL;q=q->next){
		printf("%d ",q->n);
	}
	return 0;
}
