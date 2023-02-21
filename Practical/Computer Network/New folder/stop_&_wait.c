#include<stdio.h>
int main()
{
 	int w,i,f,ack=-1,cansend=1;
 	int frames[5];
 	printf("Enter the sliding window size:");
 	scanf("%d",&w); 
 	printf("Enter number of frames to be send:");
 	scanf("%d",&f);
 	printf("\nEnter %d frame:\n",f);
 	for(i=1;i<=f;i++)
 	{
 		scanf("%d",&frames[i]);
 	}
 	printf("\nWith sliding window protocol the frames will be sent in the following manner\n\n");
 	printf("after sending %d frames at each stage sender waits for acknowledgement sent by the receiver\n");
 	for(i=1;i<=f;i++)
 	{
 		if(i%w==0)
 		{
 			printf("%d",frames[i]);
 			printf("acknowledgement of above frames sent is received by sender\n\n");
 		}
 		else
 		{
 			printf("%d",frames[i]);
 		}
 	}
 	if(f%w!=0)
 	{
 		printf("\nAcknowledgement of above frames sent is received by sender\n");
 	}
 	return 0;
}
