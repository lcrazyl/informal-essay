/*�ɻ���ս��hit the plane��
/*#include"stdio.h"
#include<windows.h>
#include<conio.h>
#include<time.h>
#define Esc 27
#define Up 72
#define Down 80
#define Left 75
#define Right 77
#define Kong 32

int x=10;
int y=18;

int d2=10;
int d1=10;
int d=10;
int r=1;
int r1=1;
int r2=1;

int t=1;
int f=0;
int m=3;
int j=0;
char p;

void kongzhi(int bx,int by);
void huatu();

void gotoxy(int x,int y)
{
	COORD coord;
	coord.X=x;
	coord.Y=y;
SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), coord );}
void hidden()
{
	HANDLE hOut=GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;
	GetConsoleCursorInfo(hOut,&cci);
	cci.bVisible=0;
	SetConsoleCursorInfo(hOut,&cci);
}
void shuoming()
{
	printf("\t\t\t\n\n\n\n");

	printf("\t\t\t�������\n\n"
	"\t\t\t�ϡ�\n\n"
	"\t\t\t�¡�\n\n"
	"\t\t\t���\n\n"
	"\t\t\t�ҡ�\n\n"
	"\t\t\t�ӵ� �ո�\n\n\n"
	"\t\t\t�˳��밴Esc\n\n\n");
	gotoxy(0,0);
}

void byebye()
{
	if((x==d&&y==r)||(x==d1&&y==r1)||(x==d2&&y==r2))
	{ gotoxy(1,3);
	printf(" !!!��Ϸ����!!!\n"
		"*****************\n"
		"�����ܵ÷�:%d\n\n"
		"�л�����%d\n"
		"�ߵ�����%d\n"
		"�����ʣ�%.0f %%\n"
		"******************\n",f,m,j,((float)j/(float)m)*100);
while(!kbhit())	{
.		Sleep(500);
			gotoxy(1,12);
printf("�����밴�����\n\n\n");
Sleep(900);
gotoxy(1,12);
printf(" ");
	}
	gotoxy(0,0);
	huatu();
	f=0;m=0;j=0;
	if(x>=18) x--;
	else  x++;
	gotoxy(x,y);
	printf("��");
	}
}
void jifan()
{
	if(x==d&&y==r)
	{gotoxy(d,r);printf("3");
		Sleep(200);
		gotoxy(d,r); printf(" "); f+=2; r=0; j++;}
	if(x==d1&&y==r1)
	{gotoxy(d1,r1);printf("1");
	Sleep(200);
	gotoxy(d1,r1);printf(" "); f+=3; r1=0; j++;}
	if(x==d2&&y==r2)
	{gotoxy(d2,r2);printf("0"); 
	Sleep(200);
	gotoxy(d2,r2);printf(" "); f+=1; r2=0; j++;}
	
	gotoxy(26,2);
	printf("%d\n",f);
}
 
void huatu()
{int i,n;

	for(i=0;i<=20;i++)
	{
	for(n=0;n<=20;n++)
	{
	printf("*");
	}
	printf("\n");
	}
	for(i=1;i<=19;i++)
	{
	for(n=1;n<=19;n++)
	{
	gotoxy(i,n);
	printf(" ");
	}
	}
	}

void dfeiji()
{
	while(t)
	{
		if(!r){d=rand()%17+1;m++;}
		if(!r1){d1=rand()%17+1;m++;}
		if(!r2){d2=rand()%17+1;m++;}

		while(t)
		{r++;r1++;r2++;
gotoxy(d,r); printf("��");
gotoxy(d1,r1);printf("��");
gotoxy(d2,r2);printf("��");
Sleep(900);
		gotoxy(d,r);printf(" ");
		gotoxy(d1,r1);printf(" ");
		gotoxy(d2,r2);printf(" ");

		kongzhi(0,0);
		byebye();
		if(r==18) r=0;
		if(r1==18) r1=0;
		if(r2==18) r2=0;
		if(r==0||r1==0||r2==0) break;
		} 
        }
}
void kongzhi(int bx,int by)
{int a;

while(kbhit())
{
	if((p=getch())==-32) p=getch();
	a=p;
	gotoxy(22,5);
	switch(a)
	{
	case Up:if(y!=1)
			{gotoxy(x,y);printf(" ");
		y--;
		gotoxy(x,y);printf("��");
			}break;
	case Down:if(y!=18)
			  {gotoxy(x,y);printf(" ");
		y++;
		gotoxy(x,y);printf("��");
			  }break;
	case Left:if(x!=1)
			  {gotoxy(x,y);printf(" ");
		x--;
		gotoxy(x,y);printf("��");
			  }break;
	case Right:if(x!=18)
			   {gotoxy(x,y);printf(" ");
		x++;
		gotoxy(x,y);printf("��");
			   }break;
	case Kong:{bx=y;
		for(by=y;by>1;)
		{by--;
		gotoxy(x,by);printf("��");
		Sleep(10);
		gotoxy(x,by);printf(" ");
		y=by;
		jifan();
		if(r==0||r1==0||r2==0) break;
		}
		y=bx;
			  }break;
	case Esc:t=0;break;
	default:break;
	}
}
}

void main()
{
	srand(time(NULL));
	shuoming();
	hidden();
	huatu();
	gotoxy(x,y);
	printf("��");

	gotoxy(22,2);
	printf("����");
	while(t)
	{ kongzhi(0,0);
	if(t)
		dfeiji();
	}
	 
}*/
/*#include<stdio.h>
#include<time.h>
#include<windows.h>
#include<stdlib.h>

#define U 1
#define D 2
#define L 3
#define R 4

typedef struct SNAKE
{
	int x;
	int y;
	struct SNAKE *next;
}snake;

int score=0,add=10;
int status,sleeptime=200;
snake*head,*food;
snake*q;
int endgamestatus=0;

void Pos();
void creatMap();
void initsnake();
int biteself();
void createfood();
void cantcrosswall();
void snakemove();
void pause();
void gamecircle();
void welcometogame();
void endgame();
void gamestart();

void Pos(int x,int y)
{
	COORD pos;
	HANDLE hOutput;
	pos.X=x;
	pos.Y=y;
	hOutput=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorposition(hOutput,pos);
}

void creatMap()
{
	int i;
	for(i=0;i<58;i+=2)
	{
		Pos(i,0);
		printf("��");
		Pos(i,26);
		printf("��");
	}
	for(i=1;i<26;i++)
	{
		Pos(0,i);
		printf("��");
		Pos(56,i);
		printf("��");
	}
}

void initsnake()
{
	snake*tail;
	int i;
	tail=(snake*)malloc(sizeof(snake));
	tail->x=24;
	tail->y=5;
	tail->next=NULL;
	for(i=1;i<=4;i++)
	{
		head=(snake*)malloc(sizeof(snake));
		head->next=tail;
		head->x=24+2*i;
		head->y=5;
		tail=head;
	}
	while(tail!=NULL)
	{
		Pos(tail->x,tail->y);
		printf("��");
		tail=tail->next;
	}
}
int biteself()
{
	snake*self;
	self=head->next;
	while(self!=NULL)
	{
		if(self->x==head->x&&self->y==head->y)
		{
			return 1;
		}
		self=self->next;
	}
	return 0;
}
void createfood()
{
	snake*food_1;
	srand((unsigned)time(NULL));
	food_1=(snake*)malloc(sizeof(snake));
	while(food_1->x%2!=0)
	{
		food_1->x=rand()%52+2;
	}
	food_1->y=rand()%24+1;
	q=head;
	while(q->next==NULL)
	{
		if(q->x==food_1->x&&q->y==food_1->y)
		{
			free(food_1);
			createfood();
		}
		q=q->next;
	}
	Pos(food_1->x,food_1->y);
	food=food_1;
	printf("��");
}
void cantcrosswall()
{
	if(head->x==0||head->x==56||head->y==0||head->y==26)
	{
		endgamestatus=1;
		endgame();
	}
}
void snakemove()
{
	snake*nexthead;
	cantcrosswall();
	nexthead=(snake*)malloc(sizeof(snake));
	if(status==U)
	{
		nexthead->x=head->x;
		nexthead->y=head->y-1;
		if(nexthead->x==food->x&&nexthead->y==food->y)
		{
			nexthead->x=head->x;
			nexthead->y=head->y-1;*/
			

