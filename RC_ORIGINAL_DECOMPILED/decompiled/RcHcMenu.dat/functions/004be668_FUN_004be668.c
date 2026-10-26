/*
 * FUN_004be668 at 004be668
 * undefined __register FUN_004be668(int * param_1, undefined4 param_2, VARIANT * param_3)
 * Address ranges: 004be668-004be720
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4bcd20 slot 4 for TAppDAOQuery. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4bcd20 slot 4 for
   TAppDAOQuery. Original bytes unchanged; names and types still inferred. */

void FUN_004be668(int *param_1,undefined4 param_2,VARIANT *param_3)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  char *pcStack_134;
  undefined4 uStack_128;
  undefined1 *puStack_124;
  undefined1 *puStack_120;
  byte local_118 [256];
  int local_18;
  int local_14;
  VARIANT *local_10;
  undefined4 local_c;
  int *local_8;
  
  puStack_120 = &stack0xfffffffc;
  local_14 = 0;
  local_18 = 0;
  puStack_124 = &LAB_004be721;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  puVar1 = &stack0xfffffffc;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  if (param_1[0xd] == 0) {
    FUN_00402fe0(*param_1,local_118);
    FUN_00403fd4(&local_18,local_118);
    pcStack_134 = "No recordset.";
    FUN_004040f0(&local_14,3);
    FUN_00403d94(local_14);
    puVar1 = puStack_120;
  }
  puStack_120 = puVar1;
  puVar2 = (undefined4 *)FUN_004bf310((int)local_8);
  piVar3 = (int *)(**(code **)*puVar2)(puVar2,local_c);
  iVar4 = FUN_00403224(piVar3,(int)&PTR_FUN_004b6ae0);
  FUN_004bae4c(iVar4,local_10);
  *in_FS_OFFSET = pcStack_134;
  FUN_00403dd4(&local_18,2);
  return;
}

