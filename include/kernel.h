/* kernel.h */

/* Type Definitions Used By Kernel */
/* General Types */
typedef signed char int8;
typedef unsigned char uint8;
typedef unsigned char byte;

typedef signed short int int16;
typedef unsigned short int uint16;

typedef signed int int32;
typedef unsigned int uint32;

typedef signed long long int int64;
typedef unsigned long long int uint64;

/* System Function Types */
typedef int32 thread;   /* entry function into a thread */

/* Boolean */
#define FALSE 0
#define TRUE 1

/* NULLS */
#define NULL 0
#define NULLCHAR '\0'
#define NULLSTR ""

/* Basic Return Types */
#define SYS_OK (1)
#define SYS_ERR (-1)

/* Process Attributes */
#define MINSTACK    400 /* minimum stack size in bytes */

#define QUANTUM     2   /* time per scheduling slice */