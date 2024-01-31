#include <iostream>

using namespace std;

class rational{
private:
    int num;
    int den;
public:

    rational(): num(0),den(1){}
    rational(int num): num(num), den(1){}
    rational(int num, int den): num(num), den(den){}

    void input(std::istream in){
        in >> num;
        in >> den;
    }

};

    void output(std::iostream out){
        out<<num<<"/"<<den<<"/n";

    }
    rational add(rational& b){
        return rational(num*b,den + b.num)
    }



class studentrecord{
private:
    int quiz1;
    int quiz2;
    int midterm;
    int finalexam;

public:
    studentrecord(): quiz1(0), quiz2(0), midterm(0), finalexam(0) {}

    studentrecord(int quiz1, int quiz2, int midterm, int finalexam)
        :quiz1(quiz1),quiz2(quiz2),midterm(midterm),finalexam(finalexam){}


    void output();                  //declaration of member function
};

void studentrecord:: output(){
    double result = ((quiz1/10.0) * .125) + ((quiz2/10.0) * .125) + ((midterm/100.0) * 25) + ((finalexam/100.0) *50);

    using std::cout;
    using std::endl;

    std::cout<<"total weight: "<<result<<endl;



}



int main()
{
    //studentrecord s1;

    //studentrecord s2 {10,10,100,100};

    //s1.output();
    //s2.output();

    rational r1;
    rational r2(3);
    rational r3(3,4);

    r3.output(std::cout)

    rational r4 = r3.add(r2);
    r4.output();
}
