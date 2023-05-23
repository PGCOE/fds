#include<iostream>
# define max 20
using namespace std;
class stud
{
int mks[max];
public:
    stud()
    {
    for(int i=0;i<max;i++)
      mks[i]=0;
    }
    void insertheap(int tot);
    void showmax(int tot);
    void showmin();
};
void  stud::insertheap(int tot)
{
 for(int i=1;i<=tot;i++)
 {
   cout<<"enter marks";
   cin>>mks[i];
    int j=i;
    int par=j/2;
    while(mks[j]<=mks[par] && j!=0)
     {
        int tmp = mks[j];
        mks[j]=mks[par];
        mks[par]=tmp;
        j=par;
        par=j/2;
     }       
 }
}
void stud::showmax(int tot)
{
int max1=mks[1];
for(int i=2;i<=tot;i++)
{
 if(max1<mks[i])
  max1= mks[i];
}
cout<<"Max marks:"<<max1;
}

void stud::showmin()
{
cout<<"Min marks:"<<mks[1];
}

int main()
{
int ch,cont,total;
stud s1;
do
{
cout<<endl<<"Menu";
cout<<endl<<"1.Read marks of the student ";
cout<<endl<<"3.Find Max Marks";
cout<<endl<<"4.Find Min Marks";
cout<<endl<<"Enter Choice";
cin>>ch;
switch(ch)
{
case 1:
     cout<<"how many students";
     cin>>total;
    s1.insertheap(total);
    break;
case 2:    s1.showmax(total);
    break;
case 3:
    s1.showmin();
    break;
}
cout<<endl<<"do u want to continue?(1 for continue)";
cin>>cont;
}while(cont==1);
return 0;
}
