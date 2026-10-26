/*
 * FUN_004ee304 at 004ee304
 * int __register FUN_004ee304(int param_1)
 * Address ranges: 004ee304-004ee352
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004ee304(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 local_c;
  
  if (*(char *)(param_1 + 0x35) == '\0') {
    local_c = (**(code **)(**(int **)(param_1 + 0x24) + 0x40))();
  }
  else {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x40))();
    uVar2 = (**(code **)(**(int **)(param_1 + 0x24) + 0x40))();
    local_c = iVar1 + uVar2;
    if (SCARRY4(iVar1,uVar2)) {
      thunk_FUN_00402874(uVar2);
    }
  }
  return local_c;
}

