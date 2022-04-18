#pragma once

#define USE_FAAD2

/* #undef HAVE_PTHREAD_SETNAME_NP */
/* #undef HAVE_STRNDUP */
/* #undef HAVE_CMPLXF */
/* #undef HAVE_IMAGINARY_I */
#define HAVE_COMPLEX_I

#define LIBRARY_DEBUG_LEVEL 5

#ifndef HAVE_STRNDUP
#include <stdlib.h>
char *strndup(char const *s, size_t n);
#endif

#define strdup _strdup
