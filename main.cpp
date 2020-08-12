//
// Created by 小乌嘎 on 2020/8/9.
//
#include <iostream>
#include "list/list.h"
using namespace std;
void test() {
    List<int>list;
    int n; cin >> n;
    for(int i = 1; i <= n; i++) {
        int x; cin >> x;
        list.insertAsLast(x);
    }
    list.selectSort();
    for(ListNodePosi(int) p = list.begin(); p != list.end(); p = p->succ) {
        cout << p -> data << ' ' ;
    }
}
int main() {
    test();
    return 0;
}