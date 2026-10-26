/*
 * FUN_004d7114 at 004d7114
 * undefined __register FUN_004d7114(int * param_1, char param_2, int * param_3)
 * Address ranges: 004d7114-004d71dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004d7114(int *param_1,char param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *extraout_ECX;
  undefined1 extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_134;
  undefined1 *puStackY_130;
  undefined1 *puStackY_12c;
  undefined4 in_stack_fffffed8;
  undefined4 in_stack_fffffedc;
  byte local_114 [256];
  int local_14;
  int *local_10;
  undefined1 local_9;
  int *local_8;
  
  local_14 = 0;
  local_9 = 0;
  if (param_2 != '\0') {
    puStackY_12c = (undefined1 *)0x4d712f;
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_fffffed8,in_stack_fffffedc);
    param_3 = extraout_ECX;
    local_9 = extraout_DL;
  }
  puStackY_130 = &LAB_004d71dd;
  uStackY_134 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_134;
  puStackY_12c = &stack0xfffffffc;
  local_10 = param_3;
  local_8 = param_1;
  FUN_0045b418(param_1,'\0',param_3);
  if (local_10 == (int *)0x0) {
    FUN_00402fe0(*local_8,local_114);
    FUN_00403fd4(&local_14,local_114);
    FUN_00404038(&local_14,(undefined4 *)".Create: no query");
    FUN_00403d94(local_14);
  }
  local_8[1] = (int)local_10;
  uVar2 = local_8[1];
  piVar1 = (int *)(uVar2 + 0x10);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + 1;
  if (SCARRY4(iVar3,1)) {
    thunk_FUN_00402874(uVar2);
  }
  iVar3 = (**(code **)(*local_10 + 0x34))();
  local_8[2] = iVar3;
  local_8[3] = local_10[5];
  *in_FS_OFFSET = uStackY_134;
  puStackY_12c = &LAB_004d71e4;
  puStackY_130 = (undefined1 *)0x4d71dc;
  FUN_00403db0(&local_14);
  return;
}

