[Main menu](../../Readme.md)->[doc](../stringDyn-doc.md)

# stringDyn_create(\_)

Creates a string.

## **Declaration**

```C
char *stringDyn_create(
                        char *s
                    )
```

## **Parameter**
**s**  
The string which is going to be created.

## **Result**

Returns the created string. `NULL` if failed

It is just a masking of
```C
char *strdup(char)
```
