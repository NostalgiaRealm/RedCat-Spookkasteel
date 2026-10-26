/*
 * FUN_00600b97 at 00600b97
 * undefined FUN_00600b97(void)
 * Address ranges: 00600b97-00600c08
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00600b97(LPSTR param_1,WCHAR param_2,undefined4 param_3,int *param_4)

{
  UINT CodePage;
  int iVar1;
  
  CodePage = DAT_0070fffc;
  iVar1 = DAT_0070ffec;
  if (param_4 != (int *)0x0) {
    CodePage = param_4[1];
    iVar1 = *param_4;
  }
  if (iVar1 == 0) {
    if ((ushort)param_2 < 0x100) {
      *param_1 = (CHAR)param_2;
      return 1;
    }
  }
  else {
    param_4 = (int *)0x0;
    iVar1 = WideCharToMultiByte(CodePage,0x220,&param_2,1,param_1,DAT_006b28bc,(LPCSTR)0x0,
                                (LPBOOL)&param_4);
    if ((iVar1 != 0) && (param_4 == (int *)0x0)) {
      return iVar1;
    }
  }
  DAT_0070ff98 = 0x2a;
  return -1;
}

