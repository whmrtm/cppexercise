#include <iostream>
#include <string>
#include <vector>
#include "longintegeradd.h"
using namespace std;
LinkList::LinkList(){
  head0 = new LinkNode;
	head1 = new LinkNode;

	head0->next = head0;
	head0->pre = head0;
	head1->next = head1;
	head1->pre = head1;

	result = new LinkNode;
	result->next = head0;
	result->pre = head1;

	curr = NULL;
}

LinkList::~LinkList(){                      
	LinkNode *p1=head0,*p2=head1,*p3=result;  
	 while(p1!=p1->pre)                        
	 {
	   p1->pre->next=p1->next;
	   p1->next->pre=p1->pre;
	   curr=p1;
	   p1=p1->next;
	   delete curr;
	 }
	 while(p2!=p2->pre)
	 { 
	   p2->pre->next=p2->next;
	   p2->next->pre=p2->pre;
	   curr=p2;
	   p2=p2->next;
	   delete curr;
	 }
	 while(p3!=p3->pre)
   {
	   p3->pre->next=p3->next;
	   p3->next->pre=p3->pre;
	   curr=p3;
	   p3=p3->next;
	   delete curr;
	 }
	 // delete p1;
	 // delete p2;
	 // delete p3;
}


void LinkList::Creat(string a)
{
	 int i=0,j=0,m=0,n=0,k=0,l=0,s=0,w=0;      
  //i记录字符串，j记录加数节点数；s记录被加数节点数
//w标记字符串中的‘-’号
//k记录字符串中的字符转化为整数的值，l使每个节点记录4位
  while(a[m]!=';') m++;          //m记录字符串中被加数的字符数
    n=m;                                
  while(a[n]!='/0') n++;         //n记录字符串的总字符数
	  if(a[0]=='-')
	  {
	    head0->data=(-1);            //记录整数符号
	    w=1;
	   }
	  else {head0->data=1;}
	 for(i=m-1;i>=w;i--)             
	 {
	   if(a[i]!=',')                 //把字符转化为整数
	   {
	     k+=(a[i]-'0')*sum(l);
	     l++;
	   }
	   if(a[i]==','||i==w)
	   {
	     curr=new LinkNode;           //把整数存到双向循环链表中
	     curr->data=k;
		   curr->next=head0;
		   curr->pre=head0->pre;
	     head0->pre->next=curr;
	     head0->pre=curr;
	     head0=curr; 
	     s++;                             //节点数加1
	     k=0;                             //重新初始化k和l
	     l=0;                             
	   }
	 }
   head0->pre->data*=s;                   //存储整数符号和节点数
   k=0;l=0;
	 if(a[m+1]=='-')
	 {
	   head1->data=(-1);
	   m++;
	 }
	 else 
     head1->data=1;
   for(i=n-1;i>m;i--)
   {
     if(a[i]!=',')
     {
     k+=(a[i]-'0')*sum(l);
     l++;
      }
                                                                        if(a[i]==','||i==m+1)
		{
		   curr=new LinkNode;
		curr->data=k;
		curr->next=head1;
		curr->pre=head1->pre;
		head1->pre->next=curr;
		head1->pre=curr;
		 head1=curr;
		    j++;
		 k=0;
		l=0;
		  }
		   }
		    head1->pre->data*=j;
		    }
