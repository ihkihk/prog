# C/C++ cookbook
*Author: IKA*  
*Last update: 2016-08-25*

## Some Macros

* Some common macros  
```c
/* common macros */

#define MSB(x)	(((x) >> 8) & 0xff)	  /* most signif byte of 2-byte integer */
#define LSB(x)	((x) & 0xff)		  /* least signif byte of 2-byte integer*/
#define MSW(x) (((x) >> 16) & 0xffff) /* most signif word of 2-word integer */
#define LSW(x) ((x) & 0xffff) 		  /* least signif byte of 2-word integer*/

/* swap the MSW with the LSW of a 32 bit integer */
#define WORDSWAP(x) (MSW(x) | (LSW(x) << 16))

#define LLSB(x)	((x) & 0xff)		/* 32bit word byte/word swap macros */
#define LNLSB(x) (((x) >> 8) & 0xff)
#define LNMSB(x) (((x) >> 16) & 0xff)
#define LMSB(x)	 (((x) >> 24) & 0xff)
#define LONGSWAP(x) ((LLSB(x) << 24) | \
		     (LNLSB(x) << 16)| \
		     (LNMSB(x) << 8) | \
		     (LMSB(x)))

#define OFFSET(structure, member)	/* byte offset of member in structure*/\
		((long) &(((structure *) 0) -> member))

#define MEMBER_SIZE(structure, member)	/* size of a member of a structure */\
		(sizeof (((structure *) 0) -> member))

#define NELEMENTS(array)		/* number of elements in an array */ \
		(sizeof (array) / sizeof ((array) [0]))

#define FOREVER	for (;;)
```

* min/max macros  
```c
/* 
 * min & max are C++ standard functions which are provided by the user 
 * side C++ libraries
 */

#if !defined(__cplusplus)

#ifndef max
#define max(x, y)	(((x) < (y)) ? (y) : (x))
#endif

#ifndef min
#define min(x, y)	(((x) < (y)) ? (x) : (y))
#endif

#endif /* !__cplusplus */
```

* Alignment calculation macros:
```c
#define ROUND_UP(x, align)	(((long) (x) + ((long) align - 1)) & \
                                 ~((long) align - 1))
#define ROUND_DOWN(x, align)	((long) (x) & ~((long) align - 1))
#define ALIGNED(x, align)	(((long) (x) & ((long) align - 1)) == 0)
```

* How to print the value of defines in GCC (using diagnostic messages)
```c
/* Some test definition here */
#define DEFINED_BUT_NO_VALUE
#define DEFINED_INT 3
#define DEFINED_STR "ABC"

/* definition to expand macro then apply to pragma message */
#define VALUE_TO_STRING(x) #x
#define VALUE(x) VALUE_TO_STRING(x)
#define VAR_NAME_VALUE(var) #var "="  VALUE(var)

/* Some example here */
#pragma message(VAR_NAME_VALUE(NOT_DEFINED))
#pragma message(VAR_NAME_VALUE(DEFINED_BUT_NO_VALUE))
#pragma message(VAR_NAME_VALUE(DEFINED_INT))
#pragma message(VAR_NAME_VALUE(DEFINED_STR))
```
