# Multidimensional Arrays

- a collection of arrays

```c++
#include <iostream>


int main()
{
	int* array = new int[50]; //1D array
	int** a2d = new int* [50];//2D array
	//here above we just allocationg memory
	std::cin.get();
	return 0;
}
```

```c++
#include <iostream>


int main()
{
	int* array = new int[50]; //1D array
	int** a2d = new int* [50];//2D array
	//here above we just allocationg memory
	//here we jus allocated 200 bytes of memory in both cases

	std::cin.get();
	return 0;
}
```

```c++
#include <iostream>


int main()
{
	int* array = new int[50]; //1D array
	int** a2d = new int* [50];//2D array
	//here above we just allocationg memory
	//here we jus allocated 200 bytes of memory in both cases
	for (int i = 0; i < 50; i++)
	{
		a2d[i] = new int[50];
	}

	//3d array
	int*** a3d = new int** [50];
	for (int i = 0; i < 50; i++)
	{
		a3d[i] = new int*[50];
		for (int j = 0; i < 50; i++)
		{
			//int** ptr = a3d[i];
			//ptr[j] = new int[50];
			//or
			a3d[i][j] = new int[50];
		}
	}

    a3d[0][0][0]=0;

	std::cin.get();
	return 0;
}
```

```c++
#include <iostream>


int main()
{
	int* array = new int[50]; //1D array
	int** a2d = new int* [50];//2D array
	//here above we just allocationg memory
	//here we jus allocated 200 bytes of memory in both cases
	for (int i = 0; i < 50; i++)
	{
		a2d[i] = new int[50];
	}
	a2d[0][0] = 0;
	a2d[0][1] = 1;
	a2d[0][2] = 2;

	std::cin.get();
	return 0;
}
```

- Now to delete this we need to go loop over and then delete all

```c++
#include <iostream>


int main()
{
	int* array = new int[50]; //1D array
	int** a2d = new int* [50];//2D array
	//here above we just allocationg memory
	//here we jus allocated 200 bytes of memory in both cases
	for (int i = 0; i < 50; i++)
	{
		a2d[i] = new int[50];
	}
	a2d[0][0] = 0;
	a2d[0][1] = 1;
	a2d[0][2] = 2;

	for (int i = 0; i < 50; i++)
	{
		delete[] a2d[i];
	}
	delete[] a2d;

	std::cin.get();
	return 0;
}
```