void LinkList::Add()         //实现两个整数相加
   {
    LinkNode *temp;
		if(abs(head0->pre->data)>abs(head1->pre->data))        
		  //两个整数中，绝对值大的为被加数
		addtwo();
		 else if(abs(head0->pre->data)<abs(head1->pre->data))
		  {
		    temp=head0;
     		head0=head1;
		    head1=temp;
		    addtwo();
		 }
		  else if(abs(head0->pre->data)==abs(head1->pre->data))
		   {
		     int k1,k2;
		    LinkNode *p=head0,*q=head1;      
		 //如果节点数相同，则判断节点中数值大小 
		//
		 while(p->data==q->data&&p!=head0->pre->pre&&q!=head1->pre->pre)
		   {
		  p=p->next;
		     q=q->next;
		 }
		   k1=p->data;
		     k2=q->data;
		   if(k1>k2)
		addtwo();
		  else 
		    { 
		      temp=head0;
		    head0=head1;
		head1=temp;
		  addtwo();
		    }
		     }
		     }
		     void LinkList::addtwo()        
		      //节点多的作为被加数，少的作为加数，实现整数绝对值大的加小的
		//默认head0存的整数绝对值比head1大
		{
		 int s=0,m1=head0->data,m2=head1->data;
		  m1=(head0->pre->data/abs(head0->pre->data));       //head0的符号
		m2=(head1->pre->data/abs(head1->pre->data));       //head1的符号
		 LinkNode *p=head0->pre->pre,*q=head1->pre->pre;
		  result->data=head0->pre->data;          //存结果的节点数和符号  
		   while(q!=head1->pre)        
		    //head0存的整数绝对值比head1大，即head0的节点数大于或等于head1
		     {
		curr=new LinkNode;
		  curr->data=(p->data)*m1+(q->data)*m2+s;   //两整数相加
		 if((m1*m2)>0)       //如果符号相同
		   {
		      if(abs(curr->data)-10000>=0)     //相加后超过10000，则进位
		  {
		   s=curr->data/10000;
		curr->data=abs(curr->data)%10000;
		   } 
		   else     //abs(curr->data)-10000<0，不进位
		      {
		   s=0;
		    curr->data=abs(curr->data);
		}
		  }
		    else if(m1>0&&m2<0)    
		    //符号不同，在此相当于实现两个正整数相减
		      {
		      s=0;
		  if(curr->data<0)   //小于0，向前一位借1
		     {
		      curr->data+=10000;
		   s=-1;
		      }
		        }
		else if(m1<0&&m2>0) 
		//符号不同，在此相当于实现负整数加上正整数
		  { 
		     s=0;
		        if(curr->data>0)         //大于0，
		 {
		     curr->data=10000-curr->data;
		         s=1;
		  }
		     else curr->data=abs(curr->data);
		       }
		         curr->next=result;  //存入链表
		           curr->pre=result->pre;
		   result->pre->next=curr;
		     result->pre=curr;
		       result=curr;
		         p=p->pre;
		           q=q->pre;
		            }    
		       //当head0节点数比head1长时，继续建链
		       while(p!=head0->pre)  
		        {
		          curr=new LinkNode;
		            curr->data=p->data+s;
		              s=curr->data/10000;
		      if((m1*m2)>0)
		        {
		           if(abs(curr->data)-10000>=0)
		              {
		        s=curr->data/10000;
		            curr->data=abs(curr->data)%10000;
		               }
		        else {s=0;curr->data=abs(curr->data);}
		          }
		            else if(m1>0&&m2<0)
		              {
		                 s=0;
		          if(curr->data<0)
		             {
		                 curr->data+=10000;
		           s=-1;
		              }
		                }
		                  else if(m1<0&&m2>0)
		          {
		             s=0;
		                if(curr->data>0)
		                   {
		             curr->data=10000-curr->data;
		                 s=1;
		                    }
		             else curr->data=abs(curr->data);
		               }
		                 curr->data=abs(curr->data)%10000;
		                   curr->next=result;
		                     curr->pre=result->pre;
		             result->pre->next=curr;
		               result->pre=curr;
		                 result=curr;
		                   p=p->pre;
		                    }
		                     if(s!=0)         //处理相加后，进位问题
		                      {
		              curr=new LinkNode;
		                curr->data=abs(s);
		                  curr->next=result;
		                    curr->pre=result->pre;
		                      result->pre->next=curr;
		                        result->pre=curr;
		                result=curr;
		                  result->pre->data=m1*(abs(result->pre->data)+1);
		                   }
		                   }
		                   void LinkList::Display()         //显示结果
		                   {
		                    LinkNode *p=result;
		                     int FuHao=result->pre->data/abs(result->pre->data);//结果的符号
		                      while(p->data==0&&p!=result->pre->pre)    
		                      //当运算后前几个节点的数据为0时，不输出
		                       {
		                         p=p->next;
		                 result->pre->data=(abs(result->pre->data)-1)*FuHao; 
		                  //结果记录非0节点数
		                   }
		                    cout<<FuHao*p->data;         //首先显示符号和第一个节点中的数
		                     if(abs(result->pre->data)!=1) p=p->next; //判断非0节点数是否为1
		                      while(p!=result->pre->pre)    //继续输出
		                       {
		                         cout<<",";     //每4位一组，并用‘，’隔开
		                 cout.width(4);
		                      cout.fill('0');
		                    cout<<p->data;
		                            p=p->next;
		                   }
		                    if(p==result->pre->pre&&abs(result->pre->data)!=1)   
		                    //显示最后一个节点数据
		                     {
		                       cout<<",";
		                         cout.width(4);
		                    cout.fill('0');
		                            cout<<p->data;
		                             }
		                              cout<<endl;
		                              }
		                              int sum(int n)        //计算10的乘方
		                              {
		                     int i,s=1;
		                      for(i=1;i<=n;i++)
		                       {
		                         s=s*10;
		                          }
		                           return s;
		                           }
