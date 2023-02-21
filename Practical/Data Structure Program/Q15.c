// Q15. WAP to convert the Sparse Matrix into non-zero form and vice-versa.

#include<stdio.h>
void main()
{
    int i,j,matrix[10][10],row,col,item,sparse_matrix[10][3],size;
    printf("Enter no of rows: ");
    scanf("%d",&row);
    printf("Enter no of columns: ");
    scanf("%d",&col);
    for(i=0;i<row;i++)
    {
    	for(j=0;j<col;j++)
    	{
    		printf("Matrix [%d][%d]= ",i,j);
    		scanf("%d",&matrix[i][j]);
		}
	}
	printf("Dimension of Matrix: [%dx%d]\n",row,col);
	printf("Matrix: \n");
    for(i=0;i<row;i++)
    {
    	for(j=0;j<col;j++)
    	{
    		printf("%d\t",matrix[i][j]);
		}
		printf("\n");
	}
    
    for(i=0;i<row;i++)
    {
    	for(j=0;j<col;j++)
    	{
    		if(matrix[i][j]>0)
    		{
    			sparse_matrix[size][0]=i;
    			sparse_matrix[size][1]=j;
    			sparse_matrix[size][2]=matrix[i][j];
    			size++;
			}
		}
	}
	printf("Dimension of Sparse Matrix: [%dx3]\n",size);
	printf("Sparse Matrix: \n");
	printf("Row\tcolumn\tItem\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t%d\t%d",sparse_matrix[i][0],sparse_matrix[i][1],sparse_matrix[i][2]);
		printf("\n");
	}    
}