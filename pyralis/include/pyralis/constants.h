#ifndef PYRALIS_CONSTANTS_H
#define PYRALIS_CONSTANTS_H

#include <cstddef> 
#include <cstdint> 

typedef uint8_t uint8;
typedef uint16_t uint16;
typedef uint32_t uint32;
typedef uint64_t uint64;

typedef int8_t int8;
typedef int16_t int16;
typedef int32_t int32;
typedef int64_t int64;

#ifdef _WIN32
  #ifdef PYRALIS_EXPORTS
    #define PYRALIS_API __declspec( dllexport )
  #else
    #define PYRALIS_API __declspec( dllimport )
  #endif

  #include <string>

  // Make Visual Studio happy
  template class PYRALIS_API std::basic_string<char,
    std::char_traits<char>,
    std::allocator<char>>;
#else
  #define PYRALIS_API 
#endif

#endif // PYRALIS_CONSTANTS_H
