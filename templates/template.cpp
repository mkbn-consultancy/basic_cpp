
#include <iostream>

//please make sure that T has operator>
template <class T>
T max(T a , T b){
    return a>b ? a : b;
}


class Eran
{
public:
    explicit Eran(int id) : _id(id){ std::cout <<" Ctor: Eran(int)\n"; }

    // e1 > e2  ==>    bool operator>(Eran a, Eran b)
    // e1.operator>(e2);  ==> operator>(&e1,e2)
    bool operator>(const Eran& e){
        return (this->_id > e._id);
    }

    int getId() const { std::cout<<"const\n"; return _id;}  //getId(const Eran& this)
    int getId() {std::cout<<"non const\n"; _id++; return _id;}

    friend std::ostream& operator<<(std::ostream&, const Eran&);
private:
    int _id;

};

void f(Eran e){
    std::cout<<"inside f(Eran)\n";
}

std::ostream& operator<<(std::ostream& out, Eran& e){
    out<<e.getId();
    return out;
}
    // e2 << std::cout ?!

int main()
{
    f(Eran(3));

    std::cout<<"max is : "<<max(5,9)<<std::endl;
    std::cout<<"max is : "<<max("A","B")<<std::endl;

    max<int>(1,3.5);

    Eran e1(11), e2(22);
    max(e1,e2);

    /*
    { 113, 44, 55, 6, 88 , 2, 10};
    e1 > 113 ??

    113 > e1 ??
    */


 //   std::cout<<10;   // ostream operator<< const int   cout.operator<<(const int)

    //std::cout<<"max is : "<< max<Eran>(e1,e2) << std::endl; //ostream << Eran
    std::cout<<e2<<" ";
}