#include<iostream>
using namespace std;

class Test {

private:
   int x, y;

public:

   void input() {
       cout << "Enter two numbers:";
       cin >> x>>y;
   }

   friend void find(Test t);
};

void find(Test t) {
   
   if (t.x > t.y) {
       cout << "Maximum Number is:" << t.x;
   } else {
       cout << "Maximum Number is:" << t.y;
   }
}

int main() {

   Test t;
   t.input();
   find(t);

   return 0;
}