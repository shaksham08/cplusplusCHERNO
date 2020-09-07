# Templates in C++

- Templates are almost like a macro and they let us do pretty much everything.

- We can say compiler to write a code according to your rule, its just a blueprint.

```c++
#include <iostream>
#include <string>

void Print(std::string value)
{
	std::cout << value << std::endl;
}
void Print(int value)
{
	std::cout << value << std::endl;
}
void Print(float value)
{
	std::cout << value << std::endl;
}

int main()
{
	Print(2.5f);
	Print("hello");
	Print(2);
	return 0;
}
```

here we can se that there are three functions with same body but jsut datatype is changed

- so we manually defined overloaded funcitons.

- so we want to avoid code duplication

```c++
#include <iostream>
#include <string>
template<typename T>
void Print(T value)
{
	std::cout << value << std::endl;
}


int main()
{
	Print(2.5f);
	Print("hello");
	Print(2);
	return 0;
}
```

Here we have defined the template for this.

- So this is evaluated at compiled time, this is not a actual funciton , this is actually created by compiler at compile time.

```c++
#include <iostream>
#include <string>
template<typename T>
void Print(T value)
{
	std::cout << value << std::endl;
}


int main()
{
	Print<std::string>("hello");
	Print<int>(5);
	return 0;
}
```

- We can also write this type

- template only gets created when we call that funciton only.

- Now let just use it for the class

```c++
#include <iostream>
#include <string>
template<typename t,int N>
class Array
{
private:
	int m_Array[N];
public:
	int GetSize() const { return N; }
};

int main()
{
	Array<int,5> array;
	std::cout << array.GetSize()<<std::endl;
	return 0;
}
```

```c++
#include <iostream>
using namespace std;

template <typename T>
class Array {
private:
    T *ptr;
    int size;
public:
    Array(T arr[], int s);
    void print();
};

template <typename T>
Array<T>::Array(T arr[], int s) {
    ptr = new T[s];
    size = s;
    for(int i = 0; i < size; i++)
        ptr[i] = arr[i];
}

template <typename T>
void Array<T>::print() {
    for (int i = 0; i < size; i++)
        cout<<" "<<*(ptr + i);
    cout<<endl;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    Array<int> a(arr, 5);
    a.print();
    return 0;
}
```

```c++
#include<iostream>
using namespace std;

template<class T, class U>
class A  {
    T x;
    U y;
public:
    A() {    cout<<"Constructor Called"<<endl;   }
};

int main()  {
   A<char, char> a;
   A<int, double> b;
   return 0;
}
```
