# Task1
<p>
<h1>Задание 1.</h1> аписать следующую функцию. На входе 5 параметров: трехмерный массив int ***mtrx, его размеры int l, int m, int n и целое число int z.Функция должна осуществлять поиск среди всех элементов массива, значения которых равны z. Функция возвращает двумерный vector/list, каждый элемент которого является vector/list'ом размера 3 и содержит координаты элемента mtrx, значение которого совпадает с числом z. </p>

## Solution
To solve this problem, firstly we need to create 3d dimensional array. For that implemented function <b>arraycreator</b> with 5 parametres as described in task. After that, we have created 3d array, we need to find elements of array which are equal to value of z and save coordinates of this element into vector.To do that I created searchKvalue function which is return vector of vectors, after all we need to free allocated memory. In this step, I use arraycleaner function.

### Result

To check result, as you know just write <b>make</b>
