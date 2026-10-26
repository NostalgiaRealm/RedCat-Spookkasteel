/*
 * FUN_005b7230 at 005b7230
 * undefined FUN_005b7230(void)
 * Address ranges: 005b7230-005b728c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_005b7230(int param_1,int *param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_005d1960(param_2);
  if (iVar1 == 1) {
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0x2c) + 0x18 + *param_2 * 0x4c);
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_3 = *puVar2;
      puVar2 = puVar2 + 1;
      param_3 = param_3 + 1;
    }
    *param_4 = (int)*(short *)(*(int *)(param_1 + 0x2c) + 0x48 + *param_2 * 0x4c);
    return 1;
  }
  return 0;
}

