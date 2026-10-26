/*
 * FUN_10032bb5 at 10032bb5
 * undefined FUN_10032bb5(void)
 * Address ranges: 10032bb5-10032cd9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10032bb5(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  HANDLE hFile;
  BOOL BVar4;
  DWORD DVar5;
  DWORD *pDVar6;
  int iVar7;
  undefined1 local_1008 [4064];
  undefined4 uStackY_28;
  undefined4 uStackY_24;
  undefined4 uStackY_20;
  
  FUN_10027d90();
  iVar7 = 0;
  iVar1 = FUN_1002b453();
  if ((iVar1 == -1) || (iVar1 = FUN_1002b453(), iVar1 == -1)) {
    iVar7 = -1;
  }
  else {
    param_2 = param_2 - iVar1;
    if (param_2 < 1) {
      if (param_2 < 0) {
        uStackY_20 = 0x10032c86;
        FUN_1002b453();
        uStackY_20 = param_1;
        uStackY_24 = 0x10032c8e;
        hFile = (HANDLE)FUN_100312ed();
        BVar4 = SetEndOfFile(hFile);
        iVar7 = (BVar4 != 0) - 1;
        if (iVar7 == -1) {
          puVar3 = (undefined4 *)FUN_1002b3dc();
          *puVar3 = 0xd;
          DVar5 = GetLastError();
          pDVar6 = (DWORD *)FUN_1002b3e5();
          *pDVar6 = DVar5;
        }
      }
    }
    else {
      uStackY_20 = 0x10032c15;
      _memset(local_1008,0,0x1000);
      uStackY_20 = 0x8000;
      uStackY_24 = param_1;
      uStackY_28 = 0x10032c22;
      FUN_100331ca();
      do {
        uStackY_20 = 0x10032c40;
        iVar1 = FUN_1002b73b();
        if (iVar1 == -1) {
          piVar2 = (int *)FUN_1002b3e5();
          if (*piVar2 == 5) {
            puVar3 = (undefined4 *)FUN_1002b3dc();
            *puVar3 = 0xd;
          }
          iVar7 = -1;
          break;
        }
        param_2 = param_2 - iVar1;
      } while (0 < param_2);
      FUN_100331ca();
    }
    uStackY_20 = 0x10032ccc;
    FUN_1002b453();
  }
  return iVar7;
}

