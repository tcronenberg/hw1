#include<iostream>

using namespace std;

int main(){
unsigned int N;
int a=0;
int b=1;
int temp;

cout << "Geben sie eine Zahl größer 1 ein!" << endl;
cout << "N" << endl;
cin >> N;

for(int i=2; i<=N; i++){	
  temp = a+b;
  a = b;
  b = temp;
}

cout << "Result:" << b << endl;

return 0;
}