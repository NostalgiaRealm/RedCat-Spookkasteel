/*
 * FUN_100314c5 at 100314c5
 * undefined FUN_100314c5(void)
 * Address ranges: 100314c5-1003152d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100314c5(LPSTR param_1,WCHAR param_2)

{
  LPSTR lpMultiByteStr;
  int iVar1;
  undefined4 *puVar2;
  
  lpMultiByteStr = param_1;
  if (param_1 == (LPSTR)0x0) {
    return 0;
  }
  if (DAT_1052a5d8 == 0) {
    if ((ushort)param_2 < 0x100) {
      *param_1 = (CHAR)param_2;
      return 1;
    }
  }
  else {
    param_1 = (LPSTR)0x0;
    iVar1 = WideCharToMultiByte(DAT_1052a5e8,0x220,&param_2,1,lpMultiByteStr,DAT_1003d32c,
                                (LPCSTR)0x0,(LPBOOL)&param_1);
    if ((iVar1 != 0) && (param_1 == (LPSTR)0x0)) {
      return iVar1;
    }
  }
  puVar2 = (undefined4 *)FUN_1002b3dc();
  *puVar2 = 0x2a;
  return -1;
}

