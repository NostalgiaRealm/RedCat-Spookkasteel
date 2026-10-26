/*
 * FUN_0052aff0 at 0052aff0
 * uint __register FUN_0052aff0(int param_1)
 * Address ranges: 0052aff0-0052b04c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x0052b01d) */

uint FUN_0052aff0(int param_1)

{
  uint uVar1;
  bool bVar2;
  undefined4 local_c;
  
  local_c = 0;
  if (*(int *)(param_1 + 0x84) != 0) {
    local_c = (**(code **)(**(int **)(param_1 + 0x84) + 8))();
  }
  if (*(int *)(param_1 + 0x88) != 0) {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x88) + 8))();
    bVar2 = SCARRY4(local_c,uVar1);
    local_c = local_c + uVar1;
    if (bVar2) {
      thunk_FUN_00402874(uVar1);
    }
  }
  return local_c;
}

