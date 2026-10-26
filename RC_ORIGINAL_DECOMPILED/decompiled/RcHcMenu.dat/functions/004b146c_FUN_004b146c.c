/*
 * FUN_004b146c at 004b146c
 * int __register FUN_004b146c(int param_1, int param_2)
 * Address ranges: 004b146c-004b149b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004b146c(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = (uint)((longlong)param_2 * 4);
  if ((longlong)(int)uVar2 != (longlong)param_2 * 4) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  return iVar1 + uVar2;
}

