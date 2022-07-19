# Computer Science Concept

These material are take from CS50 2022

## មតិកា

[Array](#week-2-array)

[Algorithm-ភាសាខ្មែរ](#algorithm)

## Week 2 Array

- C use compiler to convert source code to machine code
- make is actually run a program call clang
- a.out is the default name convention when we compile our code

### Debugging

- We can’t write the eniter program with bug free there must be bugs along the way when we write a program
- In order to solve this, we have some processes to help

  - Use printf function
  - Use debug50 ( Debugger )

  ```c
  debug50 ./buggy.c ( name of the program )
  ```

  What the debugger do is to walk through our program step by step

  - Use Rubber duck debugging ( Talking through with inanimate animal rubber duck )

### Array

When we want to group values with the same type together we use array.

```c
int scores[3];
scores[0] = 72;
scores[1] = 73;
scores[2] = 33;
```

The purpose of an array is not to save space but to eliminate the variable name

### NUL Character

- NUL is a special symbol to know where the character end and where to begin. The symbol it uses is general \0 it’s a shorthand for eight 0s bits and the nickname of this eight 0s bit is **NUL**
- So whatever the length of a character is there is always 0 at the end. For example HI! is not stored in 3 bytes but 4.
- So string does not have a specific length of bytes it depends on the character it has so string needs NUL to specify or to separate from one another.

### Length.c

```c
#include<stdio.h>
#include<cs50.h>

int string_length();

int main(void)
{
    string name = get_string("What is your name? ");

    int length = string_length(name);

}

int string_length(string s)
{
    int i = 0;
    while(s[i] != '\0')
    {
        i++;
    }
    return printf("%i\n",i);
}
```

### strlen

In fact, we do not need to implement our length finding by our own because we already have a library called `#include<string.h>` that has a function called `strlen()` it’s job is to find the length of the string exactly work like we implement code above.

### string.c

```c
#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(void)
{
    string s = get_string("Input: ");
    printf("Output: ");
    for(int i = 0, n= strlen(s); i < n; i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}
```

### uppercase.c

```c
#include<cs50.h>
#include<stdio.h>
#include<string.h>

int main(void)
{
    string s = get_string("Before:  ");
    printf("After:  ");
    for(int i = 0, n = strlen(s); i < n; i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
             printf("%c", s[i] - 32);
        }else
        {
            printf("%c", s[i]);
        }

    }
    printf("\n");
    return 0;
}
```

### islower

- There is a function called lower check if the character is lowercase.
- we need to include a library called `#include<ctype.h>`
- The way it returns a value is **when a character is lowercase it returns some number besides 0** and **if it is not a lowercase return a 0 or equivalence to false**.

```c
#include<cs50.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(void)
{
    string s = get_string("Before:  ");
    printf("After:  ");
    for(int i = 0, n = strlen(s); i < n;i++)
    {
        if(islower(s[i]) != 0)
        {
             printf("%c", s[i] - 32);
        }else
        {
            printf("%c", s[i]);
        }

    }
    printf("\n");
    return 0;
}
```

### toupper

instead of plus our character with 32 to make our character uppercase we can use a function called `toupper()`

```C
#include<cs50.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(void)
{
    string s = get_string("Before:  ");
    printf("After:  ");
    for(int i = 0, n = strlen(s); i < n;i++)
    {
        if(islower(s[i]) != 0)
        {
             printf("%c", toupper(s[I]));  // This is the function
        }else
        {
            printf("%c", s[i]);
        }

    }
    printf("\n");
    return 0;
}
```

We also can write it this ways ( if it is not uppercase mean that order symbol and sign it will just simply show what it is )

```C
#include<cs50.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(void)
{
    string s = get_string("Before:  ");
    printf("After:  ");
    for(int i = 0, n = strlen(s); i < n;i++)
    {
        printf("%c", toupper(s[i]))
    }
    printf("\n");
    return 0;
}
```

### Comand line argurment

We will write a program that takes command-line arguments

```C
#include<stdio.h>
int main(void)
{
}
```

void means it does not take the command-line argument

```C
#include<stdio.h>
int main(int argc,string argv[])
{
}
```

- If you write it like this you will write a program that takes a command-line argument
- **argc** stand for argument count is an integer storing how many words a human type at the prompt
- **string argv[ ]** stand for argument vector it is gonna be array of all the word that the human have been type at the prompt
- So what it does is allow human to type ( at argv ) and then tell the length ( at argc )
- Now let's write a program let greeting hello ..... but not using get_string

## Algorithm

យើងនិងស្វែងយល់ពីរបៀបដោះស្រាយបញ្ហាដែលមានសារះសំខាន់នៅក្នុង Computer Science ហៅថា Algorithm ។

<img src="https://prnt.sc/VezOAvVTg-yM" alt="array-of-random-integer">

រូបខាងលើសម្រាប់មនុស្សគឺយើងមានភាពងាយស្រួលក្នុងការប្រាប់និងដឹងថាលេខមួយនិងមាននៅក្នុង Array និងទេហើយពួកយើងក៏មានភាពងាយស្រួលក្នុងការរៀបពួកវាតាមលំដាប់ពីធំទៅតូចឬក៏ពីតូចទៅធំបានផងដែរ ។ ផ្ទុយមកវិញកំព្យូទ័រខុសពីពួកយើងនៅពេលដែលកំព្យូទ័ររកថាលេខណាមួយមាននៅក្នុងArrayឬក៏អត់យើងអាចប្រៀបធៀបដែរវារកនោះទៅនិងមនុ្សសដើរទៅបើកប្រអប់ម្តងមួយៗហើយមើលថាមានអ្វីនៅក្នុងប្រអប់ដែលគេបើកនោះ ។ ចឹងមិនដូចមនុស្សយើងដែលមានភ្នែកស្ទែងមើលឃើញអ្វីៗពីលើអាកាសទេកំព្យូទ័រគឺត្រូវមាននូវ Methodology ដើម្បីទៅមើលថាមានអ្វីនៅទីនេះនិងមានអ្វីនៅទីនោះ ។
