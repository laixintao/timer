#include <stdio.h>
#include <time.h>
#include <unistd.h>

void print_current_time(){
    time_t current_time;
    char c_time_string[300];
    current_time = time(NULL);

    struct tm *p = localtime(&current_time);
    strftime(c_time_string, 300, "%Y-%b-%d %X", p);

    printf("\rcurrent time: %s", c_time_string);
    fflush(stdout);
}

int main(void){
    while (1){
        print_current_time();
        sleep(1);
    }
    return 0;
}
