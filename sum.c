#include <stdio.h>
#include <pthread.h>

int i = 0;

void* add(){
    for (int x = 0; x < 1000000 ; x++){
        i++;
            }
    return NULL;
}

void* sub(){
    for (int x = 0; x < 1000000 ; x++){
        i--;
            }
        return NULL;
}



int main(){
        pthread_t add_thr;
        pthread_t sub_thr;
        pthread_create(&add_thr, NULL, add, NULL);
        pthread_create(&sub_thr, NULL, sub, NULL);

        pthread_join(add_thr, NULL);
        pthread_join(sub_thr, NULL);
        printf("Done: %i\n", i);

        return 0;
}

