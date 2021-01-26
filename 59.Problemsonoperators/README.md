# Problems on operators in C++

1.

```c++
#include<iostream>
using namespace std;
int main()
{
    int x=5;
    bool res = (x==4)&&(x++);
    cout<<res<<" "<<x;
    return 0;
}
```

- The ouput is -> 0 5

2.

```c++
#include<iostream>
using namespace std;
int main()
{
    int x=5;
    bool res = (x==4)||(x++);
    cout<<res<<" "<<x;
    return 0;
}
```

- The ouput is -> 1 6

3.

```c++
#include<iostream>
using namespace std;
int main()
{
    int x=5;
    bool res = (x==5)||(x++);
    cout<<res<<" "<<x;
    return 0;
}
```

- The ouput is -> 1 5

4.

```c++
#include<iostream>
using namespace std;
int main()
{
    int x=1,y=2,z=3,a;
    a = (x,y,z); //comma operator is lowest precedance and this is binary operator
    //comma operator return the second value
    cout<<a;
    return 0;
}
```

- The ouput is -> 3

5.

```c++
#include<iostream>
using namespace std;
int main()
{
    int x=1,y=2,z=3,a;
    a = x,y,z; //comma operator is lowest precedance and this is binary operator
    //comma operator return the second value
    cout<<a;
    return 0;
}
```

- The ouput is -> 1

6.

```c++
#include<iostream>
using namespace std;
int main()
{
    int a=10,b=20,c=30;
    if(c>b>a)cout<<"Y;
    //associativuty comes into picture left to right
    // c>b -> 1
    // 1 > a = false
    else cout<<"N";
    return 0;
}
```

- The ouput is -> N
