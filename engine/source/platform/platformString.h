//-----------------------------------------------------------------------------
// Torque
// Copyright GarageGames, LLC 2011
//-----------------------------------------------------------------------------

#ifndef _PLATFORM_STRING_H_
#define _PLATFORM_STRING_H_

#ifndef _TORQUE_TYPES_H_
#include "platform/types.h"
#endif

//------------------------------------------------------------------------------

extern char* dStrcat(char *dst, const char *src);
extern UTF8* dStrcat(UTF8 *dst, const UTF8 *src);

extern char* dStrncat(char* dst, const char* src, dsize_t len);
extern char* dStrcatl(char *dst, dsize_t dstSize, ...);

extern int dStrcmp(const char *str1, const char *str2);
extern int dStrcmp(const UTF16 *str1, const UTF16 *str2);
extern int dStrcmp(const UTF8 *str1, const UTF8 *str2);

extern int dStricmp(const char *str1, const char *str2);
extern int dStrncmp(const char *str1, const char *str2, dsize_t len);
extern int dStrnicmp(const char *str1, const char *str2, dsize_t len);
extern char* dStrcpy(char *dst, const char *src);

extern char* dStrcpyl(char *dst, dsize_t dstSize, ...);
extern char* dStrncpy(char *dst, const char *src, dsize_t len);
extern char* dStrncpy(UTF8 *dst, const UTF8 *src, dsize_t len);

extern dsize_t dStrlen(const char *str);

extern char* dStrupr(char *str);
extern char* dStrlwr(char *str);
extern char* dStrchr(char *str, int c);
extern const char* dStrchr(const char *str, int c);
extern char* dStrrchr(char *str, int c);
extern const char* dStrrchr(const char *str, int c);
extern dsize_t dStrspn(const char *str, const char *set);
extern dsize_t dStrcspn(const char *str, const char *set);

extern char* dStrstr(char *str1, char *str2);
extern char* dStrstr(const char *str1, const char *str2);

extern char* dStrtok(char *str, const char *sep);

extern int dAtoi(const char *str);
extern float dAtof(const char *str);
extern bool dAtob(const char *str);

extern void dPrintf(const char *format, ...);
extern int dVprintf(const char *format, void *arglist);
extern int dSprintf(char *buffer, dsize_t bufferSize, const char *format, ...);
extern int dVsprintf(char *buffer, dsize_t bufferSize, const char *format, void *arglist);

extern int dItoa(int n, char s[]);
extern int dStrrev(char* str);

extern int dSscanf(const char *buffer, const char *format, ...);
extern int dFflushStdout();
extern int dFflushStderr();

inline char dToupper(const char c) { if (c >= char('a') && c <= char('z')) return char(c + 'A' - 'a'); else return c; }
inline char dTolower(const char c) { if (c >= char('A') && c <= char('Z')) return char(c - 'A' + 'a'); else return c; }

extern bool dIsalnum(const char c);
extern bool dIsalpha(const char c);
extern bool dIsdigit(const char c);
extern bool dIsspace(const char c);

#define QSORT_CALLBACK FN_CDECL
extern void dQsort(void *base, U32 nelem, U32 width, int (QSORT_CALLBACK *fcmp)(const void *, const void *));

// UNICODE is a windows platform API switching flag. Don't define it on other platforms.
#ifdef UNICODE
#define dT(s)    L##s
#else
#define dT(s)    s
#endif

#define dStrdup(x) dStrdup_r(x, __FILE__, __LINE__)

extern char* dStrdup_r(const char *src, const char*, dsize_t);

#endif  // _PLATFORM_STRING_H_