#include<stdio.h>
#include<time.h>
#include<windows.h>
#include<stdlib.h>
 
#define U 1
#define D 2
#define L 3 
#define R 4       //�ߵ�״̬��U���� ��D���£�L:�� R����
 
typedef struct SNAKE //�����һ���ڵ�
{
    int x;
    int y;
    struct SNAKE *next;
}snake;
 
//ȫ�ֱ���//
int score=0,add=10;//�ܵ÷���ÿ�γ�ʳ��÷֡�
int status,sleeptime=200;//ÿ�����е�ʱ����
snake *head, *food;//��ͷָ�룬ʳ��ָ��
snake *q;//�����ߵ�ʱ���õ���ָ��
int endgamestatus=0; //��Ϸ�����������1��ײ��ǽ��2��ҧ���Լ���3�������˳���Ϸ��
 
//����ȫ������//
void Pos();
void creatMap();
void initsnake();
int biteself();
void createfood();
void cantcrosswall();
void snakemove();
void pause();
void gamecircle();
void welcometogame();
void endgame();
void gamestart();
 
void Pos(int x,int y)//���ù��λ��
{
    COORD pos;
	HANDLE hOutput;
    pos.X=x;
    pos.Y=y;
    hOutput=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hOutput,pos);
}
 
void creatMap()//������ͼ
{
    int i;
    for(i=0;i<58;i+=2)//��ӡ���±߿�
    {
        Pos(i,0);
        printf("��");
        Pos(i,26);
        printf("��");
    }
    for(i=1;i<26;i++)//��ӡ���ұ߿�
    {
        Pos(0,i);
        printf("��");                        
        Pos(56,i);
        printf("��");        
    }
}
 
