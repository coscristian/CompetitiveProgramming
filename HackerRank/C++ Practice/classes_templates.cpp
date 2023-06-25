#include<bits/stdc++.h>

using namespace std;

template<class T>
class AddElements {
    T el1;
    public:
    AddElements(T element1) {el1 = element1;}
    T add(T element2) {return el1 + element2;}
};

template <>
class AddElements <string> {
    string el1;
    public:
    AddElements(string e1) {el1 = e1;}
    string concatenate(string e2){return el1 + e2;}
};

int main () {
  int n,i;
  cin >> n;
  for(i=0;i<n;i++) {
    string type;
    cin >> type;
    if(type=="float") {
        double element1,element2;
        cin >> element1 >> element2;
        AddElements<double> myfloat (element1);
        cout << myfloat.add(element2) << endl;
    }
    else if(type == "int") {
        int element1, element2;
        cin >> element1 >> element2;
        AddElements<int> myint (element1);
        cout << myint.add(element2) << endl;
    }
    else if(type == "string") {
        string element1, element2;
        cin >> element1 >> element2;
        AddElements<string> mystring (element1);
        cout << mystring.concatenate(element2) << endl;
    }
  }
  return 0;
}