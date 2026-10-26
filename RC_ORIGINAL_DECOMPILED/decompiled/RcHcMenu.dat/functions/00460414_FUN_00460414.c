/*
 * FUN_00460414 at 00460414
 * int __register FUN_00460414(int param_1, uint param_2)
 * Address ranges: 00460414-0046046c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00460414(int param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  undefined4 local_14;
  undefined4 local_10;
  
  local_10 = 0;
  local_14 = 0;
  while ((int)local_14 < *(int *)(param_1 + 4)) {
    uVar1 = local_14;
    if (0xe < local_14) {
      uVar1 = thunk_FUN_00402874(local_14);
    }
    uVar1 = *(uint *)(param_1 + 8 + uVar1 * 4);
    if (uVar1 == param_2) {
      bVar2 = SCARRY4(local_10,1);
      local_10 = local_10 + 1;
      if (bVar2) {
        uVar1 = thunk_FUN_00402874(uVar1);
      }
    }
    bVar2 = SCARRY4(local_14,1);
    local_14 = local_14 + 1;
    if (bVar2) {
      thunk_FUN_00402874(uVar1);
    }
  }
  return local_10;
}

