/*
 * FUN_0055f494 at 0055f494
 * undefined __register FUN_0055f494(int param_1, int * param_2)
 * Address ranges: 0055f494-0055f4c8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0055f494(int param_1,int *param_2)

{
  int iVar1;
  
  FUN_00403db0(param_2);
  iVar1 = FUN_00404030(*(int *)(param_1 + 8));
  if (0 < iVar1) {
    FUN_00409bd8(*(undefined4 *)(param_1 + 4),param_2);
  }
  return;
}

