/*
 * FUN_0061d5f1 at 0061d5f1
 * undefined FUN_0061d5f1(void)
 * Address ranges: 0061d5f1-0061d658
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0061d5f1(LPSTR param_1,WCHAR param_2)

{
  LPSTR lpMultiByteStr;
  int iVar1;
  
  lpMultiByteStr = param_1;
  if (param_1 == (LPSTR)0x0) {
    return 0;
  }
  if (DAT_0070ffec == 0) {
    if ((ushort)param_2 < 0x100) {
      *param_1 = (CHAR)param_2;
      return 1;
    }
  }
  else {
    param_1 = (LPSTR)0x0;
    iVar1 = WideCharToMultiByte(DAT_0070fffc,0x220,&param_2,1,lpMultiByteStr,DAT_006b28bc,
                                (LPCSTR)0x0,(LPBOOL)&param_1);
    if ((iVar1 != 0) && (param_1 == (LPSTR)0x0)) {
      return iVar1;
    }
  }
  DAT_0070ff98 = 0x2a;
  return -1;
}

