/*
 * FUN_00413458 at 00413458
 * undefined __register FUN_00413458(int * param_1, int * param_2)
 * Address ranges: 00413458-004134e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x410b88 slot 15 for TStrings. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x410b88 slot 15 for
   TStrings. Original bytes unchanged; names and types still inferred. */

void FUN_00413458(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  int *local_c;
  int *local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_10 = 0;
  puStack_24 = &LAB_004134ff;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_2c = (undefined1 *)0x413482;
  local_c = param_2;
  local_8 = param_1;
  FUN_00413580(param_1);
  puStack_30 = &LAB_004134e2;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_2c = &stack0xfffffffc;
  iVar2 = (**(code **)(*local_c + 0x14))();
  if (-1 < iVar2 + -1) {
    iVar4 = 0;
    do {
      (**(code **)(*local_c + 0xc))(local_c,iVar4,&local_10);
      uVar1 = local_10;
      uVar3 = (**(code **)(*local_c + 0x18))(local_c,iVar4);
      (**(code **)(*local_8 + 0x38))(local_8,uVar1,uVar3);
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_004134e9;
  puStack_30 = (undefined1 *)0x4134e1;
  FUN_0041363c(local_8);
  return;
}

