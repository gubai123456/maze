#include<stdio.h>
#include<stdlib.h> 
#include<conio.h>  
void shuru(char shuju[29][26],int *a,int *b)
{
	int i=0,j=0;
	FILE *fp;
    char ch;
	if((fp=fopen("haha.txt","r"))==NULL)//��һ���Ϳ��Դ��ļ��ˡ� 
	{
		printf("�ļ�·������ȷ��");
		exit(1);
	}
	ch=fgetc(fp);
	while(ch!=EOF)
	{   
		if(ch=='1')
        {
			
			shuju[i][j]=ch;
			j++;
			if(j==26)
			{
				i++;
				j=0;
			}	
		}
		else if(ch=='2')
		{
			
			shuju[i][j]=ch;
			(*a)=i;
			(*b)=j;
            j++;
			if(j==26)
			{
				i++;
				j=0;
			}
		}
		else if(ch=='3')
		{
			shuju[i][j]=ch;
            j++;
			if(j==26)
			{
				i++;
				j=0;
			}
		}
		else 
		{	
            shuju[i][j]=ch;
            j++;
			if(j==26)
			{
				i++;
				j=0;
			}
		}
        ch=fgetc(fp);
	}
	fclose(fp);
}
void shuchu(char shuju[29][26],int *a,int *b)
{
	int i,j;
	system("cls"); 
	for(i=0;i<29;i++)
		for(j=0;j<26;j++)
		{
			if(shuju[i][j]=='1')
				printf("��");
			else if(shuju[i][j]=='2')
			{   
				printf("��");
				(*a)=i;
                (*b)=j;
			}
			else if(shuju[i][j]=='3')
			{
				printf("  ");
			}
			else if(shuju[i][j]=='4')
			{
				printf("��������");
			}
			else if(shuju[i][j]=='5')
			{
				printf("�e");
			}
			else if(shuju[i][j]=='6')
			{
				printf("�d");
			}
			else if(shuju[i][j]=='7')
			{
				printf("��");
			}
			else if(shuju[i][j]=='*')
			{
				printf("��");
			}
			else if(shuju[i][j]=='8')
			{
				printf("W:�����ƶ�\tS:�����ƶ�");
			}
			else if(shuju[i][j]=='9')
			{
				printf("A:�����ƶ�\tD:�����ƶ�");
			}
			else if(shuju[i][j]=='+')
			{
				printf("�������!��������������");
			}
			else
			{
				putchar(shuju[i][j]);
			}
		}
		printf("\n");
} 
int main()
{
	void shuru(char shuju[29][26],int *a,int *b);
	void shuchu(char shuju[29][26],int *a,int *b);
	int a,b;//��¼��ɫλ�� 
	char ch,c;
	char shuju[29][26];
	shuru(shuju,&a,&b);
	shuchu(shuju,&a,&b);
    ch=getch();
    while(1)
	{
		switch(ch)
		{
		case 'w':
		case 'W':
			{
				if(shuju[a-1][b]=='3'||shuju[a-1][b]=='*')
				{  
					c=shuju[a-1][b];
					shuju[a-1][b]=shuju[a][b];
					shuju[a][b]=c;
					shuchu(shuju,&a,&b);
				}
				break;
			}
		case 'a':
		case 'A':
			{
				if(shuju[a][b-1]=='3'||shuju[a][b-1]=='*')
				{
					c=shuju[a][b-1];
					shuju[a][b-1]=shuju[a][b];
					shuju[a][b]=c;
					shuchu(shuju,&a,&b);
				}
				break;
			}
		case 's':
		case 'S':
			{
				if(shuju[a+1][b]=='3'||shuju[a+1][b]=='*')
				{
					c=shuju[a+1][b];
					shuju[a+1][b]=shuju[a][b];
					shuju[a][b]=c;
					shuchu(shuju,&a,&b);
				}
				break;
			}
		case 'd':
		case 'D':
			{
				if(shuju[a][b+1]=='3'||shuju[a][b+1]=='*')
				{
					c=shuju[a][b+1];
					shuju[a][b+1]=shuju[a][b];
					shuju[a][b]=c;
					shuchu(shuju,&a,&b);
				}
				break;
			}
		}
		if(shuju[22][23]=='2')
		{
			printf("�����ӳ�����!\n");
			system("pause"); system("pause");
			break;
		}
		if(shuju[3][13]=='2'||shuju[3][19]=='2'||shuju[9][5]=='2'||shuju[7][20]=='2'||shuju[12][19]=='2'||shuju[17][13]=='2'||shuju[23][19]=='2')
		{
			printf("��������!\n");system("pause");
			system("pause"); 
			break;
		}
		ch=getch();
	}
	return 0;
}

