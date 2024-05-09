#include <stdlib.h>
#include <string.h>

int main() {
    char *data = malloc(10);
    if (data == NULL) {
        return 1; // Failed to allocate memory
    }
    memset(data, 0, 100); // Writing beyond the allocated memory space
    free(data);
    return 0;
}

