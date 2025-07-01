#ifndef TYPES_H
#define TYPES_H

typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef signed short int16_t;
typedef unsigned short uint16_t;
typedef signed int int32_t;
typedef unsigned int uint32_t;

#ifdef LP64 //Use this for Linux 64 bit 
typedef signed long int64_t;
typedef unsigned long uint64_t;
#else //Other platforms
typedef signed long long int64_t;
typedef unsigned long long uint64_t;
#endif

#endif //End of header file
