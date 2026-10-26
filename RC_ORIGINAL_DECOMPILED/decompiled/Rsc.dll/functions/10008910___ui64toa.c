/*
 * __ui64toa at 10008910
 * char * __cdecl __ui64toa(ulonglong _Val, char * _DstBuf, int _Radix)
 * Address ranges: 10008910-1000892e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __ui64toa  Library: Visual Studio 2003 Debug
 */

/* Library Function - Single Match
    __ui64toa
   
   Library: Visual Studio 2003 Debug */

char * __cdecl __ui64toa(ulonglong _Val,char *_DstBuf,int _Radix)

{
  x64toa(_Val,_DstBuf,_Radix,0);
  return _DstBuf;
}

