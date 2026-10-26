/*
 * FUN_0054eee4 at 0054eee4
 * undefined __register FUN_0054eee4(int * param_1, undefined4 param_2)
 * Address ranges: 0054eee4-0054efdd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x54e7f8 slot published:btnReqHelpClick for TfrmCoolDialog. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x54e7f8 slot
   published:btnReqHelpClick for TfrmCoolDialog. Original bytes unchanged; names and types still
   inferred. */

void FUN_0054eee4(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_114 [256];
  int local_14;
  undefined4 local_10;
  int local_c;
  int *local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_14 = 0;
  puStack_11c = &LAB_0054efde;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  local_10 = param_2;
  local_8 = param_1;
  FUN_0054ffdc(*(int **)(*(int *)PTR_DAT_00572108 + 0x108));
  FUN_00569c6c(*(int *)PTR_DAT_00572108,(undefined4 *)"Mn_red21");
  FUN_0056a9e4(*(int *)PTR_DAT_00572108);
  iVar1 = FUN_0054c258();
  *(int **)(iVar1 + 0x344) = local_8;
  *(code **)(iVar1 + 0x340) = FUN_0054f000;
  iVar1 = FUN_0054c258();
  FUN_0054d26c(iVar1,'\x04');
  FUN_00402fe0(*local_8,local_114);
  FUN_00403fd4(&local_14,local_114);
  local_c = FUN_004b0728(local_14);
  if (local_c != 0) {
    piVar2 = (int *)FUN_0054c258();
    FUN_0054cb14(piVar2,'\0');
    piVar2 = (int *)FUN_0054c258();
    FUN_0054cae4(piVar2,local_c,'\0');
  }
  uVar3 = FUN_0054c258();
  FUN_0054c330(uVar3,local_8[0xc1]);
  puVar4 = (undefined4 *)FUN_0054c258();
  FUN_0054caa0(puVar4);
  (**(code **)(*local_8 + 0x74))();
  *in_FS_OFFSET = uStack_120;
  puStack_118 = &LAB_0054efe5;
  puStack_11c = (undefined1 *)0x54efdd;
  FUN_00403db0(&local_14);
  return;
}

