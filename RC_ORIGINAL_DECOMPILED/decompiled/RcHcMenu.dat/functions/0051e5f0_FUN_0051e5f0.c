/*
 * FUN_0051e5f0 at 0051e5f0
 * uint __register FUN_0051e5f0(int param_1)
 * Address ranges: 0051e5f0-0051e61a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_0051e5f0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0051e340(param_1);
  uVar2 = iVar1 - *(int *)(param_1 + 0x20c);
  if (SBORROW4(iVar1,*(int *)(param_1 + 0x20c))) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  return uVar2;
}

