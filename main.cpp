#include<iostream>
using namespace std;

class Number{
    public:
    int value;
    void Show(){
        cout<<"Value:"<<value;
    }

};
class binNumber : public Number{
    public:
    int res;
    int Setval(){
        // dar in qesmat meqdare binary ro dar res mirizim va estefade mikonim
        // gofte budid piade saazi lazem nist
        //res = binvalue of value 
        return res;
    }
};
class hexNumber : public Number{
    public:
    int res;
    int Setval(){
        // dar in qesmat meqdare hexadecimal ro hesab mioknim
        //gofte budid piade sazi lazem nist pas piade sazi nemikonim
        // res = hexadecimal value of value;
        return res;
    }
};

int main(){
    hexNumber obj1;
    obj1.Number::value = 25;
    obj1.Show();

}