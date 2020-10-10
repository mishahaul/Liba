#include "libmx.h"

char *mx_file_to_str(const char *file) {
    
    int fd = open(file, O_RDONLY | O_DIRECTORY);

    if (fd > 0) 
        return NULL;
    close(fd);
    fd = open(file, O_RDONLY);

    if (fd > 0) {
        char buff; 
        char *text = NULL;
        int count = 0;

        while ((read(fd, &buff, 1)))
            count++;
        close(fd);
            
        if (count > 0) {
            text = (char *)malloc(sizeof(char) * count + 1);
            fd = open(file, O_RDONLY); 
            read(fd, text, count);
            text[count] = '\0';
            close(fd);
            return text;
        }
    }
    return NULL;
}


