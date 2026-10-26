/*
 * FUN_0043b7b0 at 0043b7b0
 * undefined __register FUN_0043b7b0(int * param_1, int param_2, undefined4 param_3)
 * Address ranges: 0043b7b0-0043b8cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x42f7d4 slot 10 for TDockTree. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x42f7d4 slot 10 for
   TDockTree. Original bytes unchanged; names and types still inferred. */

void FUN_0043b7b0(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_30 = (undefined1 *)0x43b7c9;
  local_8 = FUN_0041c468((int *)&PTR_FUN_0042dc98,'\x01',param_3);
  puStack_34 = &LAB_0043b906;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_3c = (undefined1 *)0x43b7e5;
  puStack_30 = &stack0xfffffffc;
  FUN_004314a8(local_8,param_1[5]);
  puStack_3c = (undefined1 *)0x43b7ed;
  FUN_0041caa8((int)local_8);
  puStack_40 = &LAB_0043b8e9;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  puStack_48 = (undefined1 *)0x43b805;
  puStack_3c = &stack0xfffffffc;
  FUN_0041cfec(local_8,param_2);
  puStack_4c = &LAB_0043b8cc;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  puStack_48 = &stack0xfffffffc;
  iVar1 = FUN_0043579c(param_1[5]);
  if (-1 < iVar1 + -1) {
    local_c = 0;
    local_10 = iVar1;
    do {
      iVar1 = FUN_00435760(param_1[5],local_c);
      if ((*(char *)(iVar1 + 0x47) != '\0') && (*(int *)(iVar1 + 0x90) == param_1[5])) {
        FUN_0043211c(iVar1,&local_20);
        (**(code **)*param_1)(param_1,iVar1,&local_20);
        local_20 = *(int *)(iVar1 + 0x30) * 2 - local_20;
        local_1c = *(int *)(iVar1 + 0x34) * 2 - local_1c;
        local_18 = *(int *)(iVar1 + 0x38) * -2 + local_18 * 3 + local_20 * -2;
        local_14 = *(int *)(iVar1 + 0x3c) * -2 + local_14 * 3 + local_1c * -2;
        (**(code **)(*param_1 + 0x10))(param_1,local_8,iVar1,&local_20);
      }
      local_c = local_c + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  *in_FS_OFFSET = uStack_50;
  puStack_48 = &LAB_0043b8d3;
  puStack_4c = (undefined1 *)0x43b8cb;
  FUN_0041cfec(local_8,0);
  return;
}

