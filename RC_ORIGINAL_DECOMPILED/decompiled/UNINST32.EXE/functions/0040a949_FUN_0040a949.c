/*
 * FUN_0040a949 at 0040a949
 * undefined4 __cdecl FUN_0040a949(LPCSTR param_1)
 * Address ranges: 0040a949-0040a9eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_0040a949(LPCSTR param_1)

{
  HFILE hFile;
  uint local_10c [64];
  LONG local_c;
  undefined4 local_8;
  
  lstrcpyA((LPSTR)local_10c,param_1);
  FUN_0040a794(local_10c,0);
  local_8 = 0;
  if (DAT_004136b0 != 0) {
    hFile = _lopen(param_1,0);
    if (-1 < hFile) {
      _lread(hFile,(LPVOID)((int)&param_1 + 2),2);
      if (param_1._2_2_ == 0x5a4d) {
        _llseek(hFile,0x3c,0);
        _lread(hFile,&local_c,4);
        _llseek(hFile,local_c,0);
        _lread(hFile,(LPVOID)((int)&param_1 + 2),2);
        if (param_1._2_2_ == 0x4550) {
          local_8 = 1;
        }
      }
      _lclose(hFile);
    }
  }
  return local_8;
}

