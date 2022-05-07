#include <stdio.h>

char getTorF(int val) {
    if(val) {
        return 'T';
    }
    return 'F';
}

int main() {

    /**
     * p: You are a hound dog.
     * q: You howl at the moon.
     * p -> q => If you're a hound dog, then you howl at the moon.
     * ~q => You don't howl at the moon.
     * ~p => Therefore, you aren't a hound dog.
     */

    int p = 1, q = 1, s, i;

    printf("p\tq\tp->q\t~q\t~p\n");
    printf("------------------------------------\n");

    for (i = 0; i < 4; i++) {
        printf("%c\t", getTorF(p));
        printf("%c\t", getTorF(q));

        if(p && !q) { 
            s = 0;
        } else {
            s = 1;
        }
        
        printf("%c\t", getTorF(s));
        printf("%c\t", getTorF(!q));
        printf("%c\n", getTorF(!p));

        (i+1)%2 == 0 ? p = !p : 0;

        q = !q;
    }

    return 0;
}