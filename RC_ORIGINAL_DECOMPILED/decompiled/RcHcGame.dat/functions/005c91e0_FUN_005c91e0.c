/*
 * FUN_005c91e0 at 005c91e0
 * undefined FUN_005c91e0(void)
 * Address ranges: 005c91e0-005c9288
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c91e0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  _DAT_007228d4 = -*(float *)(param_1 + 0x24);
  _DAT_007228d8 = -*(float *)(param_1 + 0x24);
  _DAT_007228dc = 1.0 / _DAT_007228d4;
  _DAT_007228e0 = 1.0 / _DAT_007228d8;
  _DAT_007228cc = *(undefined4 *)(param_1 + 0x28);
  _DAT_007228d0 = *(undefined4 *)(param_1 + 0x2c);
  puVar2 = (undefined4 *)(param_1 + 0x30);
  puVar3 = &DAT_00722890;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  _DAT_00722904 = *(undefined4 *)(param_1 + 0x100);
  _DAT_00722908 = *(undefined4 *)(param_1 + 0x104);
  _DAT_0072290c = *(undefined4 *)(param_1 + 0x108);
  _DAT_007228e4 = *(undefined4 *)(param_1 + 0x11c);
  FUN_005b35b0(&DAT_007228c0);
  return;
}

