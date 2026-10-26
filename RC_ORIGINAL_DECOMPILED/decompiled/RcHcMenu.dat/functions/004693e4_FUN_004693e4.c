/*
 * FUN_004693e4 at 004693e4
 * undefined4 __register FUN_004693e4(int param_1)
 * Address ranges: 004693e4-0046941e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004693e4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int **)(param_1 + 0x8c) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x8c) + 0xd0))();
    uVar2 = FUN_004687cc(iVar1,param_1);
    return uVar2;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_004687cc(*(int *)(*(int *)(param_1 + 0x28) + 0x24),param_1);
  }
  return uVar2;
}

