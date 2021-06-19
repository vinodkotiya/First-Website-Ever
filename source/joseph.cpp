#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
typedef struct jose_tag
{
	char name[30];
	struct jose_tag *next;
}josephus;
josephus start;
josephus *getnode();
void addnode(josephus **,josephus *);
void createnode(josephus *);
void countnode(josephus **,int *);
void main()
{
	josephus *phg=NULL;
	int n;
	createnode(phg);
	printf("Input number to be moved:\n");
	scanf("%d",&n);
	phg = &start;
	phg= phg->next;
	countnode(phg,&n);
}
josephus *getnode(void)
{
	josephus *temp;
	temp =(josephus*)malloc(sizeof(josephus));
	printf("Input name\n");
	scanf("%s",temp->name);
	temp->next = NULL;
	return(temp);
}
void addnode(josephus **pphl, josephus *temp)
{
	josephus *travel=NULL;
	if(*pphl == NULL)
	{
		*pphl = temp;
		(*pphl)->next = NULL;
	}
	else
	{
		travel = *pphl;
		while(travel->next!=(*pphl))
		{
			//travel = travel->next;
			temp->next = *pphl;
			travel->next = temp;
			travel = travel->next;
		}
	}
}
void createnode(josephus *pphl)
{
	josephus *ltp;
	char ch = 'Y';
	ltp = NULL;
	do
	{
		ltp = getnode();
		addnode(&pphl,ltp);
		printf("Want to add more names \n");
		fflush(stdin);
		scanf("%c",&ch);
	}while(ch=='y');
}
void countnode(josephus **pphl,int *lpn)
{
	josephus *travel,*temp;
	int ctr;
	temp=travel=NULL;
	travel=*pphl;
	if(*lpn==1)
	{
		while(travel->next!=*pphl)
		travel=travel->next;
		printf("Name left is%s\n",travel->name);
		return;
	}
	else
	{
		while(travel->next!=*pphl)
		{
			for(ctr=1;ctr<=(*lpn);ctr++)
				travel=travel->next;
				temp=travel->next;
				travel->next=travel->next->next;
				travel=travel->next;
				free(temp);
		}
	printf("Name left is:%s\n",travel->name);
	}
}
