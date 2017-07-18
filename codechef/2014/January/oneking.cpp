#include <cstdio>
#include <stdlib.h>

using namespace std;


struct node
{
	int l,r;
	struct node *next;
};

int main()
{
	int i,l,r,t,n,dif,count,arr[2][100002];
	node *start,*end,*prev,*trav,*temp;
	scanf("%d",&t);
	while(t--)
	{
		start=NULL;end=NULL;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d%d",&l,&r);
			prev=NULL;
			trav=start;
			temp=(node *)malloc(sizeof(node));
			temp->l=l;
			temp->r=r;
			dif=r-l;
			if(start==NULL)
			{
				start=temp;
				temp->next=NULL;
			}
			else
			{
				while(trav!=NULL&&dif>((trav->r)-(trav->l)))
				{
					prev=trav;
					trav=trav->next;
				}
				if(prev==NULL)
				{
					if(dif>=((trav->r)-(trav->l)))
					{
						prev=start;
						prev->next=temp;
					}
					else
					{
						prev=start=temp;
						start->next=trav;
					}
				}
				else
				{
					temp->next=trav;
					prev->next=temp;
				}
			}
		}
		//list created

		arr[0][0]=start->l;
		arr[1][0]=start->r;
		count=1;
		temp=start->next;
		while(temp!=NULL)
		{
			for(i=0;i<count;i++)
			{
				if((((temp->l)<arr[0][i])&&((temp->l)>arr[1][i]))||(temp->l)>arr[1][i])
				{
					arr[0][count]=temp->l;
					arr[1][count]=temp->r;
					count++;
					break;
				}
				else
				break;
			}
			temp=temp->next;

		}

		/*temp=start;
		while(temp!=NULL)
		{
			printf("L: %d\tR:%d\n",temp->l,temp->r);
			temp=temp->next;
		}
		
		for(i=0;i<count;i++)
		{
			printf("%d  %d\n",arr[0][i],arr[1][i]);
		}*/
		printf("%d\n",count);
		
	}
	return 0;
}