/*
 * FUN_0053be74 at 0053be74
 * undefined __register FUN_0053be74(int * param_1, int param_2)
 * Address ranges: 0053be74-0053bfc1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x53b55c slot 9 for TAppObjSimpleQueryList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x53b55c slot 9 for
   TAppObjSimpleQueryList. Original bytes unchanged; names and types still inferred. */

void FUN_0053be74(int *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  bool bVar4;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_14;
  byte local_d;
  
  if (param_1[0x22] == 0) {
    puStack_1c = (undefined1 *)0x53bea1;
    FUN_00403d94("Assertion failure");
  }
  puStack_1c = (undefined1 *)0x53beaf;
  cVar1 = (**(code **)(*(int *)param_1[0x22] + 0x3c))();
  if (cVar1 == '\0') {
    puStack_1c = (undefined1 *)0x53bec7;
    FUN_00403d94(" Cannot move relative while no current record");
  }
  puStack_1c = (undefined1 *)0x53becf;
  FUN_0054b510((uint)param_1);
  puStack_20 = &LAB_0053bfc2;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  if (param_2 == 1) {
    puStack_1c = &stack0xfffffffc;
    FUN_00547c54(param_1);
    goto LAB_0053bfac;
  }
  if (param_2 == -1) {
    puStack_1c = &stack0xfffffffc;
    FUN_00547e4c(param_1);
    goto LAB_0053bfac;
  }
  puStack_1c = &stack0xfffffffc;
  uVar2 = (**(code **)(*param_1 + 4))();
  if (SCARRY4(uVar2,param_2)) {
    thunk_FUN_00402874(uVar2);
  }
  iVar3 = (**(code **)(*param_1 + 8))();
  if ((int)(uVar2 + param_2) < iVar3) {
    iVar3 = (**(code **)(*param_1 + 4))();
    uVar2 = iVar3 + param_2;
    if (SCARRY4(iVar3,param_2)) {
      uVar2 = thunk_FUN_00402874(uVar2);
    }
    if ((int)uVar2 < 0) goto LAB_0053bf3f;
    local_d = 1;
  }
  else {
LAB_0053bf3f:
    local_d = 0;
  }
  if (local_d != 0) {
    if (param_2 < 0) {
      local_14 = 0;
      while ((param_2 < local_14 & local_d) != 0) {
        uVar2 = FUN_00547e4c(param_1);
        local_d = (byte)uVar2;
        bVar4 = SBORROW4(local_14,1);
        local_14 = local_14 + -1;
        if (bVar4) {
          thunk_FUN_00402874(uVar2);
        }
      }
    }
    else {
      local_14 = 0;
      while ((local_14 < param_2 & local_d) != 0) {
        uVar2 = FUN_00547c54(param_1);
        local_d = (byte)uVar2;
        bVar4 = SCARRY4(local_14,1);
        local_14 = local_14 + 1;
        if (bVar4) {
          thunk_FUN_00402874(uVar2);
        }
      }
    }
  }
LAB_0053bfac:
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0053bfc9;
  puStack_20 = (undefined1 *)0x53bfc1;
  FUN_0054b528(param_1);
  return;
}

