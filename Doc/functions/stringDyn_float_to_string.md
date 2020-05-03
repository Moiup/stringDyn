[Main menu](../../Readme.md)->[doc](../stringDyn-doc.md)

# stringDyn_int_to_string(\_)

Converts a float to a string.

## **Declaration**

```C
char *stringDyn_float_to_string(
                        float d,
                        int n
                    )
```

## **Parameters**
**d**  
The floating number to write as a string.

**n**
The number of digits to put after the `.`.


## **Result**
Returns the string representing the float `d`. Returns `NULL` if failed.
