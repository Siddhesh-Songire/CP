# Pointers are vaiables that store address fo another vaiable

![Alt text](image-9.png)

Pointer is used for dereferecing the objects

```
    #include <bits/stdc++.h>
    using namespace std;

    int main(){

    }
```

![Alt text](image-1.png)Here p stores the address of a

important to note
![Alt text](image-2.png)
we do not have Value at address p+1 so therefore garbage value is shown

### Pointers to pointer

![Alt text](image-3.png)

### Pointers and Arrays

![Alt text](image-4.png)

![Alt text](image-5.png)
Both A and A[0] gives the address of first element.

![Alt text](image-6.png)

---

### Dynamic memeory allocation

[Gfg article](https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/)

- malloc
- calloc
- free
- realloc

- new() and delete are used in c++

Difference between malloc and calloc is in synatax and one more difference is that calloc intialised the values with 0 , while malloc gives garbage value
![Alt text](image-7.png) ![Alt text](image-8.png)
