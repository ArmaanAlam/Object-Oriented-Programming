#include<iostream>
using namespace std;

class A{
    protected:
    int rollno;
    public:
    void setroll(int r){
        rollno=r;
    }
    void getroll(){
        cout<<"Roll no = "<<rollno<<endl;
    }
};

class B :public virtual A{
    protected:
    float math,sci;
    public:
    void setmark(float m, float s){
        math=m;
        sci=s;
    }
    void getmark(){
        cout<<"Maths marks = "<<math<<endl;
        cout<<"Science marks = "<<sci<<endl;
    }
};

class C : public virtual  A{
    protected:
    int score;
    public:
    void setscore(int s){
        score=s;
    }
    void getscore(){
        cout<<"Sports score = "<<score<<endl;

    }
};

class D : public B, public C{
    protected:
    float total;
    public:
    void display(){
        total=math+sci+score;
        getroll();
        getmark();
        getscore();
        cout<<"Total marks = "<<total<<endl;
    }
};
int main(){
    D d1;
    d1.setroll(34);
    d1.setmark(96.3,98.93);
    d1.setscore(78);
    d1.display();
    return 0;
}