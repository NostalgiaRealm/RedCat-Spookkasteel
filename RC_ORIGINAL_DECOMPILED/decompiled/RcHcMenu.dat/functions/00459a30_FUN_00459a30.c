/*
 * FUN_00459a30 at 00459a30
 * undefined __register FUN_00459a30(int param_1)
 * Address ranges: 00459a30-00459ab5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00459a30(int param_1)

{
  uint uVar1;
  int local_c;
  
  local_c = 1;
  while( true ) {
    uVar1 = local_c - 1;
    if (9 < uVar1) {
      uVar1 = thunk_FUN_00402874(uVar1);
    }
    if (*(int *)(&DAT_00573894 + (uVar1 + 1) * 4) == param_1) break;
    local_c = local_c + 1;
    if (local_c == 0xb) {
      local_c = 1;
      while( true ) {
        uVar1 = local_c - 1;
        if (9 < uVar1) {
          uVar1 = thunk_FUN_00402874(uVar1);
        }
        if (*(int *)(&DAT_00573894 + (uVar1 + 1) * 4) == 0) break;
        local_c = local_c + 1;
        if (local_c == 0xb) {
          FUN_00459bd4(0x459ac0);
          return;
        }
      }
      uVar1 = local_c - 1;
      if (9 < uVar1) {
        uVar1 = thunk_FUN_00402874(uVar1);
      }
      *(int *)(&DAT_00573894 + (uVar1 + 1) * 4) = param_1;
      return;
    }
  }
  return;
}

