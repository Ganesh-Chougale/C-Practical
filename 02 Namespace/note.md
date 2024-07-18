Namespace is similar to Dot notation, where Dot notation used for drilling object, namespace is used for drilling class & library.

when we use

```cpp
std::
```

it defines that we are drilling inside <iostream> library but once we declare the namespace at top, like this

```cpp
using namespace std;
```

then we do not need to repeat the namespace over & over again.