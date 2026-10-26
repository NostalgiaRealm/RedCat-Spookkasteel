/*
 * FUN_0045c3c8 at 0045c3c8
 * undefined __register FUN_0045c3c8(int param_1)
 * Address ranges: 0045c3c8-0045c424
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0045c3c8(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint local_c;
  
  iVar1 = FUN_0045ba40(*(int *)(param_1 + 8));
  local_c = iVar1 - 1;
  if (SBORROW4(iVar1,1)) {
    local_c = thunk_FUN_00402874(local_c);
  }
  if (-1 < (int)local_c) {
    do {
      piVar2 = (int *)(**(code **)**(undefined4 **)(param_1 + 8))
                                (*(undefined4 **)(param_1 + 8),local_c);
      puVar3 = (undefined4 *)FUN_00403224(piVar2,(int)&LAB_0045bc2c);
      (**(code **)*puVar3)();
      (**(code **)(**(int **)(param_1 + 8) + 0x10))(*(int **)(param_1 + 8),local_c);
      local_c = local_c - 1;
    } while (local_c != 0xffffffff);
  }
  return;
}

