#include <stdio.h>
#include <sys/types.h>
#include <sys/unistd.h>


int main() {
    pid_t q;
    printf("before fork:\n");
    q=fork();

    if(q == 0) {
        printf("i am a child, my id is: %d\n", getpid());
        printf("my parent's id is: %d\n", getppid());
    }
    else {
        printf("my child's id is: %d\n", q);
        printf("i am a parent, my id is: %d\n", getppid());
    }

    // modified line
    printf("both the parent and children processes are running");

}