void initsnake()//��ʼ������
{
    snake *tail;
    int i;
    tail=(snake*)malloc(sizeof(snake));//����β��ʼ��ͷ�巨����x,y�趨��ʼ��λ��//
    tail->x=24;
    tail->y=5;
    tail->next=NULL;
    for(i=1;i<=4;i++)
    {
        head=(snake*)malloc(sizeof(snake));
        head->next=tail;
        head->x=24+2*i;
        head->y=5;
        tail=head;
    }
    while(tail!=NULL)//��ͷ��Ϊ���������
    {
        Pos(tail->x,tail->y);
        printf("��");
        tail=tail->next;
    }
}
 
int biteself()//�ж��Ƿ�ҧ�����Լ�
{
    snake *self;
    self=head->next;
    while(self!=NULL)
    {
        if(self->x==head->x && self->y==head->y)
        {
            return 1;
        }
        self=self->next;
    }
    return 0;
}
 
void createfood()//�������ʳ��
{
    snake *food_1;
    srand((unsigned)time(NULL));
    food_1=(snake*)malloc(sizeof(snake));
    while((food_1->x%2)!=0)    //��֤��Ϊż����ʹ��ʳ��������ͷ����
    {
        food_1->x=rand()%52+2;
    }
    food_1->y=rand()%24+1;
    q=head;
    while(q->next==NULL)
    {
        if(q->x==food_1->x && q->y==food_1->y) //�ж������Ƿ���ʳ���غ�
        {
            free(food_1);
            createfood();
        }
        q=q->next;
    }
    Pos(food_1->x,food_1->y);
    food=food_1;
    printf("��");
}
 
void cantcrosswall()//���ܴ�ǽ
{  
    if(head->x==0 || head->x==56 ||head->y==0 || head->y==26)
    {
        endgamestatus=1;
        endgame();
    }
}
 
void snakemove()//��ǰ��,��U,��D,��L,��R
{
	snake * nexthead;
    cantcrosswall();
    
    nexthead=(snake*)malloc(sizeof(snake));
    if(status==U)
    {
        nexthead->x=head->x;
        nexthead->y=head->y-1;
        if(nexthead->x==food->x && nexthead->y==food->y)//�����һ����ʳ��//
        {
            nexthead->next=head;
            head=nexthead;
            q=head;
            while(q!=NULL)
            {
                Pos(q->x,q->y);
                printf("��");
                q=q->next;
            }
            score=score+add;
            createfood();
        }
        else                                               //���û��ʳ��//
        {
            nexthead->next=head;
            head=nexthead;
            q=head;
            while(q->next->next!=NULL)
            {
                Pos(q->x,q->y);
                printf("��");
                q=q->next;        
            }
            Pos(q->next->x,q->next->y);
            printf("  ");
            free(q->next);
            q->next=NULL;
        }
    }
    if(status==D)
    {
        nexthead->x=head->x;
        nexthead->y=head->y+1;
        if(nexthead->x==food->x && nexthead->y==food->y)  //��ʳ��
        {
            nexthead->next=head;
            head=nexthead;
            q=head;
            while(q!=NULL)
            {
                Pos(q->x,q->y);
                printf("��");
                q=q->next;
            }
            score=score+add;
            createfood();
        }
        else                               //û��ʳ��
        {
            nexthead->next=head;
            head=nexthead;
            q=head;
            while(q->next->next!=NULL)
            {
                Pos(q->x,q->y);
                printf("��");
                q=q->next;        
            }
            Pos(q->next->x,q->next->y);
            printf("  ");
            free(q->next);
            q->next=NULL;
        }
    }
    if(status==L)
    {
        nexthead->x=head->x-2;
        nexthead->y=head->y;
        if(nexthead->x==food->x && nexthead->y==food->y)//��ʳ��
        {
            nexthead->next=head;
            head=nexthead;
            q=head;
            while(q!=NULL)
            {
                Pos(q->x,q->y);
                printf("��");
                q=q->next;
            }
            score=score+add;
            createfood();
        }
        else                                //û��ʳ��
        {
            nexthead->next=head;
            head=nexthead;
            q=head;
            while(q->next->next!=NULL)
            {
                Pos(q->x,q->y);
                printf("��");
                q=q->next;        
            }
            Pos(q->next->x,q->next->y);
            printf("  ");
            free(q->next);
            q->next=NULL;
        }
    }
    if(status==R)
    {
        nexthead->x=head->x+2;
        nexthead->y=head->y;
        if(nexthead->x==food->x && nexthead->y==food->y)//��ʳ��
        {
            nexthead->next=head;
            head=nexthead;
            q=head;
            while(q!=NULL)
            {
                Pos(q->x,q->y);
                printf("��");
                q=q->next;
            }
            score=score+add;
            createfood();
        }
        else                                         //û��ʳ��
        {
            nexthead->next=head;
            head=nexthead;
            q=head;
            while(q->next->next!=NULL)
            {
                Pos(q->x,q->y);
                printf("��");
                q=q->next;        
            }
            Pos(q->next->x,q->next->y);
            printf("  ");
            free(q->next);
            q->next=NULL;
        }
    }
    if(biteself()==1)       //�ж��Ƿ��ҧ���Լ�
    {
        endgamestatus=2;
        endgame();
    }
}
 
