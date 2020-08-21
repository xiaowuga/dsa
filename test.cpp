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
    Student s1("Lee");
    Student s2("Diwen");
    Student s3("Tom");

//先执行s2 = s1, 即执行 s2.operator=(s1), 返回的是s2的引用
//然后执行s3 = s2, 即执行 s3.operator=(s2)
    s3 = s2 = s1;
    cout << s3.getstr() << endl;
    cout << s2.getstr() << endl;
    cout << s1.getstr() << endl;
}
//测试代码
