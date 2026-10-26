/*
 * FUN_0052bc70 at 0052bc70
 * undefined __register FUN_0052bc70(int * param_1)
 * Address ranges: 0052bc70-0052bd01
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x52b7f4 slot 25 for TAppObjMemList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x52b7f4 slot 25 for
   TAppObjMemList. Original bytes unchanged; names and types still inferred. */

void FUN_0052bc70(int *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_11c;
  undefined1 *puStack_118;
  undefined1 *puStack_114;
  byte local_110 [256];
  int local_10;
  undefined1 local_9;
  int *local_8;
  
  puStack_114 = &stack0xfffffffc;
  local_10 = 0;
  puStack_118 = &LAB_0052bd02;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if (param_1[0x20] == 0) {
    FUN_00402fe0(*param_1,local_110);
    FUN_00403fd4(&local_10,local_110);
    FUN_00404038(&local_10,(undefined4 *)".GetCount");
    FUN_00403d94(local_10);
    puVar1 = puStack_114;
  }
  puStack_114 = puVar1;
  iVar2 = FUN_0045da14(local_8[0x20]);
  local_9 = iVar2 == 0;
  *in_FS_OFFSET = uStack_11c;
  puStack_114 = &LAB_0052bd09;
  puStack_118 = (undefined1 *)0x52bd01;
  FUN_00403db0(&local_10);
  return;
}

