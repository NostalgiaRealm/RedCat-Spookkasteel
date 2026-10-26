/*
 * FUN_0052a960 at 0052a960
 * undefined __register FUN_0052a960(int * param_1, int param_2)
 * Address ranges: 0052a960-0052aa5c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x529d00 slot 9 for TAppObjConcatList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x529d00 slot 9 for
   TAppObjConcatList. Original bytes unchanged; names and types still inferred. */

void FUN_0052a960(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  uint local_18;
  
  puStack_20 = (undefined1 *)0x52a975;
  FUN_0054b510((uint)param_1);
  puStack_24 = &LAB_0052aa5d;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  if (param_2 == 1) {
    puStack_20 = &stack0xfffffffc;
    FUN_00547c54(param_1);
    goto LAB_0052aa47;
  }
  if (param_2 == -1) {
    puStack_20 = &stack0xfffffffc;
    FUN_00547e4c(param_1);
    goto LAB_0052aa47;
  }
  puStack_20 = &stack0xfffffffc;
  iVar2 = (**(code **)(*param_1 + 4))();
  uVar3 = iVar2 + param_2;
  if (SCARRY4(iVar2,param_2)) {
    uVar3 = thunk_FUN_00402874(uVar3);
  }
  if ((int)uVar3 < 0) {
LAB_0052a9e5:
    bVar1 = false;
  }
  else {
    uVar3 = (**(code **)(*param_1 + 4))();
    if (SCARRY4(uVar3,param_2)) {
      thunk_FUN_00402874(uVar3);
    }
    iVar2 = (**(code **)(*param_1 + 8))();
    if (iVar2 <= (int)(uVar3 + param_2)) goto LAB_0052a9e5;
    bVar1 = true;
  }
  if (bVar1) {
    if (param_2 < 0) {
      local_18 = -param_2;
      if (SBORROW4(0,param_2)) {
        local_18 = thunk_FUN_00402874(local_18);
      }
      if (0 < (int)local_18) {
        do {
          FUN_00547e4c(param_1);
          local_18 = local_18 - 1;
        } while (local_18 != 0);
      }
    }
    else {
      local_18 = param_2;
      if (0 < param_2) {
        do {
          FUN_00547c54(param_1);
          local_18 = local_18 + -1;
        } while (local_18 != 0);
      }
    }
  }
LAB_0052aa47:
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0052aa64;
  puStack_24 = (undefined1 *)0x52aa5c;
  FUN_0054b528(param_1);
  return;
}

