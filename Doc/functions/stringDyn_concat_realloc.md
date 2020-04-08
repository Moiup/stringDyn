[Main menu](../../Readme.md)->[doc](../stringDyn-doc.md)

# stringDyn_concat_realloc(\_,\_)

Connect the client to a given server

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
Return the concatenation of `s1` with `s2` by reallocating `s1`.
