/*
 * FUN_004ced1c at 004ced1c
 * undefined4 __register FUN_004ced1c(int * param_1)
 * Address ranges: 004ced1c-004ced36
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004ced1c(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  return uVar1;
}

