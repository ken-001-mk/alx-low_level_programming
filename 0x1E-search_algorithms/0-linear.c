#include"search_algos.h"

/**
 * linear_search -  function that searches forvalue 
 * in an array of integers
 * @array: Pointer to first element of the array
 * @size: Number of elements in array
 * @value: Is the value to search for
 *
 * Return: return -1, if vlaue is not present in array or is NULL
 */

int linear_search(int *array, size_t size, int value)
{
   if (array == NULL) {
      return (-1);
   }
   for (int i =0; i < size; i++) {
      printf("Compares checked value of array %d to %d\n", array[i], value);
      if (array[i] == value) {
         return (i);
      }
   }
   return (-1);
}
