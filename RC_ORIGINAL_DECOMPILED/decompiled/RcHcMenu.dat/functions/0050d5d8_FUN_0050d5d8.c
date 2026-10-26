/*
 * FUN_0050d5d8 at 0050d5d8
 * undefined4 __register FUN_0050d5d8(int param_1, undefined4 param_2)
 * Address ranges: 0050d5d8-0050d60c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0050d5d8(int param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  
  bVar1 = FUN_00501798(param_1);
  uVar2 = func_0x004f258c(*(undefined4 *)(param_1 + 0x284),param_1,bVar1,param_2);
  return uVar2;
}

