/*
 * FUN_004907a8 at 004907a8
 * undefined __register FUN_004907a8(int * param_1, char param_2, int param_3, byte param_4, undefined1 param_5, undefined4 * param_6, int param_7, undefined4 * param_8, undefined4 * param_9)
 * Address ranges: 004907a8-00490928;00490972-00490992
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004907a8(int *param_1,char param_2,int param_3,byte param_4,undefined1 param_5,
                 undefined4 *param_6,int param_7,undefined4 *param_8,undefined4 *param_9)

{
  int *piVar1;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined1 extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_148;
  undefined1 *puStackY_144;
  undefined1 *puStackY_140;
  undefined4 local_13c;
  undefined1 *puStackY_138;
  undefined1 *puStackY_134;
  undefined4 in_stack_fffffed0;
  undefined4 in_stack_fffffed4;
  int local_114;
  byte local_110 [256];
  int local_10;
  undefined1 local_9;
  int *local_8;
  
  local_114 = 0;
  local_9 = 0;
  if (param_2 != '\0') {
    puStackY_134 = (undefined1 *)0x4907c8;
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_fffffed0,in_stack_fffffed4);
    param_3 = extraout_ECX;
    local_9 = extraout_DL;
  }
  puStackY_134 = (undefined1 *)0x4907d9;
  local_10 = param_3;
  local_8 = param_1;
  FUN_004041e4((int)param_6);
  puStackY_138 = &LAB_00490993;
  local_13c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_13c;
  puStackY_140 = (undefined1 *)0x4907f1;
  puStackY_134 = &stack0xfffffffc;
  FUN_0045b418(local_8,'\0',extraout_ECX_00);
  puStackY_144 = &LAB_00490929;
  uStackY_148 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_148;
  puStackY_140 = &stack0xfffffffc;
  if ((param_4 != 0) &&
     ((param_4 == 0 || (puStackY_140 = &stack0xfffffffc, param_6 == (undefined4 *)0x0)))) {
    puStackY_140 = &stack0xfffffffc;
    FUN_00403d94("[aTablename] must be specified or [aFlags] empty");
  }
  if (((param_4 != 0) && (((param_4 & 1) == 0 || ((param_4 & 2) != 0)))) &&
     (((param_4 & 2) == 0 || ((param_4 & 1) != 0)))) {
    FUN_00403d94("[aFlags] must contain AF_CREATE_TABLE or AF_CREATE_VIEW or empty");
  }
  local_8[2] = param_7;
  *(undefined1 *)(local_8 + 0x11) = param_5;
  *(byte *)((int)local_8 + 0x45) = param_4;
  FUN_00402fe0(local_10,local_110);
  FUN_00403fd4(local_8 + 0xc,local_110);
  FUN_00403e04(local_8 + 0xf,param_6);
  FUN_00403e04(local_8 + 7,param_9);
  FUN_00403e04(local_8 + 8,param_8);
  local_8[0xd] = local_10;
  piVar1 = FUN_00459fa8(3,local_10,extraout_ECX_01);
  local_8[10] = (int)piVar1;
  piVar1 = FUN_00459fa8(2,local_8,extraout_ECX_02);
  local_8[0xe] = (int)piVar1;
  piVar1 = FUN_00496da0((int *)&PTR_FUN_0048e554,'\x01',5);
  local_8[0xb] = (int)piVar1;
  local_8[9] = -1;
  FUN_00490120((int *)local_8[2],local_8);
  *in_FS_OFFSET = uStackY_148;
  *in_FS_OFFSET = local_13c;
  puStackY_134 = &LAB_0049099a;
  puStackY_138 = (undefined1 *)0x49098a;
  FUN_00403db0(&local_114);
  puStackY_138 = (undefined1 *)0x490992;
  FUN_00403db0((int *)&param_6);
  return;
}

