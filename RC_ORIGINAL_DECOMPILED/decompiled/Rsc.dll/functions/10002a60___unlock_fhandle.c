/*
 * __unlock_fhandle at 10002a60
 * void __cdecl __unlock_fhandle(int _Filehandle)
 * Address ranges: 10002a60-10002a85
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __unlock_fhandle  Library: Visual Studio 2003 Debug
 */

/* Library Function - Single Match
    __unlock_fhandle
   
   Library: Visual Studio 2003 Debug */

void __cdecl __unlock_fhandle(int _Filehandle)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_10031ac0)[_Filehandle >> 5] + 0xc + (_Filehandle & 0x1fU) * 0x24));
  return;
}

