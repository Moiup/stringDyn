[Main menu](../../Readme.md)->[doc](../stringDyn-doc.md)

# stringDyn_split(\_,\_,\_,\_)
Split a string according to a delimiter.

The result is in a new tab, it is independent from the original string.

## **Declaration**

```C
char *stringDyn_split(
                char *s,
                char *d,
                int n,
                int *n_tab
            )
```

## **Parameter**
**s**  
The string to be split.

**d**
The delimiter used to split the string `s`.

**n**
The number of resulting string to get. 0 to split as much as the number of delimiter found.

## **Result**
An array of strings.
