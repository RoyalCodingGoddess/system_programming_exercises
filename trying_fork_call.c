#include <stdio.h>
#include <unistd.h>

int main() {
pid_t pid = fork ();
if (pid == 0){
    printf("I am the child with %d\n", pid);
   } else if (pid > 0) {
        printf ("I am the parent with %d\n", pid);
       } else { 
           printf("Fork failed.\n");
    }
    return 0;
}
