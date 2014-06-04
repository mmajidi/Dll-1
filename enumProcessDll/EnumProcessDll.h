#ifndef INDLL_H
#define INDLL_H

#ifdef EXPORTING_DLL
extern __declspec(dllexport) int Enumproc(int Number, int Interval) ;
#else
extern __declspec(dllimport) int Enumproc(int Number, int Interval) ;
#endif

#endif
