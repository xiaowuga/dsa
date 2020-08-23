#include <bits/stdc++.h>
using namespace std;
class Student{
private:
    string s;
public:
    Student(const string name): s(name){}
    Student& operator=(const Student &student) {
        s = student.s;
        return *this;
    }
    string getstr() {
        return s;
    }
};
int main() {
    int a[10] = {1,1,2,2,2,3,3,3,5,5};
    int l = 0, r = 10;
    int aim; cin >> aim;
    while(l < r) {
        int m = (l + r) >> 1;
        (aim <= a[m]) ? r = m : l = m + 1;
    }
    cout << l << endl;
}
//测试代码
