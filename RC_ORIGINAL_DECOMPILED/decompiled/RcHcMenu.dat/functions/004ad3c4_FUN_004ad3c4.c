/*
 * FUN_004ad3c4 at 004ad3c4
 * undefined __register FUN_004ad3c4(int param_1)
 * Address ranges: 004ad3c4-004ad475
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ad3c4(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_d;
  
  local_14 = 0;
  local_18 = 0;
  local_d = 0;
  do {
    if (local_d != 5) {
      piVar1 = *(int **)(*(int *)(param_1 + 0x24 + (uint)local_d * 4) + 0xc);
      if (piVar1 != (int *)0x0) {
        cVar2 = (**(code **)(*piVar1 + 0x1c))();
        if (cVar2 == '\0') {
          iVar3 = (**(code **)(*piVar1 + 0x2c))();
          if (local_14 < iVar3) {
            local_14 = (**(code **)(*piVar1 + 0x2c))();
          }
          iVar3 = (**(code **)(*piVar1 + 0x20))();
          if (local_18 < iVar3) {
            local_18 = (**(code **)(*piVar1 + 0x20))();
          }
        }
      }
    }
    local_d = local_d + 1;
  } while (local_d != 7);
  if ((0 < local_14) && (*(int *)(param_1 + 0x40) != local_14)) {
    *(int *)(param_1 + 0x40) = local_14;
  }
  if ((0 < local_18) && (*(int *)(param_1 + 0x44) != local_18)) {
    *(int *)(param_1 + 0x44) = local_18;
  }
  return;
}

