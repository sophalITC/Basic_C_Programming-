/*
#include <stdio.h>

int main(){
    int i;
    int sum=0;
    for (i=1;i<11;i +=1) {
        printf("%d\n", i);
        sum += i;
        printf("sum = %d\n", sum);
        printf("............\n");
    }

}
*/
#include <stdio.h>
int gcd(int a, int b) {
    int cnt = 0;
    int min = a < b ? a : b;
    for (int i = min; i >= 1; i--) {
        cnt++;
        if (a % i == 0 && b % i == 0) {
            printf("counter(simple) = %d\n", cnt);
            return i;
        }
    }
}

int gcdEuclid(int a, int b) {
    // https://en.wikipedia.org/wiki/Euclidean_algorithm
    int t;
    int cnt = 0;
    while (b != 0) {
        cnt++;
        t = b;
        b = a % b;
        a = t;
    }
    printf("counter(Euclid) = %d\n", cnt);
    return a;
}

// least common multiple
/*
int lcm(int a, int b) {
    return a * b / gcd(a, b);
}
*/

int main() {
    int a = 1071;
    int b = 462;
    printf("gcd(%d, %d) = %d\n", a, b, gcd(a, b));
    printf("gcd(%d, %d) = %d\n", a, b, gcdEuclid(a, b));
    return 0;
}
