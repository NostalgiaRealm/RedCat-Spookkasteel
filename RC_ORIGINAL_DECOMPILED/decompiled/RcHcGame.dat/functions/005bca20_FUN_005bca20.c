/*
 * FUN_005bca20 at 005bca20
 * undefined FUN_005bca20(void)
 * Address ranges: 005bca20-005bca46
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_005bca20(int param_1)

{
  code *pcVar1;
  uint uVar2;
  
  uVar2 = 0;
  pcVar1 = *(code **)(*(int *)(param_1 + 0x33678) + 0xb4);
  if (pcVar1 != (code *)0x0) {
    uVar2 = (*pcVar1)();
  }
  return uVar2 / 0x51ec;
}

