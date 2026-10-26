/*
 * FUN_005cbb90 at 005cbb90
 * undefined FUN_005cbb90(void)
 * Address ranges: 005cbb90-005cbc3a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005cbb90(int param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  while( true ) {
    if (param_1 < 0) {
      iVar3 = (-1 - param_1) * 0x3c;
      iVar2 = FUN_005cbc40(param_2,iVar3 + DAT_006cc4c4);
      if (iVar2 != 0) {
        *param_3 = *param_3 | *(uint *)(iVar3 + DAT_006cc4c4);
      }
      return;
    }
    param_1 = param_1 * 0x2c;
    uVar1 = FUN_005caa50(&DAT_006cc4e8,&DAT_006cc580,
                         DAT_006cc4c8 + *(int *)(param_1 + 0x10 + DAT_006cc510) * 0x14);
    if ((uVar1 & 1) != 0) {
      FUN_005cbb90(*(undefined4 *)(param_1 + DAT_006cc510),param_2,param_3);
    }
    if ((uVar1 & 2) == 0) break;
    param_1 = *(int *)(param_1 + 4 + DAT_006cc510);
  }
  return;
}

