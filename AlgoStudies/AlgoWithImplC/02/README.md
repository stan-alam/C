## 02

<a>
  <img src="https://github.com/stan-alam/C/blob/develop/AlgoStudies/AlgoWithImplC/02/images/AlgoImpC01%20-%2018.png" width="80%" height="80%">
</a>

<a>
  <img src="https://github.com/stan-alam/C/blob/develop/AlgoStudies/AlgoWithImplC/02/images/AlgoImpC01%20-%2019.png" width="80%" height="80%">
</a>

<a>
  <img src="https://github.com/stan-alam/C/blob/develop/AlgoStudies/AlgoWithImplC/02/images/AlgoImpC01%20-%2020.png" width="80%" height="80%">
</a>

<a>
  <img src="https://github.com/stan-alam/C/blob/develop/AlgoStudies/AlgoWithImplC/02/images/AlgoImpC01%20-%2021.png" width="80%" height="80%">
</a>

<a>
  <img src="https://github.com/stan-alam/C/blob/develop/AlgoStudies/AlgoWithImplC/02/images/AlgoImpC01%20-%2022.png" width="80%" height="80%">
</a>

<a>
  <img src="https://github.com/stan-alam/C/blob/develop/AlgoStudies/AlgoWithImplC/02/images/AlgoImpC01%20-%2023.png" width="80%" height="80%">
</a>

<a>
  <img src="https://github.com/stan-alam/C/blob/develop/AlgoStudies/AlgoWithImplC/02/images/AlgoImpC01%20-%2024A.png" width="80%" height="80%">
</a>

```C
//9AB
#include <stdlib.h>
#include <time.h>

int dim = 9;
int matrix[dim][dim];
int n = dim * dim;
int a[n];
srand(time(0));

for (int i = 0; i < n; i++)
{
  a[i] = rand() % (2 * n);
  int row_num = i / dim;
  int col_num = i % dim;
  matrix[row_num] [col_num] = a[i];
  printf("i = %d, row = %d, col = %d, element = %d\n", i,\n", i, row_num, col_num, a[i]);
}

```
<a>
  <img src="https://github.com/stan-alam/C/blob/develop/AlgoStudies/AlgoWithImplC/02/images/AlgoImpC01%20-%2024B.png" width="80%" height="80%">
</a>

<a>
  <img src="https://github.com/stan-alam/C/blob/develop/AlgoStudies/AlgoWithImplC/02/images/AlgoImpC01%20-%2025.png" width="80%" height="80%">
</a>

<a>
  <img src="https://github.com/stan-alam/C/blob/develop/AlgoStudies/AlgoWithImplC/02/images/AlgoImpC01%20-%2026.png" width="80%" height="80%">
</a>

<a>
  <img src="https://github.com/stan-alam/C/blob/develop/AlgoStudies/AlgoWithImplC/02/images/AlgoImpC01%20-%2027.png" width="80%" height="80%">
</a>
