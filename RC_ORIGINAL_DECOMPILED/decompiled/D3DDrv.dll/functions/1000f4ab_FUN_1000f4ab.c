/*
 * FUN_1000f4ab at 1000f4ab
 * int __cdecl FUN_1000f4ab(uint param_1, int param_2)
 * Address ranges: 1000f4ab-1000f5cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __cdecl FUN_1000f4ab(uint param_1,int param_2)

{
  DWORD DVar1;
  DWORD DVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  DWORD *pDVar6;
  HANDLE hFile;
  BOOL BVar7;
  int iVar8;
  uint uVar9;
  char local_1008 [4064];
  undefined4 uStackY_28;
  
  FUN_1000ff10();
  iVar8 = 0;
  DVar1 = FUN_1000de98(param_1,0,1);
  if ((DVar1 == 0xffffffff) || (DVar2 = FUN_1000de98(param_1,0,2), DVar2 == 0xffffffff)) {
    iVar8 = -1;
  }
  else {
    uVar9 = param_2 - DVar2;
    if ((int)uVar9 < 1) {
      if ((int)uVar9 < 0) {
        FUN_1000de98(param_1,param_2,0);
        hFile = (HANDLE)FUN_1000c5f5(param_1);
        BVar7 = SetEndOfFile(hFile);
        iVar8 = (BVar7 != 0) - 1;
        if (iVar8 == -1) {
          pDVar6 = FUN_1000c3c5();
          *pDVar6 = 0xd;
          DVar2 = GetLastError();
          pDVar6 = FUN_1000c3ce();
          *pDVar6 = DVar2;
        }
      }
    }
    else {
      _memset(local_1008,0,0x1000);
      uStackY_28 = 0x1000f518;
      iVar3 = FUN_10010326(param_1,0x8000);
      do {
        uVar4 = 0x1000;
        if ((int)uVar9 < 0x1000) {
          uVar4 = uVar9;
        }
        iVar5 = FUN_1000c7b0(param_1,local_1008,uVar4);
        if (iVar5 == -1) {
          pDVar6 = FUN_1000c3ce();
          if (*pDVar6 == 5) {
            pDVar6 = FUN_1000c3c5();
            *pDVar6 = 0xd;
          }
          iVar8 = -1;
          break;
        }
        uVar9 = uVar9 - iVar5;
      } while (0 < (int)uVar9);
      FUN_10010326(param_1,iVar3);
    }
    FUN_1000de98(param_1,DVar1,0);
  }
  return iVar8;
}

