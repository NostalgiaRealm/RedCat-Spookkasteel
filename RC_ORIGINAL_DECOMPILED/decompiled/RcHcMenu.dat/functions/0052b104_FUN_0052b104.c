/*
 * FUN_0052b104 at 0052b104
 * int __register FUN_0052b104(int param_1)
 * Address ranges: 0052b104-0052b190
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0052b104(int param_1)

{
  uint uVar1;
  bool bVar2;
  undefined4 local_c;
  
  local_c = 0;
  if ((*(char *)(param_1 + 0x80) == '\x01') && (*(int *)(param_1 + 0x84) != 0)) {
    local_c = (**(code **)(**(int **)(param_1 + 0x84) + 4))();
  }
  else if ((*(char *)(param_1 + 0x80) == '\x02') && (*(int *)(param_1 + 0x88) != 0)) {
    if (*(int *)(param_1 + 0x84) != 0) {
      local_c = (**(code **)(**(int **)(param_1 + 0x84) + 8))();
    }
    uVar1 = (**(code **)(**(int **)(param_1 + 0x88) + 4))();
    bVar2 = SCARRY4(local_c,uVar1);
    local_c = local_c + uVar1;
    if (bVar2) {
      thunk_FUN_00402874(uVar1);
    }
  }
  return local_c;
}

