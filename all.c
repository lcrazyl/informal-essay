
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
	printf("����������ʵ��=");
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
	system("titleԴ����.dracula��Ʒ");
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
{	printf("ѧ���ɼ�����ϵͳ\n");
	printf("************************************************\n");
	printf("          �밴1--->¼��ѧ���ɼ���¼\n");
	printf("          �밴2-->��������ѧ����¼\n");
	printf("          �밴3-->��ȡ����ѧ����¼\n");
	printf("          �밴4-->���ܳɼ��ݼ����\n");
	printf("          �밴5-->��ѧ�Ų�ѯ�ɼ�\n");
	printf("          �밴0-->�˳�\n");
	printf("*************************************************\n");
}
void student_new()
{
	int i;
	printf("������ѧ���ĸ���<1-50>:");
	scanf("%d,&num");
	printf("**********************************************\n");
	printf("ѧ��       ����      �Ա�         ��ѧ        Ӣ��       c����\n");
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
	printf("�ļ���ʧ��\n");
	exit(1);
}
for(i=0;i<num;i++)
fprintf(fp,"%-10ld%-11s%-9s%-8d%-8d%-9d%-8d\n",stu[i].id,stu[i].name,stu[i].sex,stu[i].math,stu[i].english,stu[i].c_program,stu[i].total);
printf("�ļ�����ɹ���\n");
fclose(fp);
}
void load()
{int i;
int n;
FILE*fp=fopen("c:\\score.txt","r");
if(fp==NULL)
{
	printf("�ļ���ʧ��\n");
	exit(1);
}
printf("�������¼����");
scanf("%d",&n);
for(i=0;i<n;i++);
fscanf(fp,""%-10ld%-11s%-9s%-8d%-8d%-9d%-8d\n",stu[i].id,stu[i].name,stu[i].sex,stu[i].math,stu[i].english,stu[i].c_program,stu[i].total);
fclose(fp);
printf("\n");
}
void show()
{int i;
printf("************************************************************\n");
printf("ѧ��       ����      �Ա�         ��ѧ        Ӣ��       c����\n");
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
	printf("����������ѧ�ţ�");
scanf("%d",&stunum);
for(i=0;i<num;i++)
{if(stu[i].id==stunum)
{printf("*******************************************************\n");
printf("ѧ��       ����      �Ա�         ��ѧ        Ӣ��       c����\n");
printf("************************************************************\n");
printf("%-10ld%-11s%-9s%-8d%-8d%-9d%-8d\n",stu[i].id,stu[i].name,stu[i].sex,stu[i].math,stu[i].english,stu[i].c_program,stu[i].total);
break;
}
}
if(i==num)
printf("������Ϣ������");}
main()
{
	int select;
int flag=1;
page_title():
while(flag)
{printf("������ѡ�");
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
 printf("������һԪ���η���ϵ��=");
 scanf("%lf%lf%lf",&a,&b,&c);
 if(b*b-4*a*c>=0)
 {z=sqrt(b*b-4*a*c);
 x1=(-b+z)/2*a;
 x2=(-b-z)/2*a;
 printf("x1=%f,x2=%f\n",x1,x2);}
 else
printf("��һԪ���η����޸�");
}*/


/*#include<stdio.h>
#include<math.h>
main()
{
	double a,b,c,p,s;
	printf("���������������߳�=");
	scanf("%lf%lf%lf",&a,&b,&c);
	if(a+b>c&&a+c>b&&b+c>a)
    {p=(a+b+c)/2;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("�����������=");
	printf("%.2f\n",s);}
	else
	 printf("������������\n");}*/


/*#include<stdio.h>
main()
{
	int x;
printf("��������ݣ�");
scanf("%d",&x);
if(x&4==0&&x&100!=0||x%400==0)
printf("����Ϊ����");
else
printf("���겻������");}*/
/*#include<stdio.h>
main()
{ int x,flag=1;
double a,b,c;
char t;	
while(flag==1)
{
	printf("��1-->�ӷ�����\t\t��2-->��������\n��3-->�˷�����\t\t��4-->��������\n");
printf("********************************************************\n");
scanf("%d",&x);
{
if(x==1)
{printf("��������Ҫ���������:");
scanf("%lf%c%lf",&a,&t,&b);
c=a+b;
printf("=%.3f\n",c);}
  else if(x==2)
{printf("��������Ҫ���������:");
scanf("%lf%c%lf",&a,&t,&b);
c=a-b;
printf("c=%.3f\n",c);}
          else if(x==3)
{printf("��������Ҫ���������:");
scanf("%lf%c%lf",&a,&t,&b);
c=a*b;
printf("c=%.3f\n",c);}
               else if(x==4)
{printf("��������Ҫ���������:");
scanf("%lf%c%lf",&a,&t,&b);
c=a/b;
printf("c=%.3f\n",c);}
                       else
						   printf("��������������������\n");
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
printf("�������ַ�=\n");
scanf("%c",&c);	
if(c>='a'&&c<='z'||c>='A'&&c<='Z')
printf("���ַ�Ϊ��ĸ\n");
else if(c>='0'&&c<='9')
printf("���ַ�Ϊ����\n");
else if(c==' ')
printf("���ַ�Ϊ�ո�\n");
}	
}*/
/*#include<stdio.h>
main()
{
	int flag=1;
	double y,x;
	while(flag==1)
	{
	printf("������x��ֵ=");
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
	printf("��ѡ����Ҫѧϰ�����ݣ�\n");
	printf("��1--->C����\t��2-->webǰ��\n��3-->Java\t��4-->VB\n");
	scanf("%d",&x);
	printf("***********************************************\n");
	if(x==1)
	{
	printf("��ѡ���ΪC���Կγ̣������ѡ������ѧϰ��Ŀ��\n");
	printf("5-->˳��ṹ�������\t6-->ѡ��ṹ�������\n7-->ѭ���ṹ�������\t8-->����\n");
	scanf("%d",&t);
	printf("ѡ��ɹ����뿪ʼ����ѧϰ\n");
	printf("***********************************************\n");
	}
	else if(x==2)
	{printf("��ѡ���Ϊwebǰ�˿γ̣������ѡ������ѧϰ��Ŀ��\n");	
	printf("9-->html����\t10-->css����\n11-->JavaScript�������\t12-->JavaScript����ģ��\n");
	scanf("%d",&t);
	printf("ѡ��ɹ����뿪ʼ����ѧϰ\n");
	printf("***********************************************\n");
	}
	else if(x==3)
	{
		printf("��ѡ���ΪJava�γ̣������ѡ������ѧϰ��Ŀ��\n");
		
	printf("13-->˳��ṹ�������\t14-->ѡ��ṹ�������\n15-->ѭ���ṹ�������\t16-->����\n");
	scanf("%d",&t);
	printf("ѡ��ɹ����뿪ʼ����ѧϰ\n");
	printf("***********************************************\n");
	}
	else if(x==4)
	{
		printf("��ѡ���ΪVB�γ̣������ѡ������ѧϰ��Ŀ��\n");	
	printf("17-->˳��ṹ�������\t18-->ѡ��ṹ�������\n19-->ѭ���ṹ�������\t20-->����\n");
	scanf("%d",&t);
	printf("ѡ��ɹ����뿪ʼ����ѧϰ\n");
	printf("***********************************************\n");
	}
	else
		printf("�������������������");
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
/* for1-10��
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
	printf("���������Ĺ���=");
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
printf("�����ù���=");
printf("%f\n",num);
}*/
/*#include<stdio.h>
main(){
 double m1,m2,m3,num,p1=6.5,p2=7.85,p3=12.1,z,o,num1,num2;
 int a,b,c,d;
 printf("��ӭ����!\n");
 printf("����̨��007\t\t���ţ�15652282\t\t����Ա������\n");
printf("�����빺��ţ������=");
 scanf("%d",&a);
 m1=a*p1;
 printf("�۸�%f\n",m1);

 printf("�����빺�򼦵�����=");
 scanf("%d",&b);
 m2=b*p2;
 printf("�۸�%f\n",m2);

 printf("�����빺���̷�����=");
 scanf("%d",&c);
 m3=c*p3;
 printf("�۸�%f\n",m3);

 printf("Ӧ�ս��Ϊ:");
 num=m1+m2+m3;
 printf("%f\n",num);
 printf("�Ƿ���");
 if(d==1)
printf("ʵ�ս��Ϊ��");
 scanf("%lf",&z);
 printf("Ӧ����:");
 o=z-num;
 printf("%f\n",o);
}*/

