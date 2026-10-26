/*
 * FUN_004ce02c at 004ce02c
 * undefined __register FUN_004ce02c(int * param_1, char param_2, int param_3)
 * Address ranges: 004ce02c-004ce183
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ce02c(int *param_1,char param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar4;
  undefined1 extraout_DL;
  undefined4 *in_FS_OFFSET;
  char *pcStackY_158;
  undefined4 uStackY_14c;
  undefined1 *puStackY_148;
  undefined1 *puStackY_144;
  undefined4 in_stack_fffffec0;
  undefined4 in_stack_fffffec4;
  int local_12c;
  byte local_128 [256];
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  int *local_18;
  int local_14;
  int local_10;
  undefined1 local_9;
  int *local_8;
  
  local_12c = 0;
  local_24 = 0;
  local_28 = 0;
  local_9 = 0;
  if (param_2 != '\0') {
    puStackY_144 = (undefined1 *)0x4ce050;
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_fffffec0,in_stack_fffffec4);
    param_3 = extraout_ECX;
    local_9 = extraout_DL;
  }
  puStackY_148 = &LAB_004ce184;
  uStackY_14c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_14c;
  puStackY_144 = &stack0xfffffffc;
  local_10 = param_3;
  local_8 = param_1;
  FUN_0045b418(param_1,'\0',param_3);
  uVar4 = extraout_ECX_00;
  if (local_10 == 0) {
    FUN_00402fe0(*local_8,local_128);
    FUN_00403fd4(&local_28,local_128);
    pcStackY_158 = "Model not assigned.";
    FUN_004040f0(&local_24,3);
    FUN_00403d94(local_24);
    uVar4 = extraout_ECX_01;
  }
  local_8[2] = local_10;
  *(undefined1 *)(local_8 + 6) = 0;
  piVar1 = FUN_00459fa8(3,local_8,uVar4);
  local_8[1] = (int)piVar1;
  iVar2 = FUN_004905c0(local_8[2]);
  uVar3 = iVar2 - 1;
  if (SBORROW4(iVar2,1)) {
    uVar3 = thunk_FUN_00402874(uVar3);
  }
  if (-1 < (int)uVar3) {
    local_20 = uVar3 + 1;
    local_14 = 0;
    do {
      local_18 = (int *)FUN_00490590(local_8[2],local_14);
      local_1c = FUN_004cea5c(local_8);
      FUN_00402fe0(*local_18,local_128);
      FUN_00403fd4(&local_12c,local_128);
      (**(code **)(*(int *)local_8[1] + 0x38))((int *)local_8[1],local_12c,local_1c);
      local_14 = local_14 + 1;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  *in_FS_OFFSET = pcStackY_158;
  FUN_00403db0(&local_12c);
  FUN_00403dd4(&local_28,2);
  return;
}

