/*
 * FUN_00530860 at 00530860
 * undefined __register FUN_00530860(int param_1)
 * Address ranges: 00530860-005308d2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00530860(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_c;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x2cc) + 8);
  local_c = iVar2 - 1;
  if (SBORROW4(iVar2,1)) {
    local_c = thunk_FUN_00402874(local_c);
  }
  if (-1 < (int)local_c) {
    do {
      puVar1 = (undefined4 *)FUN_00412384(*(undefined4 **)(param_1 + 0x2cc),local_c);
      FUN_00403094((int *)*puVar1);
      iVar2 = FUN_00412384(*(undefined4 **)(param_1 + 0x2cc),local_c);
      FUN_00402800(iVar2);
      FUN_00412224(*(int **)(param_1 + 0x2cc),local_c);
      local_c = local_c - 1;
    } while (local_c != 0xffffffff);
  }
  return;
}

