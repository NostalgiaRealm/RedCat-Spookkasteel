/*
 * FUN_0054ea44 at 0054ea44
 * undefined __register FUN_0054ea44(int * param_1, char param_2, undefined4 param_3)
 * Address ranges: 0054ea44-0054eb4d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x54e7f8 slot 11 for TfrmCoolDialog. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x54e7f8 slot 11 for
   TfrmCoolDialog. Original bytes unchanged; names and types still inferred. */

void FUN_0054ea44(int *param_1,char param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined1 extraout_DL;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  byte *pbVar1;
  undefined4 uStack_244;
  undefined1 *puStack_240;
  undefined1 *puStack_23c;
  undefined4 uStack_238;
  undefined1 *puStack_234;
  undefined1 *puStack_230;
  undefined4 in_stack_fffffdd4;
  undefined4 in_stack_fffffdd8;
  byte local_218 [256];
  byte local_118 [256];
  undefined4 *local_18;
  int *local_14;
  undefined4 local_10;
  undefined1 local_9;
  int *local_8;
  
  local_18 = (undefined4 *)0x0;
  local_9 = 0;
  if (param_2 != '\0') {
    puStack_230 = (undefined1 *)0x54ea5f;
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_fffffdd4,in_stack_fffffdd8);
    param_3 = extraout_ECX;
    local_9 = extraout_DL;
  }
  puStack_234 = &LAB_0054ec1b;
  uStack_238 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_238;
  puStack_23c = (undefined1 *)0x54ea83;
  puStack_230 = &stack0xfffffffc;
  local_10 = param_3;
  local_8 = param_1;
  FUN_004af0b8(param_1,'\0',param_3);
  puStack_23c = (undefined1 *)0x54ea93;
  FUN_00431d2c((int *)local_8[0xba],CONCAT31((int3)((uint)extraout_EDX >> 8),5),extraout_ECX_00);
  puStack_23c = (undefined1 *)0x54ea9f;
  local_14 = FUN_0049a2d4((int *)&PTR_FUN_0049bb88,'\x01',extraout_ECX_01);
  puStack_240 = &LAB_0054eb4e;
  uStack_244 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_244;
  pbVar1 = local_118;
  puStack_23c = &stack0xfffffffc;
  FUN_00402fe0(*local_8,local_218);
  FUN_004028e8(local_218,5,8,pbVar1);
  FUN_00403fd4((int *)&local_18,local_118);
  FUN_004a7f54(*(int **)(*(int *)PTR_DAT_00572108 + 0x10c),local_18,local_14);
  (**(code **)(**(int **)(local_8[0xba] + 300) + 8))(*(int **)(local_8[0xba] + 300),local_14);
  FUN_00431f78(local_8,local_14[0x23]);
  FUN_00431f98(local_8,local_14[0x10]);
  *in_FS_OFFSET = uStack_244;
  puStack_23c = &LAB_0054eb55;
  puStack_240 = (undefined1 *)0x54eb4d;
  FUN_00403094(local_14);
  return;
}

