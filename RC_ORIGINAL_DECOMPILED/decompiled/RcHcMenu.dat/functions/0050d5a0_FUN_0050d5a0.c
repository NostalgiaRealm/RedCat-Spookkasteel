/*
 * FUN_0050d5a0 at 0050d5a0
 * undefined4 __register FUN_0050d5a0(int param_1, int * param_2)
 * Address ranges: 0050d5a0-0050d5d4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0050d5a0(int param_1,int *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  
  bVar1 = FUN_00501798(param_1);
  uVar2 = FUN_004f24a0(*(undefined4 *)(param_1 + 0x284),param_1,bVar1,param_2);
  return uVar2;
}

