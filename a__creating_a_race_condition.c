#include <stdio.h>
#include <pthread.h>

int run = 0;
void * lab (void*arg){

for(int i = 0; i < 210; i++)
run++;
return NULL;
}

int main(){
pthread_t r1;
pthread_t r2;
pthread_create(&r1, NULL, lab, NULL);
pthread_create(&r2, NULL, lab, NULL);
pthread_join(r1, NULL);
pthread_join(r2, NULL);
printf("End is 420 = %d\n", run);
return 0;
}
