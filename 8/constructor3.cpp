#include <iostream>
using namespace std;

class Integer{
public:
    int val;
    explicit Integer(int v){
        val=v; cout<<"constructor with arg"<<v<<endl;
    }
};

int main(){
    Integer i(3);
    //Integer j=5; //No funciona con explicit
    return 0;
}

/*
Sin explicit
constructor with arg3
constructor with arg5
*/

/*
Con explicit
constructor with arg3
*/