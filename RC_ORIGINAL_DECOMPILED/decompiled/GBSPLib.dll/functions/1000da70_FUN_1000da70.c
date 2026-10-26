/*
 * FUN_1000da70 at 1000da70
 * undefined FUN_1000da70(void)
 * Address ranges: 1000da70-1000db28
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1000da70(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *param_2;
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      iVar1 = iVar4 + 1;
      iVar3 = FUN_10014450(0x3dcccccd);
      if ((iVar3 != 0) && (iVar3 = FUN_10014450(0x3dcccccd), iVar3 != 0)) {
        *param_3 = iVar4;
        param_3[1] = (iVar4 + 1) % iVar2;
        return 1;
      }
      iVar4 = iVar1;
    } while (iVar1 < iVar2);
  }
  return 0;
}

