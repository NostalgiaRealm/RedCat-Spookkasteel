/*
 * FUN_0048ed08 at 0048ed08
 * undefined __register FUN_0048ed08(int * param_1, undefined4 param_2, int param_3)
 * Address ranges: 0048ed08-0048ed8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0048ed08(int *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  byte local_34 [28];
  int local_18;
  uint local_14;
  int local_10;
  undefined1 *local_c;
  int *local_8;
  
  for (iVar2 = param_3; -1 < iVar2; iVar2 = iVar2 + -1) {
  }
  local_c = &stack0xffffffc4;
  if (-1 < param_3) {
    local_18 = param_3 + 1;
    local_14 = 0;
    local_10 = param_3;
    local_8 = param_1;
    do {
      if (((int)local_14 < 0) || (uVar1 = local_14, local_10 < (int)local_14)) {
        uVar1 = thunk_FUN_00402874(local_14);
      }
      if (*(int *)(local_c + uVar1 * 4) != 0) {
        if (((int)local_14 < 0) || (uVar1 = local_14, local_10 < (int)local_14)) {
          uVar1 = thunk_FUN_00402874(local_14);
        }
        FUN_00495f2c(*(int **)(local_c + uVar1 * 4),local_34);
        (**(code **)(*local_8 + 0xc))(local_8,local_34);
      }
      local_14 = local_14 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  return;
}

