#include <stdio.h>

/*
Premise: If I go to the mall, I will buy new jeans
Premise: If I buy new jeans, I will buy a shirt to go with it.
Conclusion: If I go to the mall, I will buy a shirt.

p : I go to the mall.
q : I will buy new jeans.
r : I will buy a shirt.

p -> q       
q -> r
________
p -> r


*/

char getTorF(int val) {
    if(val) {
        return 'T';
    }
    return 'F';
}

char getImpliesResult(int p, int q) {
    if(p && !q) { 
        return getTorF(0);
    } else {
        return getTorF(1);
    }
}

int main() {

    int p = 1, q = 1, r = 1, i;

    printf("p\tq\tr\tp->q\tq->r\tp->r\n");
    printf("----------------------------------------------\n");

    for (i = 0; i < 8; i++) {
        printf("%c\t", getTorF(p));
        printf("%c\t", getTorF(q));
        printf("%c\t", getTorF(r));
        
        printf("%c\t", getImpliesResult(p ,q));
        printf("%c\t", getImpliesResult(q ,r));
        printf("%c\n", getImpliesResult(p, r));

        (i+1)%4== 0 ? p = !p : 0;

        (i+1)%2 == 0 ? q = !q : 0;

        r = !r;
    }

    return 0;
}