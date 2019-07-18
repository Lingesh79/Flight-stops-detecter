#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node
{
	char data[35];
	struct node *next;
};
int main()
{
	int i,j,k,l,m,n,o,q,r,s;
	int num;
	char source[25];
	int sourcelen;
	int deslen;
	int stolen;
	int stoolen;
	char des[35];
	int time;
	char sto[35];
	char stoo[35];
	FILE *fp;
	fp=fopen("hello.txt","w");
	printf("\n Enter the flight number\n");
	scanf("%d",&num);
	printf("\nEnter the source \n");
	scanf("%s",source);
	printf("\nEnter the destination\n ");
	scanf("%s",des);
	printf("\nEnter the time\n ");
	scanf("%d",&time);
	fprintf(fp,"%d",num);
	fprintf(fp,"%s",source);
	fprintf(fp,"%s",des);
	fprintf(fp,"%d",time);
	fclose(fp);
	fp=fopen("hello.txt","r");
	fscanf(fp,"%d",&num);
	fscanf(fp,"%s",source);
	fscanf(fp,"%s",des);
	fscanf(fp,"%d",&time);
	printf("\nFlight number is\n");
	printf("%d",num);
	printf("\nFlight source is\n");
	printf("%s",source);
	printf("\nFlight destination\n");
	printf("%s",des);
	printf("\nFlight duration\n");
	printf("%d",time);
	fclose(fp);

	struct node *start=NULL,*destination,*st,*sp,*p;
	int stop;
	printf("\n Enter number of stops(to stop enter 3)");
	scanf("%d",&stop);
	sourcelen=strlen(source);
	deslen=strlen(des);
	while(stop!=3)
	{
		struct node *destination=NULL,*start=NULL,*st=NULL,*sp=NULL,*p=NULL;
		switch(stop)
		{
			case 0:
				start=(struct node *)malloc(sizeof(struct  node));
				for(s=0;s<sourcelen;s++)
				{
					start->data[s]=source[s];
				}
				destination=(struct node *)malloc(sizeof(struct node));

				for(r=0;r<deslen;r++)
				{
					destination->data[r]=des[r];
				}
			start->next=destination;
			destination->next=NULL;
			p=start;
			printf("\n the path of travel is\n");
			while(p!=NULL)
			{
				printf("%s",p->data);
				p=p->next;
			}
			break;
			case 1:
			start=(struct node *)malloc(sizeof(struct node));
			for(q=0;q<sourcelen;q++)
			{
				start->data[q]=source[q];
			}
			st=(struct node *)malloc(sizeof(struct node));
			start->next=st;
			printf("\nEnter the stop name\n");
			scanf("%s",sto);
			stolen=strlen(sto);
			for(o=0;o<stolen;o++);
			{
				st->data[o]=sto[o];
			}
			destination=(struct node *)malloc(sizeof(struct node));
			st->next=destination;
			for(n=0;n<deslen;n++)
			{
				destination->data[n]=des[n];
			}
			destination->next=NULL;
			p=start;
			while(p!=NULL)
			{
				printf("%s",p->data);
				p=p->next;
			}
			break;
			case 2:
			start=(struct node *)malloc(sizeof(struct node));
			for(m=0;m<sourcelen;m++)
			{
				start->data[m]=source[m];
			}
			st=(struct node *)malloc(sizeof(struct node));
			start->next=st;
			printf("\nEnter the stop1 name\n");
			scanf("%s",sto);
			stolen=strlen(sto);
			for(l=0;l<stolen;l++)
			{
				st->data[l]=sto[l];
			}

			sp=(struct node *)malloc(sizeof(struct node));
			printf("\nEnter the stop2 name\n");
			scanf("%s",stoo);
			st->next=sp;
			stoolen=strlen(stoo);
			for(k=0;k<stoolen;k++)
			{
				sp->data[k]=stoo[k];
			}
			destination=(struct node *)malloc(sizeof(struct node));
			sp->next=destination;
			for(j=0;j<deslen;j++)
			{
				destination->data[j]=des[j];
			}
			destination->next=NULL;
			p=start;
			while(p!=NULL)
			{
				printf("%s",p->data);
				p=p->next;
			}
			break;
		}
		printf("\nEnter number of stops(to stop enter 3)\n");
		scanf("%d",&stop);
	}
	return 0;
}
