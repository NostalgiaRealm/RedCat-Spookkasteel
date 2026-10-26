/*
 * FUN_0061ef02 at 0061ef02
 * undefined FUN_0061ef02(void)
 * Address ranges: 0061ef02-0061f047
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0061ef02(uint param_1,int param_2)

{
  int iVar1;
  HANDLE hFile;
  BOOL BVar2;
  int iVar3;
  undefined1 local_1004 [4060];
  undefined4 uStackY_28;
  uint uStackY_24;
  uint uStackY_20;
  
  FUN_0060df70();
  iVar3 = 0;
  if ((param_1 < DAT_00747c60) &&
     ((*(byte *)((&DAT_00747b60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8) & 1) != 0)) {
    iVar1 = FUN_0061c879();
    if ((iVar1 != -1) && (iVar1 = FUN_0061c879(), iVar1 != -1)) {
      param_2 = param_2 - iVar1;
      if (param_2 < 1) {
        if (param_2 < 0) {
          uStackY_20 = 0x61eff1;
          FUN_0061c879();
          uStackY_20 = param_1;
          uStackY_24 = 0x61eff7;
          hFile = (HANDLE)FUN_0061dead();
          BVar2 = SetEndOfFile(hFile);
          iVar3 = (BVar2 != 0) - 1;
          if (iVar3 == -1) {
            DAT_0070ff98 = 0xd;
            DAT_0070ff9c = GetLastError();
          }
        }
      }
      else {
        uStackY_20 = 0x61ef87;
        _memset(local_1004,0,0x1000);
        uStackY_20 = 0x8000;
        uStackY_24 = param_1;
        uStackY_28 = 0x61ef92;
        FUN_0061f52a();
        do {
          uStackY_20 = 0x61efb1;
          iVar1 = FUN_0061b317();
          if (iVar1 == -1) {
            if (DAT_0070ff9c == 5) {
              DAT_0070ff98 = 0xd;
            }
            iVar3 = -1;
            break;
          }
          param_2 = param_2 - iVar1;
        } while (0 < param_2);
        FUN_0061f52a();
      }
      uStackY_20 = 0x61f02f;
      FUN_0061c879();
      return iVar3;
    }
  }
  else {
    DAT_0070ff98 = 9;
  }
  return -1;
}

