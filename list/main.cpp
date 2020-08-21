//
// Created by 小乌嘎 on 2020/8/9.
//
#include <bits/stdc++.h>
#include "list.h"
using namespace std;
void test() {
    List<int>list;
    int n; cin >> n;
    for(int i = 1; i <= n; i++) {
        int x = rand();
        list.insertAsLast(x);
    }
    for(ListNodePosi(int) q = list.begin(); q != list.end(); q = q->succ) {
        cout << q->data << ' ';
    }
    cout << endl;
    list.quickSort();
    for(ListNodePosi(int) q = list.begin(); q != list.end(); q = q->succ) {
        cout << q->data << ' ';
    }
    cout << endl;

}
int main() {
    test();
    return 0;
}