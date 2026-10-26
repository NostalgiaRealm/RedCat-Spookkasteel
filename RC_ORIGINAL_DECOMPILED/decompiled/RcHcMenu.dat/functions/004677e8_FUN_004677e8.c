/*
 * FUN_004677e8 at 004677e8
 * int __register FUN_004677e8(int param_1)
 * Address ranges: 004677e8-004677fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004677e8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 < 1) {
    iVar1 = FUN_00412ca4(param_1);
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

