#include <stdio.h>
#include <pthread.h>

int run = 0;
pthread_mutex_t protec = PTHREAD_MUTEX_INITIALIZER;

void * lab (void*arg){
for(int i = 0; i < 21000; i++) {
pthread_mutex_lock(&protec);
run++;
pthread_mutex_unlock(&protec);
}
return NULL;
}

int main(){
pthread_t r1;
pthread_t r2;
pthread_create(&r1, NULL, lab, NULL);
pthread_create(&r2, NULL, lab, NULL);
pthread_join(r1, NULL);
pthread_join(r2, NULL);
printf("End is 42000 = %d\n", run);
return 0;
}



