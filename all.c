
/*#include<stdio.h>
main()
{
	char a='B';
	a=getchar();
		putchar(a+32);
		putchar('\n');
}*/

/*#include<stdio.h>
main()
{
	double x,y,z;
	printf("请输入两个实数=");
	scanf("%lf%lf",&x,&y);
z=x+y;
printf("%f\n",z);
} */
/*#include<stdio.h>
#include<math.h>
#include<windows.h>
int main()
{
	float x, y, z, f;
	system("title源世界.dracula出品");
	for (y = 1.5f; y > -1.5f; y -= 0.1f)
	{
		for (x = -1.5f; x < 1.5f; x += 0.05f)
		{
			z = x * x + y * y - 1;
			f = z * z * z - x * x * y * y * y;
			putchar(f <= 0.0f ? ".:-=*#%@"[(int)(f * -8.0f)] : "");
		}
		putchar('\n');
	}
	getchar ();
	return 0;
}*/
/*#include<stdio.h>
#include<stdlib.h>
int num;
struct STUDENT
{
	long id;
	char name[20];
	char sex[10];
	int math;
    int english;
	int c_program;
	int total;
}stu[50];
void page_title()
{	printf("学生成绩管理系统\n");
	printf("************************************************\n");
	printf("          请按1--->录入学生成绩记录\n");
	printf("          请按2-->保存所有学生记录\n");
	printf("          请按3-->读取所有学生记录\n");
	printf("          请按4-->按总成绩递减输出\n");
	printf("          请按5-->按学号查询成绩\n");
	printf("          请按0-->退出\n");
	printf("*************************************************\n");
}
void student_new()
{
	int i;
	printf("请输入学生的个数<1-50>:");
	scanf("%d,&num");
	printf("**********************************************\n");
	printf("学号       姓名      性别         数学        英语       c语言\n");
    printf("**********************************************\n");
	for(i=0;i<num;i++)
	{scanf("%ld%s%s%d%d%d",&stu[i].id,&stu[i].name,&stu[i].sex,&stu[i].math,&stu[i].english,&stu[i].c_program);
	stu[i].total=stu[i].c_prigram+stu[i].math+stu[i].english;
	printf("----------------------------------------------------\n");}
}
void save()
{int i
FILE*fp=fopen("c:\\score.txt","w+");
if(fp==NULL)
{
	printf("文件打开失败\n");
	exit(1);
}
for(i=0;i<num;i++)
fprintf(fp,"%-10ld%-11s%-9s%-8d%-8d%-9d%-8d\n",stu[i].id,stu[i].name,stu[i].sex,stu[i].math,stu[i].english,stu[i].c_program,stu[i].total);
printf("文件保存成功！\n");
fclose(fp);
}
void load()
{int i;
int n;
FILE*fp=fopen("c:\\score.txt","r");
if(fp==NULL)
{
	printf("文件打开失败\n");
	exit(1);
}
printf("请输入记录数：");
scanf("%d",&n);
for(i=0;i<n;i++);
fscanf(fp,""%-10ld%-11s%-9s%-8d%-8d%-9d%-8d\n",stu[i].id,stu[i].name,stu[i].sex,stu[i].math,stu[i].english,stu[i].c_program,stu[i].total);
fclose(fp);
printf("\n");
}
void show()
{int i;
printf("************************************************************\n");
printf("学号       姓名      性别         数学        英语       c语言\n");
printf("************************************************************\n");
for(i=0;i<num;i++);
{
printf("%-10ld%-11s%-9s%-8d%-8d%-9d%-8d\n",stu[i].id,stu[i].name,stu[i].sex,stu[i].math,stu[i].english,stu[i].c_program,stu[i].total);
printf("-------------------------------------------\n");
}
}
void score_sort()
{
	int i,j;
	struct STUDENT t;
	for(i=0;i<num-1;i++)
	{for(j=0;j<num-1;j++)
	{if(stu[j].total<stu[j+1].total)
	{t=stu[j];stu[j]=stu[j+1];stu[j+1]=t;}
	}
	}
}
void score_scarch()
{
	int i=0;
	long stunum;
	printf("请输入您的学号：");
scanf("%d",&stunum);
for(i=0;i<num;i++)
{if(stu[i].id==stunum)
{printf("*******************************************************\n");
printf("学号       姓名      性别         数学        英语       c语言\n");
printf("************************************************************\n");
printf("%-10ld%-11s%-9s%-8d%-8d%-9d%-8d\n",stu[i].id,stu[i].name,stu[i].sex,stu[i].math,stu[i].english,stu[i].c_program,stu[i].total);
break;
}
}
if(i==num)
printf("该生信息不存在");}
main()
{
	int select;
int flag=1;
page_title():
while(flag)
{printf("请输入选项：");
switch(select)
{
case1:student_new();break;
case2:save();break;
case3:load();break;
case4:score_sort();show();break;
case5:score_search();break;
case0:flag=0;break;
default:break;
}
}
}
}*/

