#include <map>
#include <iostream>
using namespace std;

void preorder(char c);
void inorder(char c);
void postorder(char c);
map<char, pair<char, char>> m;

int main(void)
{
    int n;
    char parent, left, right;

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> parent >> left >> right;
        m[parent] = make_pair(left, right);
    }

    preorder('A');
    cout << '\n';
    inorder('A');
    cout << '\n';
    postorder('A');

    return 0;
}

void preorder(char c) // 전위
{
    cout << c;
    if (m[c].first != '.')
        preorder(m[c].first);
    if (m[c].second != '.')
        preorder(m[c].second);
}

void inorder(char c) // 중위
{
    if (m[c].first != '.')
        inorder(m[c].first);
    cout << c;
    if (m[c].second != '.')
        inorder(m[c].second);
}

void postorder(char c) // 후위
{
    if (m[c].first != '.')
        postorder(m[c].first);
    if (m[c].second != '.')
        postorder(m[c].second);
    cout << c;
}
