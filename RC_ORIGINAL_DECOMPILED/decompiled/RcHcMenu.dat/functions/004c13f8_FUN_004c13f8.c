/*
 * FUN_004c13f8 at 004c13f8
 * undefined __register FUN_004c13f8(int * param_1, int * param_2, int * param_3)
 * Address ranges: 004c13f8-004c153a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4bcbdc slot 11 for TAppDAODatabaseConnection. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4bcbdc slot 11 for
   TAppDAODatabaseConnection. Original bytes unchanged; names and types still inferred. */

void FUN_004c13f8(int *param_1,int *param_2,int *param_3)

{
  undefined1 *puVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_130;
  undefined1 *puStack_12c;
  undefined1 *puStack_128;
  int local_120;
  int local_11c;
  byte local_118 [256];
  int local_18;
  undefined1 local_11;
  int *local_10;
  int *local_c;
  int *local_8;
  
  puStack_128 = &stack0xfffffffc;
  local_11c = 0;
  local_120 = 0;
  local_18 = 0;
  puStack_12c = &LAB_004c153b;
  uStack_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_130;
  puVar1 = &stack0xfffffffc;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  if (param_1[0x14] == 0) {
    FUN_00402fe0(*param_1,local_118);
    FUN_00403fd4(&local_18,local_118);
    FUN_00404038(&local_18,(undefined4 *)": No database open.");
    FUN_00403d94(local_18);
    puVar1 = puStack_128;
  }
  puStack_128 = puVar1;
  piVar3 = (int *)FUN_004949bc(local_c);
  cVar2 = (**(code **)(*piVar3 + 0x4c))();
  if (cVar2 == '\0') {
    FUN_00402fe0(*local_8,local_118);
    FUN_00403fd4(&local_120,local_118);
    FUN_004040f0(&local_11c,3);
    FUN_00403d94(local_11c);
  }
  if (local_10 != (int *)0x0) {
    iVar4 = FUN_00494858(local_c);
    cVar2 = FUN_00491f8c(iVar4,local_10);
    if (cVar2 == '\0') {
      local_11 = FUN_004c1044(local_8,local_c,(int)local_10);
      goto LAB_004c1515;
    }
  }
  local_11 = FUN_004c090c(local_8,local_c);
LAB_004c1515:
  *in_FS_OFFSET = uStack_130;
  puStack_128 = &LAB_004c1542;
  puStack_12c = (undefined1 *)0x4c1532;
  FUN_00403dd4(&local_120,2);
  puStack_12c = (undefined1 *)0x4c153a;
  FUN_00403db0(&local_18);
  return;
}

