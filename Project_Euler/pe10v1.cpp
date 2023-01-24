#include <iostream>
#include <cmath>
using namespace std;

bool prime(int n){
    for (int x=3;x<=sqrt(n);x+=2){
        if (n%x==0)
            return 0;
    }
    return 1;
}

int main(){
	int num=2000000;
	long long total=2;
	for (int i=3; i<=num; i+=2){
		if (prime(i)){
			total+=i;
		}
	}
	cout<<total;

	return 0;
}