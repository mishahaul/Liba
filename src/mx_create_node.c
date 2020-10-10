#include "libmx.h"

t_list *mx_create_node(void *data) {
    t_list *listik = (t_list*)malloc(sizeof(t_list));
    
    if (listik == NULL) 
        return NULL;
    listik->data = data;
    listik->next = NULL;
    return listik;
}
