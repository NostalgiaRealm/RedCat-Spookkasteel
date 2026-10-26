/*
 * FUN_004ae51c at 004ae51c
 * undefined __register FUN_004ae51c(int * param_1)
 * Address ranges: 004ae51c-004ae560
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ae51c(int *param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined1 *)((int)param_1 + 0x181) = 0;
  iVar1 = param_1[0x62];
  *(undefined4 *)(iVar1 + 0x88) = 0;
  *(undefined4 *)(iVar1 + 0x8c) = 0;
  (**(code **)(*param_1 + 0x74))();
  FUN_004a9078((int)param_1);
  return;
}

