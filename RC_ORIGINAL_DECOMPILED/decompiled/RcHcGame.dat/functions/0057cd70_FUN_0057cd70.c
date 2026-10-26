/*
 * FUN_0057cd70 at 0057cd70
 * undefined FUN_0057cd70(void)
 * Address ranges: 0057cd70-0057cd8e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0057cd70(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *(undefined4 *)(param_1 + 0xf8) = *param_2;
  *(undefined4 *)(param_1 + 0xfc) = uVar1;
  *(undefined4 *)(param_1 + 0x100) = uVar2;
  return;
}

