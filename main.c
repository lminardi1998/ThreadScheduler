#include <stdio.h>
#include <setjmp.h>
#include <unistd.h>


static jmp_buf buf;

void dothings(){
    printf("Now im here\n");
    sleep(3);
    longjmp(buf,42);

}

int main() {
    if (buf != 42) {
    setjmp(buf);
    dothings();
    }else
        printf("now im there");
    return 0;
}