//
// Created by ihizh on 11.10.2020.
//

#include <limits.h>

size_t ft_strlen(const char* str){
    const char* temp = str;
    while (*str != '\0'){
        str++;
    }
    return str - temp;
}
