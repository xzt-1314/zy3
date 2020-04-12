#include <bits/stdc++.h>
using namespace std;
typedef struct speed
{
	string name;
	string time;
}speed;
void menu();
void primary();
void time1(int a,int b,int c);
void time2(int a,int b,int c);
void time3(int a,int b,int c);
void look();
void clean_1(); //清屏 
void del();
void intermediate();
void senior();
int main()
{
	menu(); 
} 
void time1(int a,int b,int c)
{
	time_t tt = time(NULL);//这句返回的只是一个时间cuo
	tm* t= localtime(&tt);
	int a1,b1,c1;
	a1=t->tm_hour;b1=t->tm_min;c1=t->tm_sec;
	if(c1<c){
		c1=c1+60-c;
		b1=b1-1;
	}
	if(c1>=c)
	{
		c1=c1-c;
	}
	if(b1<b)
	{
		b1=b1+60-b;
		a1=a1-1;
	}
	if(b1>=b)
	{
		b1=b1-b;
	}
	a1=a1-a;
	cout<<"太棒了！你完成了本次计算！用时时间为："<<a1<<':'<<b1<<':'<<c1<<endl;
	ofstream out("data1.txt",ios::app);
	cout<<"请输入名字：" ;
	string name;
	cin>>name;
	out<<name<<' '<<a1<<':'<<b1<<':'<<c1<<endl;
	out.close();
}
void time2(int a,int b,int c)
{
	time_t tt = time(NULL);//这句返回的只是一个时间cuo
	tm* t= localtime(&tt);
	int a1,b1,c1;
	a1=t->tm_hour;b1=t->tm_min;c1=t->tm_sec;
	if(c1<c){
		c1=c1+60-c;
		b1=b1-1;
	}
	if(c1>=c)
	{
		c1=c1-c;
	}
	if(b1<b)
	{
		b1=b1+60-b;
		a1=a1-1;
	}
	if(b1>=b)
	{
		b1=b1-b;
	}
	a1=a1-a;
	cout<<"太棒了！你完成了本次计算！用时时间为："<<a1<<':'<<b1<<':'<<c1<<endl;
	ofstream out("data2.txt",ios::app);
	cout<<"请输入名字：" ;
	string name;
	cin>>name;
	out<<name<<' '<<a1<<':'<<b1<<':'<<c1<<endl;
	out.close();
}
void time3(int a,int b,int c)
{
	time_t tt = time(NULL);//这句返回的只是一个时间cuo
	tm* t= localtime(&tt);
	int a1,b1,c1;
	a1=t->tm_hour;b1=t->tm_min;c1=t->tm_sec;
	if(c1<c){
		c1=c1+60-c;
		b1=b1-1;
	}
	if(c1>=c)
	{
		c1=c1-c;
	}
	if(b1<b)
	{
		b1=b1+60-b;
		a1=a1-1;
	}
	if(b1>=b)
	{
		b1=b1-b;
	}
	a1=a1-a;
	cout<<"太棒了！你完成了本次计算！用时时间为："<<a1<<':'<<b1<<':'<<c1<<endl;
	ofstream out("data3.txt",ios::app);
	cout<<"请输入名字：" ;
	string name;
	cin>>name;
	out<<name<<' '<<a1<<':'<<b1<<':'<<c1<<endl;
	out.close();
}
void primary()
{
	clean_1();
	cout<<"即将开始加减法运算"<<endl;
	srand(int(time(0)));
	int i,a,b,sum,sum1,pol,poo=0,a1,b1,c1;
	int oor;
   /*
   i 循环判断
   a、b 加数和被加数
   sum 系统计算结果 
   sum1 人工输入结果
   pol 判断加减法
   poo 判断是否完成训练 
   a1、b1、c1 用于记录当前时间 
   oor 是否继续 
   */
	//计时器开始 
	time_t tt = time(NULL);//这句返回的只是一个时间cuo
	tm* t= localtime(&tt);
	a1=t->tm_hour;b1=t->tm_min;c1=t->tm_sec;
	//记录了当前时间 
	while(1)
	{
		for(i=0;i<20;i++)
		{
			a=rand()%10000;
			b=rand()%10000;
			pol=rand()%100;//随机数大于50为加，小于50为减 
			if(pol<50)
			{
				if(a>b)
				{
					cout<<a<<'-'<<b<<'=';
					sum=a-b;
					cin>>sum1;
					if(sum!=sum1)
					{
						cout<<"真遗憾！你失败了！请再接再厉！"<<endl;
						poo++;
						break; 
					}
				}
				else
				{
					cout<<b<<'-'<<a<<'=';
					sum=b-a;
					cin>>sum1;
					if(sum!=sum1)
					{
						cout<<"真遗憾！你失败了！请再接再厉！"<<endl;
						poo++;
						break; 
					}
				}
			}
			else
			{
				cout<<a<<'+'<<b<<'=';
				sum=a+b;
				cin>>sum1;
				if(sum!=sum1)
				{
					cout<<"真遗憾！你失败了！请再接再厉！"<<endl;
					poo++;
					break; 
				}
			}
		}
		if(poo==0)
		{
			time1(a1,b1,c1);
		}
		cout<<"继续请输入1，返回菜单请输入2，其他任意键则退出。"<<endl;
		cin>>oor;
		if(oor==1)
			clean_1();
		if(oor==2)
		{
			menu();
			break;
		}
		if(oor>2||oor==0)
		{
			break;
		}
	}
}
void intermediate()
{
	clean_1();
	cout<<"即将开始乘除法运算"<<endl<<"除法格式为：16/3="<<endl<<"你需要输入 5 1"<<endl<<"即：商 余数"<<endl; 
	srand(int(time(0)));
	int i,a,b,sum,sum1,pol,poo=0,a1,b1,c1,sum2,sum3,c;
	int oor;
   /*
   i 循环判断
   a、b 加数和被加数
   sum/sum3 系统计算结果 
   sum1 人工输入结果
   sum2 余数 
   pol 判断加减法
   poo 判断是否完成训练 
   a1、b1、c1 用于记录当前时间 
   oor 是否继续 
   */
	//计时器开始 
	time_t tt = time(NULL);//这句返回的只是一个时间cuo
	tm* t= localtime(&tt);
	a1=t->tm_hour;b1=t->tm_min;c1=t->tm_sec;
	//记录了当前时间 
	while(1)
	{
		for(i=0;i<20;i++)
		{
			a=rand()%100;
			b=rand()%100;
			c=rand()%10;
			if(c==0)
			c++;
			pol=rand()%100;//随机数大于50为*，小于50为/
			if(pol>50)
			{
				cout<<a<<'*'<<b<<'=';
				sum=a*b;
				cin>>sum1;
				if(sum!=sum1)
				{
					cout<<"真遗憾！你失败了！请再接再厉！"<<endl;
					poo++;
					break; 
				}
			}
			else
			{
					cout<<b<<'/'<<c<<'=';
					sum=b/c;
					sum3=b%c;
					cin>>sum1>>sum2;
					if(sum!=sum1||sum3!=sum2)
					{
						cout<<"真遗憾！你失败了！请再接再厉！"<<endl;
						poo++;
						break; 
					}
				}
			
		}
		if(poo==0)
		{
			time2(a1,b1,c1);
		}

		cout<<"继续请输入1，返回菜单请输入2,其他任意键则退出。"<<endl;
		cin>>oor;
		if(oor==1)
			clean_1();
		else if(oor==2)
		{
			menu();
			break;
		}
		if(oor!=1||oor==0)
		{
			break;
		}
	}
}
void senior()
{
	clean_1();
	cout<<"即将开始加减乘除混合运算法运算"<<endl;
	srand(int(time(0)));
	int i,a,b,sum,sum1,pol,poo=0,a1,b1,c1,c,d,e,sum2,sum3;
	int oor;
   /*
   i 循环判断
   a、b 加数和被加数
   sum 系统计算结果 
   sum1 人工输入结果
   pol 判断加减法
   poo 判断是否完成训练 
   a1、b1、c1 用于记录当前时间 
   oor 是否继续 
   */
	//计时器开始 
	time_t tt = time(NULL);//这句返回的只是一个时间cuo
	tm* t= localtime(&tt);
	a1=t->tm_hour;b1=t->tm_min;c1=t->tm_sec;
	//记录了当前时间 
	while(1)
	{
		for(i=0;i<20;i++)
		{
			pol=rand()%200;
			if(pol<25)
			{
				a=rand()%10000;
				b=rand()%10000;
				if(a>b)
				{
					cout<<a<<'-'<<b<<'=';
					sum=a-b;
					cin>>sum1;
					if(sum!=sum1)
					{
						cout<<"真遗憾！你失败了！请再接再厉！"<<endl;
						poo++;
						break; 
					}
				}
				else
				{
					cout<<b<<'-'<<a<<'=';
					sum=b-a;
					cin>>sum1;
					if(sum!=sum1)
					{
						cout<<"真遗憾！你失败了！请再接再厉！"<<endl;
						poo++;
						break; 
					}
				}
			}
			if(pol>=25&&pol<50)
			{
				a=rand()%10000;
				b=rand()%10000;
				cout<<a<<'+'<<b<<'=';
				sum=a+b;
				cin>>sum1;
				if(sum!=sum1)
				{
					cout<<"真遗憾！你失败了！请再接再厉！"<<endl;
					poo++;
					break; 
				}
			}
			if(pol>=50&&pol<100)
			{
				a=rand()%100;
				b=rand()%100;
				cout<<a<<'*'<<b<<'=';
				sum=a*b;
				cin>>sum1;
				if(sum!=sum1)
				{
					cout<<"真遗憾！你失败了！请再接再厉！"<<endl;
					poo++;
					break; 
				}
			}
			if(pol>=100&&pol<150)
			{
					b=rand()%100;
					c=rand()%10;
					cout<<b<<'/'<<c<<'=';
					sum=b/c;
					sum3=b%c;
					cin>>sum1>>sum2;
					if(sum!=sum1||sum3!=sum2)
					{
						cout<<"真遗憾！你失败了！请再接再厉！"<<endl;
						poo++;
						break; 
					}
				}
			if(pol>=150)
			{
				a=rand()%10000;
				b=rand()%10000;
				c=rand()%100;
				d=rand()%10;
				if(d==0)
				d++;
				if(d>8)
				{
					cout<<a<<'+'<<b<<'-'<<c<<'=';
					sum=a+b-c;
					cin>>sum1;
					if(sum!=sum1)
					{
						cout<<"真遗憾！你失败了！请再接再厉！"<<endl;
						poo++;
						break; 
					}
				}
				else if(d>6)
				{
					cout<<a<<'-'<<c<<'+'<<b<<'=';
					sum=a+b-c;
					cin>>sum1;
					if(sum!=sum1)
					{
						cout<<"真遗憾！你失败了！请再接再厉！"<<endl;
						poo++;
						break; 
					}
				}
				else if(d>4)
				{
					cout<<c<<'*'<<d<<'+'<<a<<'=';
					sum=c*d+a;
					cin>>sum1;
					if(sum!=sum1)
					{
						cout<<"真遗憾！你失败了！请再接再厉！"<<endl;
						poo++;
						break; 
					}
				}
				else
				{
					cout<<c<<'*'<<d<<'-'<<a<<'=';
					sum=c*d-a;
					cin>>sum1;
					if(sum!=sum1)
					{
						cout<<"真遗憾！你失败了！请再接再厉！"<<endl;
						poo++;
						break; 
					}
				}
				}	
			
			}
			if(poo==0)
			{
				time3(a1,b1,c1);
			}
			cout<<"继续请输入1，返回菜单请输入2，其他任意键则退出。"<<endl;
			cin>>oor;
			if(oor==1)
				clean_1();
			else if(oor=2)
			{
				menu();
				break;
			}
			if(oor!=1||oor==0)
			{
				break;
			}
	}
 } 
