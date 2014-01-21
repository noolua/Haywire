#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "route_compare_method.h"

#if defined(_WIN32) || defined(_WIN64) 
    #define strcasecmp _stricmp 
    #define strncasecmp _strnicmp 
    #define strtok_r strtok_s
#endif

int hw_route_compare_method(char *url, char* route){
    if(strlen(url) != strlen(route))
        return 0;
    
    int match = strncasecmp(route, url, strlen(url));
    return (match == 0) ? 1 : 0;
}

