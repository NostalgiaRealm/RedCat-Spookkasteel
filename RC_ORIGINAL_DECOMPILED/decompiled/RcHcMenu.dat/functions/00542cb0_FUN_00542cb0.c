/*
 * FUN_00542cb0 at 00542cb0
 * undefined __register FUN_00542cb0(int * param_1)
 * Address ranges: 00542cb0-00542db1;00542ddd-00542de0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4fa08c slot 54 for TCustomOAFKComboBox. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4fa08c slot 54 for
   TCustomOAFKComboBox. Original bytes unchanged; names and types still inferred. */

void FUN_00542cb0(int *param_1)

{
  uint uVar1;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_14 = (undefined1 *)0x542cc1;
  local_8 = param_1;
  FUN_004f0130(param_1);
  local_c = -1;
  if (*(int *)(local_8[0xa0] + 0x214) != 0) {
    puStack_14 = (undefined1 *)0x542cee;
    local_c = (**(code **)(**(int **)(local_8[0xa0] + 0x214) + 4))();
  }
  puStack_14 = (undefined1 *)0x542cff;
  FUN_0053fc3c((int *)local_8[0xa0]);
  if ((*(int *)(local_8[0xa0] + 0x214) != 0) &&
     (*(char *)(*(int *)(local_8[0xa0] + 0x214) + 0x18) != '\0')) {
    puStack_14 = (undefined1 *)0x542d42;
    FUN_0054b510(*(uint *)(local_8[0xa0] + 0x214));
    puStack_18 = &LAB_00542db2;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    puStack_14 = &stack0xfffffffc;
    uVar1 = (**(code **)(**(int **)(local_8[0xa0] + 0x214) + 4))();
    local_10 = local_c - uVar1;
    if (SBORROW4(local_c,uVar1)) {
      thunk_FUN_00402874(uVar1);
      local_10 = extraout_EDX;
    }
    if (local_10 != 0) {
      FUN_0054823c(*(int **)(local_8[0xa0] + 0x214),local_10);
    }
    *in_FS_OFFSET = uStack_1c;
    puStack_14 = &DAT_00542db9;
    puStack_18 = (undefined1 *)0x542db1;
    FUN_0054b528(*(int **)(local_8[0xa0] + 0x214));
    return;
  }
  return;
}