void look()
{
	cout<<"请输入："<<endl<<"1、初级"<<endl<<"2、中级"<<endl<<"3、高级"<<endl;
	int a;
	speed b[100],c;
	int i=0,m;
	cin>>a;
	if(a==1)
	{
		ifstream data1("data1.txt");
		while(!data1.eof())
		{
			data1>>b[i].name>>b[i].time;
			i++;
		}
		int n,m;
		for(n=0;n<i;n++)
			for(m=0;m<i;m++)
			{
				if(b[m].time<b[m+1].time)
				{
					c=b[m+1];
					b[m+1]=b[m];
					b[m]=c;
				}
			}
		while(i!=0)
		{
			i--;
			cout<<b[i].name<<b[i].time<<endl;
		}
		cout<<"输入："<<endl<<"1、返回菜单"<<endl<<"2、继续查看"<<endl;
		cin>>m;
		if(m==1)
			{
	 	clean_1();
	 	menu();
	 }
		else if(m==2)
			look();
	}
	else if(a==2)
	{
		ifstream data1("data2.txt");
		while(!data1.eof())
		{
			data1>>b[i].name>>b[i].time;
			i++;
		}
		int n,m;
		for(n=0;n<i;n++)
			for(m=0;m<i;m++)
			{
				if(b[m].time<b[m+1].time)
				{
					c=b[m+1];
					b[m+1]=b[m];
					b[m]=c;
				}
			}
		while(i!=0)
		{
			i--;
			cout<<b[i].name<<b[i].time<<endl;
		}
		cout<<"输入："<<endl<<"1、返回菜单"<<endl<<"2、继续查看"<<endl;
		cin>>m;
		if(m==1)
		{
	 	clean_1();
	 	menu();
	 }
		else if(m==2)
			look();
	}
	else if(a==3)
	{
		ifstream data1("data3.txt");
		while(!data1.eof())
		{
			data1>>b[i].name>>b[i].time;
			i++;
		}
		int n,m;
		for(n=0;n<i;n++)
			for(m=0;m<i;m++)
			{
				if(b[m].time<b[m+1].time)
				{
					c=b[m+1];
					b[m+1]=b[m];
					b[m]=c;
				}
			}
		while(i!=0)
		{
			i--;
			cout<<b[i].name<<b[i].time<<endl;
		}
		cout<<"输入："<<endl<<"1、返回菜单"<<endl<<"2、继续查看"<<endl;
		cin>>m;
		if(m==1)
		{
			clean_1();
			menu();
		}
			
		else if(m==2)
			look();
	}
	else
	{
		clean_1();
		menu();
	}
}
void del()
{
	clean_1();
	cout<<"请输入："<<endl<<"1、初级"<<endl<<"2、中级"<<endl<<"3、高级"<<endl;
	int a,b;
	cin>>a;
	if(a==1)
	{
		fstream file("data1.txt", ios::out);
		cout<<"初级排行已清空"<<endl;
		cout<<"输入："<<endl<<"1、返回菜单"<<endl<<"2、继续清空"<<endl;
		cin>>b;
		if(b==1)
			{
	 	clean_1();
	 	menu();
	 }
		else if(b==2)
			del();
	}
	else if(a==2)
	{
		fstream file("data2.txt", ios::out);
		cout<<"中级排行已清空";
		cout<<"输入："<<endl<<"1、返回菜单"<<endl<<"2、继续清空"<<endl;
		cin>>b;
		if(b==1)
			{
	 	clean_1();
	 	menu();
	 }
		else if(b==2)
			del();
	}
	else if(a==3)
	{
		fstream file("data3.txt", ios::out);
		cout<<"高级排行已清空";
		cout<<"输入："<<endl<<"1、返回菜单"<<endl<<"2、继续清空"<<endl;
		cin>>b;
		if(b==1)
		{
		 	clean_1();
		 	menu();
	 }
		else if(b==2)
			del();
	 } 
	 else
	 {
	 	clean_1();
	 	menu();
	 }
}
void clean_1()
{
	if(cin.get()=='\n')
		system("cls");
}
void menu()
{
	cout<<"欢迎使用数学速算自我训练软件"<<endl;
	cout<<"请选择训练等级："<<endl;
	cout<<"1、初级"<<endl<<"2、中级"<<endl<<"3、高级"<<endl<<"4、查看排行"<<endl<<"5、重置排行"<<endl<<"请输入数字序号"<<endl; 
	int a;
	while(1)
	{
		cin>>a;
		if(a==1)
		{
			primary();
			break;
		}
		else if(a==2)
		{
			intermediate();
			break;
		}
		else if(a==3)
		{
			senior();
			break;
		}
		else if(a==4)
		{
			look();
			break;
		}
		else if(a==5)
		{
			del();
			break; 
		}
		else
			cout<<"请重新输入！"<<endl;
	}

}
