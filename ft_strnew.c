//
// Created by ihizh on 11.10.2020.
//

#include <limits.h>
#include <stdlib.h>

char* ft_strnew(size_t size) {
    if (size < 0) {
        return NULL;
    }
    char* str = (char*)malloc(sizeof(char) * (size + 1));
    if (str == NULL) {
        return NULL;
    }
    for(int i = 0; i < size; i++) {
        if (i == size - 1) {
            str[i] = '\0'
        } else {
            str[i] = '0';
        }
    }
    return str;
}
