/*
 * FUN_00552264 at 00552264
 * int __register FUN_00552264(int param_1)
 * Address ranges: 00552264-005522e9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00552264(int param_1)

{
  uint uVar1;
  int iVar2;
  int local_18;
  int local_10;
  int local_c;
  
  local_c = 0;
  if (DAT_00574848 != (undefined4 *)0x0) {
    uVar1 = DAT_00574848[2] - 1;
    if (SBORROW4(DAT_00574848[2],1)) {
      uVar1 = thunk_FUN_00402874(uVar1);
    }
    if (-1 < (int)uVar1) {
      local_18 = uVar1 + 1;
      local_10 = 0;
      do {
        iVar2 = FUN_00412384(DAT_00574848,local_10);
        if (*(int *)(iVar2 + 4) == param_1) {
          local_c = *(int *)(iVar2 + 8);
          break;
        }
        local_10 = local_10 + 1;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
    }
  }
  if (local_c == 0) {
    local_c = (**(code **)(param_1 + 0x2c))(param_1,1,*(undefined4 *)PTR_DAT_005723fc);
  }
  return local_c;
}

