#include<bits/stdc++.h>
using namespace std;
    
    class Hero{
    public:
char name[100];
int health;
int getHealth()
{
    return health;
}

void setHealth(int h ){
    health =h;
} 
char level;
 // public we can access them anywhere we want 
 // private  we can access class memeber in the class only 
 // protected  

 
// padding is technique of adding extra bytes a structure 
// or class to align its data members to specific boundaries 

// suppose we have char a , int x 
// char is of 1 byte and int is of 4 bytes 
// it should be 5 but it's not cause complie adds up 3 bytes pf padding after char 


//////////////////////////////////

// greedy alignment
//ensures that the largest data members are placed first in the class,
//minimizing the amount of padding required to align the subsequent data members.

};
 
class greedy{
 public:

 double x;  // 8
 int y;  // 4
 short t;// 2
 char u;// 1-> after padding(2)


};

class padding{
    public:
    char u;
    short t;
    int y; 
    double x; 



};




int main(){

padding p;
cout<<sizeof(p)<<endl;
Hero h1;
h1.setHealth(5);
cout<<h1.getHealth()<<endl;

cout<<"size " << sizeof(h1)<<endl;

greedy g;

cout<<sizeof(g);
}