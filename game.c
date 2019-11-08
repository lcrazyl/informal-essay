/*飞机大战（hit the plane）
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

	printf("\t\t\t方向控制\n\n"
	"\t\t\t上↑\n\n"
	"\t\t\t下↓\n\n"
	"\t\t\t左←\n\n"
	"\t\t\t右→\n\n"
	"\t\t\t子弹 空格\n\n\n"
	"\t\t\t退出请按Esc\n\n\n");
	gotoxy(0,0);
}

void byebye()
{
	if((x==d&&y==r)||(x==d1&&y==r1)||(x==d2&&y==r2))
	{ gotoxy(1,3);
	printf(" !!!游戏结束!!!\n"
		"*****************\n"
		"您的总得分:%d\n\n"
		"敌机数：%d\n"
		"歼敌数：%d\n"
		"命中率：%.0f %%\n"
		"******************\n",f,m,j,((float)j/(float)m)*100);
while(!kbhit())	{
.		Sleep(500);
			gotoxy(1,12);
printf("继续请按任意键\n\n\n");
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
	printf("Ж");
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
gotoxy(d,r); printf("Ψ");
gotoxy(d1,r1);printf("ж");
gotoxy(d2,r2);printf("♀");
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
		gotoxy(x,y);printf("Ж");
			}break;
	case Down:if(y!=18)
			  {gotoxy(x,y);printf(" ");
		y++;
		gotoxy(x,y);printf("Ж");
			  }break;
	case Left:if(x!=1)
			  {gotoxy(x,y);printf(" ");
		x--;
		gotoxy(x,y);printf("Ж");
			  }break;
	case Right:if(x!=18)
			   {gotoxy(x,y);printf(" ");
		x++;
		gotoxy(x,y);printf("Ж");
			   }break;
	case Kong:{bx=y;
		for(by=y;by>1;)
		{by--;
		gotoxy(x,by);printf("θ");
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
	printf("Ж");

	gotoxy(22,2);
	printf("分数");
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
		printf("■");
		Pos(i,26);
		printf("■");
	}
	for(i=1;i<26;i++)
	{
		Pos(0,i);
		printf("■");
		Pos(56,i);
		printf("■");
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
		printf("■");
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
	printf("■");
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
#define R 4       //蛇的状态，U：上 ；D：下；L:左 R：右
 
typedef struct SNAKE //蛇身的一个节点
{
    int x;
    int y;
    struct SNAKE *next;
}snake;
 
//全局变量//
int score=0,add=10;//总得分与每次吃食物得分。
int status,sleeptime=200;//每次运行的时间间隔
snake *head, *food;//蛇头指针，食物指针
snake *q;//遍历蛇的时候用到的指针
int endgamestatus=0; //游戏结束的情况，1：撞到墙；2：咬到自己；3：主动退出游戏。
 
//声明全部函数//
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
 
void Pos(int x,int y)//设置光标位置
{
    COORD pos;
	HANDLE hOutput;
    pos.X=x;
    pos.Y=y;
    hOutput=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hOutput,pos);
}
 
void creatMap()//创建地图
{
    int i;
    for(i=0;i<58;i+=2)//打印上下边框
    {
        Pos(i,0);
        printf("■");
        Pos(i,26);
        printf("■");
    }
    for(i=1;i<26;i++)//打印左右边框
    {
        Pos(0,i);
        printf("■");                        
        Pos(56,i);
        printf("■");        
    }
}
 
void initsnake()//初始化蛇身
{
    snake *tail;
    int i;
    tail=(snake*)malloc(sizeof(snake));//从蛇尾开始，头插法，以x,y设定开始的位置//
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
    while(tail!=NULL)//从头到为，输出蛇身
    {
        Pos(tail->x,tail->y);
        printf("■");
        tail=tail->next;
    }
}
 
int biteself()//判断是否咬到了自己
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
 
void createfood()//随机出现食物
{
    snake *food_1;
    srand((unsigned)time(NULL));
    food_1=(snake*)malloc(sizeof(snake));
    while((food_1->x%2)!=0)    //保证其为偶数，使得食物能与蛇头对其
    {
        food_1->x=rand()%52+2;
    }
    food_1->y=rand()%24+1;
    q=head;
    while(q->next==NULL)
    {
        if(q->x==food_1->x && q->y==food_1->y) //判断蛇身是否与食物重合
        {
            free(food_1);
            createfood();
        }
        q=q->next;
    }
    Pos(food_1->x,food_1->y);
    food=food_1;
    printf("■");
}
 
void cantcrosswall()//不能穿墙
{  
    if(head->x==0 || head->x==56 ||head->y==0 || head->y==26)
    {
        endgamestatus=1;
        endgame();
    }
}
 
void snakemove()//蛇前进,上U,下D,左L,右R
{
	snake * nexthead;
    cantcrosswall();
    
    nexthead=(snake*)malloc(sizeof(snake));
    if(status==U)
    {
        nexthead->x=head->x;
        nexthead->y=head->y-1;
        if(nexthead->x==food->x && nexthead->y==food->y)//如果下一个有食物//
        {
            nexthead->next=head;
            head=nexthead;
            q=head;
            while(q!=NULL)
            {
                Pos(q->x,q->y);
                printf("■");
                q=q->next;
            }
            score=score+add;
            createfood();
        }
        else                                               //如果没有食物//
        {
            nexthead->next=head;
            head=nexthead;
            q=head;
            while(q->next->next!=NULL)
            {
                Pos(q->x,q->y);
                printf("■");
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
        if(nexthead->x==food->x && nexthead->y==food->y)  //有食物
        {
            nexthead->next=head;
            head=nexthead;
            q=head;
            while(q!=NULL)
            {
                Pos(q->x,q->y);
                printf("■");
                q=q->next;
            }
            score=score+add;
            createfood();
        }
        else                               //没有食物
        {
            nexthead->next=head;
            head=nexthead;
            q=head;
            while(q->next->next!=NULL)
            {
                Pos(q->x,q->y);
                printf("■");
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
        if(nexthead->x==food->x && nexthead->y==food->y)//有食物
        {
            nexthead->next=head;
            head=nexthead;
            q=head;
            while(q!=NULL)
            {
                Pos(q->x,q->y);
                printf("■");
                q=q->next;
            }
            score=score+add;
            createfood();
        }
        else                                //没有食物
        {
            nexthead->next=head;
            head=nexthead;
            q=head;
            while(q->next->next!=NULL)
            {
                Pos(q->x,q->y);
                printf("■");
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
        if(nexthead->x==food->x && nexthead->y==food->y)//有食物
        {
            nexthead->next=head;
            head=nexthead;
            q=head;
            while(q!=NULL)
            {
                Pos(q->x,q->y);
                printf("■");
                q=q->next;
            }
            score=score+add;
            createfood();
        }
        else                                         //没有食物
        {
            nexthead->next=head;
            head=nexthead;
            q=head;
            while(q->next->next!=NULL)
            {
                Pos(q->x,q->y);
                printf("■");
                q=q->next;        
            }
            Pos(q->next->x,q->next->y);
            printf("  ");
            free(q->next);
            q->next=NULL;
        }
    }
    if(biteself()==1)       //判断是否会咬到自己
    {
        endgamestatus=2;
        endgame();
    }
}
 
void pause()//暂停
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
 
void gamecircle()//控制游戏        
{

    Pos(64,15);
    printf("不能穿墙，不能咬到自己\n");
    Pos(64,16);
    printf("用↑.↓.←.→分别控制蛇的移动.");
    Pos(64,17);
    printf("F1 为加速，F2 为减速\n");
    Pos(64,18);
    printf("ESC ：退出游戏.space：暂停游戏.");
    Pos(64,20);
	status=R;
    while(1)
    {
        Pos(64,10);
        printf("得分：%d  ",score);
        Pos(64,11);
        printf("每个食物得分：%d分",add);
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
                    add=2;//防止减到1之后再加回来有错
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
                    add=1;  //保证最低分为1
                }
            }
        }
        Sleep(sleeptime);
        snakemove();
    }
}
 
void welcometogame()//开始界面
{
    Pos(40,12);
    printf("欢迎来到贪食蛇游戏！");
    Pos(40,25);
    system("pause");
    system("cls");
    Pos(25,12);
    printf("用↑.↓.←.→分别控制蛇的移动， F1 为加速，2 为减速\n");
    Pos(25,13);
    printf("加速将能得到更高的分数。\n");
    system("pause");
    system("cls");
}
 
void endgame()//结束游戏
{
     
    system("cls");
    Pos(24,12);
    if(endgamestatus==1)
    {
        printf("对不起，您撞到墙了。游戏结束!");
    }
    else if(endgamestatus==2)
    {
        printf("对不起，您咬到自己了。游戏结束!");
    }
    else if(endgamestatus==3)
    {
        printf("您已经结束了游戏。");
    }
    Pos(24,13);
    printf("您的得分是%d\n",score);
    exit(0);
}
 
void gamestart()//游戏初始化
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
