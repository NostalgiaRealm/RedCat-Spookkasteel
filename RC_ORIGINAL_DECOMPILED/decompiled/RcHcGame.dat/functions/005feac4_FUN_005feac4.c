/*
 * FUN_005feac4 at 005feac4
 * undefined FUN_005feac4(void)
 * Address ranges: 005feac4-005feaf8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005feac4(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x24);
  while (uVar1 < 8) {
    if ((*(int *)(&DAT_0070fbc8 + *(int *)(param_1 + 0x24) * 4) == 0) ||
       (*(int *)(&DAT_0070fbc8 + *(int *)(param_1 + 0x24) * 4) == param_1)) break;
    uVar1 = *(int *)(param_1 + 0x24) + 1;
    *(uint *)(param_1 + 0x24) = uVar1;
  }
  *(int *)(&DAT_0070fbc8 + *(int *)(param_1 + 0x24) * 4) = param_1;
  (&DAT_0070fbec)[*(int *)(param_1 + 0x24)] = (&DAT_0070fbec)[*(int *)(param_1 + 0x24)] + '\x01';
  return;
}