/*#include<stdio.h>
main()
{
	char x;
	x=getchar();
	if(x>='a'&&x<='z')
	x-=32;
	printf("%c\n",x);
}*/


/*#include<stdio.h>
#include<math.h>
main()
{
 double x1,x2,a,b,c,z;
 printf("请输入一元二次方程系数=");
 scanf("%lf%lf%lf",&a,&b,&c);
 if(b*b-4*a*c>=0)
 {z=sqrt(b*b-4*a*c);
 x1=(-b+z)/2*a;
 x2=(-b-z)/2*a;
 printf("x1=%f,x2=%f\n",x1,x2);}
 else
printf("该一元二次方程无根");
}*/


/*#include<stdio.h>
#include<math.h>
main()
{
	double a,b,c,p,s;
	printf("请输入三角形三边长=");
	scanf("%lf%lf%lf",&a,&b,&c);
	if(a+b>c&&a+c>b&&b+c>a)
    {p=(a+b+c)/2;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("该三角形面积=");
	printf("%.2f\n",s);}
	else
	 printf("构不成三角形\n");}*/


/*#include<stdio.h>
main()
{
	int x;
printf("请输入年份：");
scanf("%d",&x);
if(x&4==0&&x&100!=0||x%400==0)
printf("该年为闰年");
else
printf("该年不是闰年");}*/
/*#include<stdio.h>
main()
{ int x,flag=1;
double a,b,c;
char t;	
while(flag==1)
{
	printf("按1-->加法运算\t\t按2-->减法运算\n按3-->乘法运算\t\t按4-->除法运算\n");
printf("********************************************************\n");
scanf("%d",&x);
{
if(x==1)
{printf("请输入您要计算的问题:");
scanf("%lf%c%lf",&a,&t,&b);
c=a+b;
printf("=%.3f\n",c);}
  else if(x==2)
{printf("请输入您要计算的问题:");
scanf("%lf%c%lf",&a,&t,&b);
c=a-b;
printf("c=%.3f\n",c);}
          else if(x==3)
{printf("请输入您要计算的问题:");
scanf("%lf%c%lf",&a,&t,&b);
c=a*b;
printf("c=%.3f\n",c);}
               else if(x==4)
{printf("请输入您要计算的问题:");
scanf("%lf%c%lf",&a,&t,&b);
c=a/b;
printf("c=%.3f\n",c);}
                       else
						   printf("您输入有误，请重新输入\n");
					   printf("********************************************************\n");
} 
}
}*/
/*#include<stdio.h>
main()
{
	char c;
	int flag=1;
	while(flag==1)
	{
printf("请输入字符=\n");
scanf("%c",&c);	
if(c>='a'&&c<='z'||c>='A'&&c<='Z')
printf("该字符为字母\n");
else if(c>='0'&&c<='9')
printf("该字符为数字\n");
else if(c==' ')
printf("该字符为空格\n");
}	
}*/
/*#include<stdio.h>
main()
{
	int flag=1;
	double y,x;
	while(flag==1)
	{
	printf("请输入x的值=");
	scanf("%lf",&x);
	{
	if(x<0)
		y=x;
	else if(x>=0&&x<10)
		y=2*x-1;
	else if(x>=10&&x<20)
		y=3*x-11;
	else if(x>=20&&x<30)
		y=4*x+5;
else
y=5*x-8;
printf("y=%f\n",y);
}
	}
}*/
/*#include<stdio.h>
main()
{
	int x,t,flag=1;
	while(flag==1)
	{
	printf("请选择您要学习的内容：\n");
	printf("按1--->C语言\t按2-->web前端\n按3-->Java\t按4-->VB\n");
	scanf("%d",&x);
	printf("***********************************************\n");
	if(x==1)
	{
	printf("您选择的为C语言课程，请继续选择您的学习项目：\n");
	printf("5-->顺序结构程序设计\t6-->选择结构程序设计\n7-->循环结构程序设计\t8-->数组\n");
	scanf("%d",&t);
	printf("选择成功，请开始您的学习\n");
	printf("***********************************************\n");
	}
	else if(x==2)
	{printf("您选择的为web前端课程，请继续选择您的学习项目：\n");	
	printf("9-->html基础\t10-->css基础\n11-->JavaScript程序设计\t12-->JavaScript对象模型\n");
	scanf("%d",&t);
	printf("选择成功，请开始您的学习\n");
	printf("***********************************************\n");
	}
	else if(x==3)
	{
		printf("您选择的为Java课程，请继续选择您的学习项目：\n");
		
	printf("13-->顺序结构程序设计\t14-->选择结构程序设计\n15-->循环结构程序设计\t16-->数组\n");
	scanf("%d",&t);
	printf("选择成功，请开始您的学习\n");
	printf("***********************************************\n");
	}
	else if(x==4)
	{
		printf("您选择的为VB课程，请继续选择您的学习项目：\n");	
	printf("17-->顺序结构程序设计\t18-->选择结构程序设计\n19-->循环结构程序设计\t20-->数组\n");
	scanf("%d",&t);
	printf("选择成功，请开始您的学习\n");
	printf("***********************************************\n");
	}
	else
		printf("您输入错误，请重新输入");
	printf("***********************************************\n");}
}*/
/*switch
#include<stdio.h>
int main(void)
{
	char answer=0;
	printf("Enter Y or N \n");
	scanf("%c",&answer);
	switch(answer)
	{
	case'y':case'Y':
		printf("you responded in the affirmative\n");
		break;
	case'n':case'N':
		printf("you responded in the affirmative\n");
		break;
	default:
		printf("you did not respond correctly\n");
		break;
	}
	return 0;
} */
/* for1-10：
#include<stdio.h>
int main(void)
{
	int count=1;
	for(;count<=10;count++)
	{
		printf("%d\n",count);
	}
	printf("\After the loop count has the value %d.\n",count);
}*/

