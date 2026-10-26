/*
 * FUN_004905e0 at 004905e0
 * undefined __register FUN_004905e0(uint param_1)
 * Address ranges: 004905e0-004905f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004905e0(uint param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  if (SCARRY4(iVar2,1)) {
    thunk_FUN_00402874(param_1);
  }
  return;
}

