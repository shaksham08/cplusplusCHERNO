# Structure

```c++
struct Point
{
    int x;
    int y;
}
int main()
{
    struct Point p1; //this is optional struct keyword
    p1.x = 5;
    p1.y = 6;
}
```

```c
typedef struct Point
{
    int x;
    int y;
}
int main()
{
    Point p1; // for c we need to use typedef or else write full
    p1.x = 5;
    p1.y = 6;
}
```

```c++
struct Student
{
    int rollNumber;
    string name;;
}
int main()
{
    struct Point p1 ={10 , "shaksham"};
    //another way to initialize the structure
}
```

```c++
struct Student
{
    int rollNumber;
    string name;;
}
int main()
{
    struct Point p1 ={.name = "shaksham" , .rollnumber = 10};
    //another way to initialize the structure
    //here we can initialize or else leave any variable it will take the default value forint which is 0
}
```
