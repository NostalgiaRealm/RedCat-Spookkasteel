/*
 * FUN_0050711c at 0050711c
 * undefined4 __register FUN_0050711c(int param_1, int * param_2)
 * Address ranges: 0050711c-00507150
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0050711c(int param_1,int *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  
  bVar1 = FUN_00501798(param_1);
  uVar2 = FUN_004f24a0(*(undefined4 *)(param_1 + 0x284),param_1,bVar1,param_2);
  return uVar2;
}