void pause()//��ͣ
{
    while(1)
    {
        Sleep(300);
        if(GetAsyncKeyState(VK_SPACE))
        {
            break;
        }
         
    }
}
 
void gamecircle()//������Ϸ        
{

    Pos(64,15);
    printf("���ܴ�ǽ������ҧ���Լ�\n");
    Pos(64,16);
    printf("�á�.��.��.���ֱ�����ߵ��ƶ�.");
    Pos(64,17);
    printf("F1 Ϊ���٣�F2 Ϊ����\n");
    Pos(64,18);
    printf("ESC ���˳���Ϸ.space����ͣ��Ϸ.");
    Pos(64,20);
	status=R;
    while(1)
    {
        Pos(64,10);
        printf("�÷֣�%d  ",score);
        Pos(64,11);
        printf("ÿ��ʳ��÷֣�%d��",add);
        if(GetAsyncKeyState(VK_UP) && status!=D)
        {
            status=U;
        }
        else if(GetAsyncKeyState(VK_DOWN) && status!=U)
        {
            status=D;
        }
        else if(GetAsyncKeyState(VK_LEFT)&& status!=R)
        {
            status=L;
        }
        else if(GetAsyncKeyState(VK_RIGHT)&& status!=L)
        {
            status=R;
        }
        else if(GetAsyncKeyState(VK_SPACE))
        {
            pause();
        }
        else if(GetAsyncKeyState(VK_ESCAPE))
        {
            endgamestatus=3;
            break;
        }
        else if(GetAsyncKeyState(VK_F1))
        {
            if(sleeptime>=50)
            {
                sleeptime=sleeptime-30;
                add=add+2;
                if(sleeptime==320)
                {
                    add=2;//��ֹ����1֮���ټӻ����д�
                }
            }
        }
        else if(GetAsyncKeyState(VK_F2))
        {
            if(sleeptime<350)
            {
                sleeptime=sleeptime+30;
                add=add-2;
                if(sleeptime==350)
                {
                    add=1;  //��֤��ͷ�Ϊ1
                }
            }
        }
        Sleep(sleeptime);
        snakemove();
    }
}
 
void welcometogame()//��ʼ����
{
    Pos(40,12);
    printf("��ӭ����̰ʳ����Ϸ��");
    Pos(40,25);
    system("pause");
    system("cls");
    Pos(25,12);
    printf("�á�.��.��.���ֱ�����ߵ��ƶ��� F1 Ϊ���٣�2 Ϊ����\n");
    Pos(25,13);
    printf("���ٽ��ܵõ����ߵķ�����\n");
    system("pause");
    system("cls");
}
 
void endgame()//������Ϸ
{
     
    system("cls");
    Pos(24,12);
    if(endgamestatus==1)
    {
        printf("�Բ�����ײ��ǽ�ˡ���Ϸ����!");
    }
    else if(endgamestatus==2)
    {
        printf("�Բ�����ҧ���Լ��ˡ���Ϸ����!");
    }
    else if(endgamestatus==3)
    {
        printf("���Ѿ���������Ϸ��");
    }
    Pos(24,13);
    printf("���ĵ÷���%d\n",score);
    exit(0);
}
 
void gamestart()//��Ϸ��ʼ��
{
    system("mode con cols=100 lines=30");
    welcometogame();
    creatMap();
    initsnake();
    createfood();
}
 
int main()
{
    gamestart();
    gamecircle();
    endgame();
	return 0;
}