/*#include<stdio.h>
#include<time.h>
#include<stdlib.h>
main()
{
	int chosen = 0;
	srand(time(NULL));
	chosen = rand();
	int limit = 10;
	chosen = 1 + rand() % limit;
	printf("%d\n",chosen);
}*/

/*include<stdio.h>
main()
{
	double m,s,num;
	printf("请输入您的工资=");
	scanf("%lf",&m);
	if(m<5000)
		s=0;
	else if(m<8000)
		s=(m-5000)*0.03;
	else if(m<17000)
s=(m-5000)*0.1;
else if(m<30000)
s=
else if(m<40000)
s=
else if(m<60000)
s=
else if(m<85000)
s=
else
s=
num=m-s;
printf("您所得工资=");
printf("%f\n",num);
}*/
/*#include<stdio.h>
main(){
 double m1,m2,m3,num,p1=6.5,p2=7.85,p3=12.1,z,o,num1,num2;
 int a,b,c,d;
 printf("欢迎光临!\n");
 printf("收银台：007\t\t单号：15652282\t\t收银员：张三\n");
printf("请输入购买牛奶数量=");
 scanf("%d",&a);
 m1=a*p1;
 printf("价格：%f\n",m1);

 printf("请输入购买鸡蛋数量=");
 scanf("%d",&b);
 m2=b*p2;
 printf("价格：%f\n",m2);

 printf("请输入购买奶粉数量=");
 scanf("%d",&c);
 m3=c*p3;
 printf("价格：%f\n",m3);

 printf("应收金额为:");
 num=m1+m2+m3;
 printf("%f\n",num);
 printf("是否有");
 if(d==1)
printf("实收金额为：");
 scanf("%lf",&z);
 printf("应找零:");
 o=z-num;
 printf("%f\n",o);
}*/

