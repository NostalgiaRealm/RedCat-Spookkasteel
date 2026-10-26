/*
 * FUN_1000d7b0 at 1000d7b0
 * undefined FUN_1000d7b0(void)
 * Address ranges: 1000d7b0-1000d80d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1000d7b0(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar2 = FUN_1000c250(*param_1);
  if (iVar2 != 0) {
    iVar3 = *param_1;
    iVar4 = 0;
    if (0 < iVar3) {
      iVar6 = 0;
      do {
        puVar1 = (undefined4 *)(param_1[1] + ((iVar3 - iVar4) + -1) * 0xc);
        puVar5 = (undefined4 *)(*(int *)(iVar2 + 4) + iVar6);
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + 0xc;
        *puVar5 = *puVar1;
        puVar5[1] = puVar1[1];
        puVar5[2] = puVar1[2];
        iVar3 = *param_1;
      } while (iVar4 < iVar3);
    }
    *param_2 = iVar2;
    return 1;
  }
  return 0;
}

