/*
 * FUN_00467df0 at 00467df0
 * undefined __register FUN_00467df0(int * param_1, int * param_2)
 * Address ranges: 00467df0-00467ed6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x462204 slot 3 for TFieldDefs. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x462204 slot 3 for
   TFieldDefs. Original bytes unchanged; names and types still inferred. */

void FUN_00467df0(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  byte *pbVar2;
  int iVar3;
  undefined4 uStack_228;
  undefined1 *puStack_224;
  undefined1 *puStack_220;
  int local_210;
  byte local_20c [256];
  byte local_10c [256];
  int local_c;
  int local_8;
  
  puStack_220 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_210 = 0;
  puStack_224 = &LAB_00467ed7;
  uStack_228 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_228;
  iVar1 = FUN_00403270(param_1,param_2,0);
  if (iVar1 == param_1[7]) {
    FUN_00467570((int)param_1,param_2);
  }
  else if (param_2[3] == 0) {
    FUN_00403270(param_1,extraout_EDX,extraout_ECX);
    pbVar2 = local_10c;
    FUN_00402fe0(*param_2,local_20c);
    FUN_004028e8(local_20c,2,5,pbVar2);
    FUN_00403fd4(&local_c,local_10c);
    iVar3 = local_c;
    FUN_00409bd8(param_2[2] + 1,&local_210);
    iVar1 = local_210;
    FUN_004040f0(&local_8,3);
    (**(code **)(*param_2 + 0x14))(param_2,local_8,*param_2,iVar1,iVar3);
  }
  *in_FS_OFFSET = uStack_228;
  puStack_220 = &LAB_00467ede;
  puStack_224 = (undefined1 *)0x467ec9;
  FUN_00403db0(&local_210);
  puStack_224 = (undefined1 *)0x467ed6;
  FUN_00403dd4(&local_c,2);
  return;
}

