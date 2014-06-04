#ifndef INDLL_H
#define INDLL_H

#ifdef EXPORTING_DLL
extern __declspec(dllexport) void Enumproc() ;
#else
extern __declspec(dllimport) void Enumproc() ;
#endif

#endif
