/*
 * FUN_004be418 at 004be418
 * undefined __register FUN_004be418(int * param_1)
 * Address ranges: 004be418-004be5d2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4bcd20 slot 3 for TAppDAOQuery. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4bcd20 slot 3 for
   TAppDAOQuery. Original bytes unchanged; names and types still inferred. */

void FUN_004be418(int *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  char *pcStack_148;
  undefined4 uStack_13c;
  undefined1 *puStack_138;
  undefined1 *puStack_134;
  LPCWSTR local_12c;
  undefined4 *local_128;
  int local_124;
  int local_120;
  byte local_11c [256];
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  int *local_8;
  
  puStack_134 = &stack0xfffffffc;
  local_128 = (undefined4 *)0x0;
  local_12c = (LPCWSTR)0x0;
  local_120 = 0;
  local_124 = 0;
  local_18 = 0;
  local_1c = 0;
  puStack_138 = &LAB_004be5d3;
  uStack_13c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_13c;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if (param_1[0xd] == 0) {
    FUN_00402fe0(*param_1,local_11c);
    FUN_00403fd4(&local_1c,local_11c);
    pcStack_148 = "No recordset.";
    FUN_004040f0(&local_18,3);
    FUN_00403d94(local_18);
    puVar1 = puStack_134;
  }
  puStack_134 = puVar1;
  iVar2 = FUN_0045ba40(local_8[7]);
  if (iVar2 != 0) {
    FUN_00402fe0(*local_8,local_11c);
    FUN_00403fd4(&local_124,local_11c);
    FUN_004040f0(&local_120,3);
    FUN_00403d94(local_120);
  }
  iVar2 = FUN_004bf310((int)local_8);
  iVar2 = FUN_0045ba40(iVar2);
  uVar3 = iVar2 - 1;
  if (SBORROW4(iVar2,1)) {
    uVar3 = thunk_FUN_00402874(uVar3);
  }
  if (-1 < (int)uVar3) {
    local_14 = uVar3 + 1;
    local_c = 0;
    do {
      puVar4 = (undefined4 *)FUN_004bf310((int)local_8);
      piVar5 = (int *)(**(code **)*puVar4)(puVar4,local_c);
      iVar2 = FUN_00403224(piVar5,(int)&PTR_FUN_004b6ae0);
      FUN_004bad94(iVar2,&local_12c);
      FUN_00403ff8((int *)&local_128,local_12c);
      local_10 = FUN_004d4af0((int *)&PTR_FUN_004ccae8,'\x01',local_c,(int)local_8,local_128);
      (**(code **)(*(int *)local_8[7] + 0x24))((int *)local_8[7],local_c,local_10);
      local_c = local_c + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  *in_FS_OFFSET = pcStack_148;
  FUN_00404474(&local_12c);
  FUN_00403dd4((int *)&local_128,3);
  FUN_00403dd4(&local_1c,2);
  return;
}

