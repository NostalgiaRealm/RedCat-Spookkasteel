/*
 * FUN_00545b80 at 00545b80
 * char __register FUN_00545b80(int param_1)
 * Address ranges: 00545b80-00545bf9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_00545b80(int param_1)

{
  int iVar1;
  uint uVar2;
  byte local_30 [28];
  int local_14;
  int local_10;
  char local_9;
  int local_8;
  
  local_9 = '\x01';
  local_8 = param_1;
  iVar1 = FUN_0048ec24(*(int *)(*(int *)(param_1 + 0x3c) + 0x18));
  uVar2 = iVar1 - 1;
  if (SBORROW4(iVar1,1)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  if (-1 < (int)uVar2) {
    local_14 = uVar2 + 1;
    local_10 = 0;
    do {
      FUN_0048f02c(*(int **)(*(int *)(local_8 + 0x3c) + 0x18),local_10,(undefined4 *)local_30);
      if (local_9 == '\0') {
LAB_00545be2:
        local_9 = '\0';
      }
      else {
        iVar1 = FUN_00492440(*(int **)(local_8 + 0x1c),local_30);
        if ((*(byte *)(iVar1 + 0x18) & 0x20) == 0) goto LAB_00545be2;
        local_9 = '\x01';
      }
      local_10 = local_10 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return local_9;
}

