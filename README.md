# Solution
Solution for given tasks :)

# Task1

### Задание 1.

Написать следующую функцию. На входе 5 параметров: трехмерный массив int***/mtrx, его размеры int l, int m, int n и целое число int z.
Функция должна осуществлять поиск среди всех элементов массива, значения которых равны z. 
Функция возвращает двумерный vector/list, каждый элемент которого является vector/list'ом размера 3 и содержит координаты элемента mtrx, 
значение которого совпадает с числом z. 

### Solution

To solve this problem, firstly we need to create 3d dimensional array. For that implemented function [**arraycreator**](https://github.com/nurbolatkz/solution/blob/main/solution_1task/arraycreator.cpp) with 5 parametres as described in task. After that, we have created 3d array, we need to find elements of array which are equal to value of z and save coordinates of this element into vector.To do that I created [**searchKvalue**](https://github.com/nurbolatkz/solution/blob/main/solution_1task/searchKvalue.cpp) function which is return vector of vectors, after all we need to free allocated memory. In this step, I used [**arraycleaner**](https://github.com/nurbolatkz/solution/blob/main/solution_1task/arraycleaner.cpp) function.

### Result

To check result, as you know just write **make**

# Task 
### Задание 2.
Матрица размера N x N (где N - случайное число в диапазоне от 3 до 10) должна быть заполнена числами от 1 до N x N по спирали от внешнего "кольца" к центру (реализовано с помощью класса matrix). Порядок обхода спирали (по часовой или против) определяется случайным образом при каждом запуске программы (как и число N).

### Solution
if n is equal to 4 we need to print array as shown below
  
  |col1|col2|col3|col4|
  |----|----|----|----|
  |10  | 11 | 12| 13 |
  | 9  | 2  | 3 | 14 |
  | 8  | 1  | 4 | 15 |
  | 7  | 6  | 5 | 16 |

To solve this task we need to do several steps:
- create empty array with size n * n
- find max value in array
- fill array as shown above

[Soltuion code](https://github.com/nurbolatkz/solution/blob/main/solution_task2/printerarray.cpp)

As you can see, I started filling with col4 from imax to imin. In the next step, filled row1 from jmax to jmin. After that filled col1 from imin to imax, and so put values to last row. After each iteration decreased jmax, imax and increased imin, jmin to reach center of matrix.
