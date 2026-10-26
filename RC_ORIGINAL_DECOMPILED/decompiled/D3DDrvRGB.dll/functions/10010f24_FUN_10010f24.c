/*
 * FUN_10010f24 at 10010f24
 * undefined __cdecl FUN_10010f24(uint * param_1)
 * Address ranges: 10010f24-10010f51
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10010f24(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1 * 2;
  param_1[1] = uVar2 * 2 | uVar1 >> 0x1f;
  param_1[2] = param_1[2] << 1 | uVar2 >> 0x1f;
  return;
}

