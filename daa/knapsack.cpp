#include <stdio.h>
#include <stdlib.h>
struct Item { int w, v; } c[20];
int cmp(const void *a, const void *b) {
    return ((struct Item*)b)->v - ((struct Item*)a)->v;
}
int main() {
    int n, W;
    scanf("%d%d", &n, &W);
    for (int i = 0; i < n; i++) scanf("%d%d", &c[i].w, &c[i].v);
    qsort(c, n, sizeof(struct Item), cmp);
    double ans = 0.0;
    for (int i = 0; i < n; i++)
        if (W >= c[i].w)
            ans += c[i].v, W -= c[i].w;
        else
            ans += (double)c[i].v * W / c[i].w, W = 0;
    printf("%.4lf\n", ans);
    return 0;
}
