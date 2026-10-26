/*
 * FUN_0051ae50 at 0051ae50
 * undefined __register FUN_0051ae50(int param_1)
 * Address ranges: 0051ae50-0051aebc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0051ae50(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x2e0) + 0x1f0) + 0x14))();
  uVar2 = iVar1 - 1;
  if (SBORROW4(iVar1,1)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  if (-1 < (int)uVar2) {
    local_10 = uVar2 + 1;
    local_c = 0;
    do {
      uVar2 = FUN_005197fc(*(int **)(param_1 + 0x2e0),local_c);
      if ((char)uVar2 == '\0') {
        FUN_005196c8(*(int **)(param_1 + 0x2e0),local_c,'\x01');
      }
      local_c = local_c + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  return;
}

