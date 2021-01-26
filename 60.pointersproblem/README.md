# Problems on Pointers

1.

```c++

int main()
{
    int arr[] = {10,20};
    int *p1 = arr;
    ++*p1; // same precedance so right to left ++(*p1)
    cout<<arr[0]<<" "<<arr[1]<<" "<<*p1;
    return 0;
}
```

- the output is -> 11 20 11

2.

```c++

int main()
{
    int arr[] = {10,20};
    int *p2 = arr;
    *p2++; // potfix hai higher precendace over * or prefix so *(p2++)
    cout<<arr[0]<<" "<<arr[1]<<" "<<*p12;
    return 0;
}
```

- the output is -> 10 20 20

3.

```c++

int main()
{
    int arr[] = {10,20};
    int *p3 = arr;
    *++p3; // potfix hai higher precendace over * or prefix so *(p2++)
    cout<<arr[0]<<" "<<arr[1]<<" "<<*p3;
    return 0;
}
```

- the output is -> 10 20 20
