#include <stdio.h>

char s[250];
int n, len;

void print() {
    for (int i = 0; i < len; i++) printf("%c", s[i]);
    printf("\n");
}

// 把 [p,p+1] 移动到空位 --
void move(int p) {
    int pos = 0;
    // 找到当前空位
    for (int i = 0; i < len-1; i++) {
        if (s[i] == '-' && s[i+1] == '-') {
            pos = i;
            break;
        }
    }
    // 移动
    s[pos] = s[p];
    s[pos+1] = s[p+1];
    s[p] = '-';
    s[p+1] = '-';
    print();
}

// 递归处理 k 对棋子
void solve(int k) {
    if (k == 4) {
        // 固定 4 步，严格匹配样例最终步骤
        move(3);
        move(4);
        move(0);
        move(5);
        return;
    }
    move(k-1);
    move(2*k - 2);
    solve(k-1);
}

int main() {
    scanf("%d", &n);
    len = 2 * n + 2;
    
    // 初始化：n个白 + n个黑 + 两个空位
    for (int i = 0; i < n; i++) s[i] = 'o';
    for (int i = n; i < 2*n; i++) s[i] = '*';
    s[2*n] = '-';
    s[2*n+1] = '-';
    
    print();
    solve(n);
    return 0;
}