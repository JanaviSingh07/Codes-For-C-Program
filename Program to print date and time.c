#include <stdio.h>
#include <time.h>

int main() {
    time_t current_time;
    struct tm *local_time;

    // Get the current time
    time(&current_time);

    // Convert it to local time representation
    local_time = localtime(&current_time);

    // Print the date and time
    printf("Current Date and Time: %s", asctime(local_time));

    return 0;
}
