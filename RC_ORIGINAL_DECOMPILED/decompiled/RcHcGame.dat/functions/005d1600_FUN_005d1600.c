/*
 * FUN_005d1600 at 005d1600
 * undefined FUN_005d1600(void)
 * Address ranges: 005d1600-005d1663
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005d1600(undefined4 param_1,undefined4 *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar2 = param_3;
  if (0 < param_4) {
    puVar3 = (undefined4 *)(param_3 + 0xc);
    param_3 = param_4;
    do {
      FUN_005c9330(iVar2);
      puVar4 = param_2;
      puVar5 = puVar3;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      param_2 = param_2 + 6;
      iVar2 = iVar2 + 0x24;
      puVar3 = puVar3 + 9;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

