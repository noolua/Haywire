#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "haywire.h"

void append_string(hw_string* destination, hw_string* source)
{
    void* location = (char*)destination->value + destination->length;
    memcpy(location, source->value, source->length);
    destination->length += source->length;
}

char* dupstr(const char *s)
{
    char *const result = malloc(strlen(s) + 1);
    if (result != NULL)
    {
        strcpy(result, s);
    }
    return result;
}
