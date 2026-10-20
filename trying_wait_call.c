#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
pid_t pid = fork ();
if (pid == 0){
    printf("I am the running child with %d\n", pid);
   } else if (pid > 0) {
       wait (NULL);
        printf ("I am the continuing parent with %d\n", pid);
       } else { 
           printf("Fork failed.\n");
    }
    return 0;
}
