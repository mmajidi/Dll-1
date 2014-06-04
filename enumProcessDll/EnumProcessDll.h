#ifndef INDLL_H
#define INDLL_H

#ifdef EXPORTING_DLL
extern __declspec(dllexport) int Enumproc(int number, int interval) ;
#else
extern __declspec(dllimport) int Enumproc(int number, int interval) ;
#endif

#endif
