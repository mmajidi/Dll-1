#ifndef INDLL_H
#define INDLL_H

#ifdef EXPORTING_DLL
extern __declspec(dllexport) void enumProcessDll() ;
#else
extern __declspec(dllimport) void enumProcessDll() ;
#endif

#endif
