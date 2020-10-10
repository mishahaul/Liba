#include "libmx.h"

t_list *mx_sort_list(t_list *lst, bool (*cmp)(void *, void *)) {
    if (lst) {
       for (t_list *i = lst; i->next != NULL; i = i->next) {
            for (t_list *j = i->next; j != NULL; j = j->next) {
                if (cmp(i->data, j->data)) {
                    void *tmp = i->data;
                    i->data = j->data;
                    j->data = tmp;
                }
            }
        }
    }
    return lst;
}
