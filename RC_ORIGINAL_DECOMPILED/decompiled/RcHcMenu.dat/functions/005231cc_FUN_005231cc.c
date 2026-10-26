/*
 * FUN_005231cc at 005231cc
 * undefined __register FUN_005231cc(uint param_1)
 * Address ranges: 005231cc-005231e6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005231cc(uint param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x288);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  if (SCARRY4(iVar2,1)) {
    thunk_FUN_00402874(param_1);
  }
  return;
}

