/*
 * FUN_00544314 at 00544314
 * undefined __register FUN_00544314(int * param_1, int * param_2, int param_3, VARIANT * param_4, byte * param_5, int * param_6)
 * Address ranges: 00544314-005443f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x544284 slot 12 for TDaviCascadingDeleteDialog. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x544284 slot 12 for
   TDaviCascadingDeleteDialog. Original bytes unchanged; names and types still inferred. */

void FUN_00544314(int *param_1,int *param_2,int param_3,VARIANT *param_4,byte *param_5,int *param_6)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_150;
  undefined1 *puStack_14c;
  undefined1 *puStack_148;
  byte local_138 [256];
  int local_38;
  int local_34;
  int local_30 [7];
  undefined1 local_11;
  int local_10;
  int *local_c;
  int *local_8;
  
  puStack_148 = &stack0xfffffffc;
  local_34 = 0;
  local_38 = 0;
  piVar3 = local_30;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = *param_6;
    param_6 = param_6 + 1;
    piVar3 = piVar3 + 1;
  }
  puStack_14c = &LAB_005443f1;
  uStack_150 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_150;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_004cca04);
  if ((char)uVar1 == '\0') {
    FUN_00402fe0(*local_8,local_138);
    FUN_00403fd4(&local_38,local_138);
    FUN_004040f0(&local_34,3);
    FUN_00403d94(local_34);
  }
  piVar3 = local_30;
  iVar2 = FUN_00403224(local_c,(int)&PTR_FUN_004cca04);
  local_11 = FUN_0054445c(&PTR_FUN_00543fc0,iVar2,local_10,param_4,param_5,piVar3);
  *in_FS_OFFSET = param_4;
  FUN_00403dd4(&local_38,2);
  return;
}

