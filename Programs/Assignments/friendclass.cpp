
#include <iostream>
using namespace std;
class B;
class A{
    private:
    int x,y;
    public:
    void getdata(){
        cout<<"Enter the value of x and y";
        cin>>x>>y;
    }
    friend class B;
};

class B{

    private:
    int z;
    public:
    void getdata(){
    cout<<"Enter the value of z";
    cin>>z;
    }
    void sum(A t){
        int sum;
        sum = t.x+t.y+z;
        cout<<"The sum of is"<<sum<<endl;
    }
};

int main(){

    A p;
    B q;
    p.getdata();
    q.getdata();
    q.sum(p);
    return 0;
}