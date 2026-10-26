/*
 * FUN_0043cb04 at 0043cb04
 * undefined __register FUN_0043cb04(int param_1)
 * Address ranges: 0043cb04-0043cb1c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043cb04(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)PTR_DAT_00572210)();
  *(bool *)(param_1 + 0xc) = iVar1 != 0;
  return;
}

