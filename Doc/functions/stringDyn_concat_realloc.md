[Main menu](../../Readme.md)->[doc](../stringDyn-doc.md)

# stringDyn_concat_realloc(\_,\_)

Concats the second string in the first one (with reallocation).

## **Declaration**

```C
char *stringDyn_concat_realloc(
                        char *s1,
                        char *s2
                    )
```

## **Parameter**
**s1**  
The first string.

**s2**
The second string.

## **Result**
Returns the concatenation of `s1` with `s2` by reallocating `s1`. Returns `NULL` if failed.
