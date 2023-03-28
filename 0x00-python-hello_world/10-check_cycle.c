#include "list.h"
#include <stdio.h>
/**
  *check_cycle - checks to see if a cycle exists in a linked list
  *@list: start of linked list
  *Return: 1 if cycle, 0 if no cycle
  */

int check_cycle(listint_t *list)
{
        listint_t *cursor;
        listint_t *head;
        head  = list
        cursor = list

        while (cursor != NULL && cursor->next != NULL)
        {
                head = head->next;
                cursor = cursor->next->next;
                if(head == cursor)
                        return (1);
        }
        return (0);
}
