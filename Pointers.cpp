#include <iostream>
using namespace std;
int main() {
    int firstYalue;
     int secondValue;
    int * pPointer = nullptr;
    pPointer =&firstYalue;
     *pPointer = 10;
      pPointer =&secondValue;
     *pPointer = 20;
     

   cout << "firstValue is " << firstYalue<< "\n";
   cout << "secondValue is " << secondValue<< "\n";
}