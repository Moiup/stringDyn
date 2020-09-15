[Main menu](../Readme.md)

# stringDyn

```C
char *stringDyn_create(char *)
```
Create a string. [More here.](./functions/stringDyn_create.md)

```C
char *stringDyn_concat_new(char *, char *)
```
Concat two strings and return a new one. [More here.](./functions/stringDyn_concat_new.md)

```C
char *stringDyn_concat_realloc(char *, char *)
```
Concat two strings by reallocating the first one. [More here.](./functions/stringDyn_concat_realloc.md)

```C
char **stringDyn_split(char *, char *, int, int *)
```
Split a string according to a delimiter. [More here.](./functions/stringDyn_split.md)

```C
char *stringDyn_int_to_string(int)
```
Convert a integer into a string. [More here.](./functions/stringDyn_int_to_string.md)

```C
char *stringDyn_float_to_string(float, int)
```
Convert a float into a string. [More here.](./functions/stringDyn_float_to_string.md)
