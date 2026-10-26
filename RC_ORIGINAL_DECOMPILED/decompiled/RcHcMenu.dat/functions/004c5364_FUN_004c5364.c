/*
 * FUN_004c5364 at 004c5364
 * undefined __register FUN_004c5364(int * param_1, char param_2, int param_3)
 * Address ranges: 004c5364-004c5447
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004c5364(int *param_1,char param_2,int param_3)

{
  int extraout_ECX;
  int extraout_ECX_00;
  undefined1 extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_134;
  undefined1 *puStackY_130;
  undefined1 *puStackY_12c;
  undefined4 in_stack_fffffed8;
  undefined4 in_stack_fffffedc;
  byte local_114 [256];
  int local_14;
  int local_10;
  undefined1 local_9;
  int *local_8;
  
  local_14 = 0;
  local_9 = 0;
  if (param_2 != '\0') {
    puStackY_12c = (undefined1 *)0x4c537f;
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_fffffed8,in_stack_fffffedc);
    param_3 = extraout_ECX;
    local_9 = extraout_DL;
  }
  puStackY_130 = &LAB_004c5448;
  uStackY_134 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_134;
  puStackY_12c = &stack0xfffffffc;
  local_10 = param_3;
  local_8 = param_1;
  if (param_3 == 0) {
    puStackY_12c = &stack0xfffffffc;
    FUN_00402fe0(*param_1,local_114);
    FUN_00403fd4(&local_14,local_114);
    FUN_00404038(&local_14,(undefined4 *)".Create: aControl must be assigned");
    FUN_00403d94(local_14);
    param_3 = extraout_ECX_00;
  }
  FUN_00403064(local_8,'\0',param_3);
  local_8[1] = local_10;
  local_8[2] = -0x7ffffff1;
  local_8[3] = -0x7ffffff0;
  local_8[4] = -0x7fffffec;
  local_8[5] = -0x7fffffea;
  local_8[6] = -0x7fffffeb;
  local_8[7] = -0x7fffffea;
  local_8[8] = -0x7ffffff0;
  *in_FS_OFFSET = uStackY_134;
  puStackY_12c = &LAB_004c544f;
  puStackY_130 = (undefined1 *)0x4c5447;
  FUN_00403db0(&local_14);
  return;
}

