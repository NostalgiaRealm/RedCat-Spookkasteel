/*
 * FUN_005021b8 at 005021b8
 * undefined __register FUN_005021b8(uint param_1)
 * Address ranges: 005021b8-005021f2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005021b8(uint param_1)

{
  int iVar1;
  int extraout_EDX;
  
  iVar1 = *(int *)(param_1 + 0x38) + -2;
  if (SBORROW4(*(int *)(param_1 + 0x38),2)) {
    thunk_FUN_00402874(param_1);
    iVar1 = extraout_EDX;
  }
  FUN_00431f78(*(int **)(param_1 + 0x238),iVar1);
  FUN_00431f98(*(int **)(param_1 + 0x238),0x78);
  return;
}

