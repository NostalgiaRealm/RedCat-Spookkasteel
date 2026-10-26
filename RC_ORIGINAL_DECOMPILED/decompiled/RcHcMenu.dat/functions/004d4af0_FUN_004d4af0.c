/*
 * FUN_004d4af0 at 004d4af0
 * undefined __register FUN_004d4af0(int * param_1, char param_2, int param_3, int param_4, undefined4 * param_5)
 * Address ranges: 004d4af0-004d4bc9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004d4af0(int *param_1,char param_2,int param_3,int param_4,undefined4 *param_5)

{
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar1;
  undefined1 extraout_DL;
  undefined4 *in_FS_OFFSET;
  char *pcStackY_144;
  undefined4 uStackY_138;
  undefined1 *puStackY_134;
  undefined1 *puStackY_130;
  undefined4 in_stack_fffffed4;
  undefined4 in_stack_fffffed8;
  byte local_118 [256];
  int local_18;
  int local_14;
  int local_10;
  undefined1 local_9;
  int *local_8;
  
  local_14 = 0;
  local_18 = 0;
  local_9 = 0;
  if (param_2 != '\0') {
    puStackY_130 = (undefined1 *)0x4d4b0e;
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_fffffed4,in_stack_fffffed8);
    param_3 = extraout_ECX;
    local_9 = extraout_DL;
  }
  puStackY_130 = (undefined1 *)0x4d4b1f;
  local_10 = param_3;
  local_8 = param_1;
  FUN_004041e4((int)param_5);
  puStackY_134 = &LAB_004d4bca;
  uStackY_138 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_138;
  uVar1 = extraout_ECX_00;
  puStackY_130 = &stack0xfffffffc;
  if (param_4 == 0) {
    puStackY_130 = &stack0xfffffffc;
    FUN_00402fe0(*local_8,local_118);
    FUN_00403fd4(&local_18,local_118);
    pcStackY_144 = " Parameter cannot be nil";
    FUN_004040f0(&local_14,3);
    FUN_00403d94(local_14);
    uVar1 = extraout_ECX_01;
  }
  FUN_0045b418(local_8,'\0',uVar1);
  local_8[1] = local_10;
  FUN_00403e04(local_8 + 2,param_5);
  local_8[3] = param_4;
  *in_FS_OFFSET = pcStackY_144;
  FUN_00403dd4(&local_18,2);
  FUN_00403db0((int *)&param_5);
  return;
}

