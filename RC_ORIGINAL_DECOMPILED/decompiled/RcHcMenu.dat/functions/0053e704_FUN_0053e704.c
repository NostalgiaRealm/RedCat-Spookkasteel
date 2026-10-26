/*
 * FUN_0053e704 at 0053e704
 * undefined __register FUN_0053e704(int param_1, int param_2)
 * Address ranges: 0053e704-0053e753
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0053e704(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  if (-1 < param_2) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x1f0) + 0x14))();
    if (param_2 < iVar2) {
      bVar1 = FUN_004f9df4(*(int *)(param_1 + 0x3e0),param_2);
      FUN_004f9ed0(*(int *)(param_1 + 0x3e0),param_2,bVar1 ^ 1);
    }
  }
  return;
}

