/*
 * FUN_004aaa5c at 004aaa5c
 * undefined __register FUN_004aaa5c(int * param_1, char param_2, int * param_3)
 * Address ranges: 004aaa5c-004aab67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004aaa5c(int *param_1,char param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined1 extraout_DL;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  char *pcStackY_148;
  undefined4 uStackY_138;
  undefined1 *puStackY_134;
  undefined1 *puStackY_130;
  undefined4 in_stack_fffffed4;
  undefined4 in_stack_fffffed8;
  byte local_118 [256];
  int local_18;
  int local_14;
  int *local_10;
  undefined1 local_9;
  int *local_8;
  
  local_14 = 0;
  local_18 = 0;
  local_9 = 0;
  if (param_2 != '\0') {
    puStackY_130 = (undefined1 *)0x4aaa7a;
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_fffffed4,in_stack_fffffed8);
    param_3 = extraout_ECX;
    local_9 = extraout_DL;
  }
  puStackY_134 = &LAB_004aab68;
  uStackY_138 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_138;
  puStackY_130 = &stack0xfffffffc;
  local_10 = param_3;
  local_8 = param_1;
  uVar1 = FUN_0040320c(param_3,(int)&PTR_FUN_004aa588);
  if ((char)uVar1 == '\0') {
    FUN_00402fe0(*local_8,local_118);
    FUN_00403fd4(&local_18,local_118);
    pcStackY_148 = "Object has wrong owner, it must be created by a TGDIHintWindow class.";
    FUN_004040f0(&local_14,4);
    FUN_00403d94(local_14);
  }
  FUN_00439a24(local_8,'\0',local_10);
  iVar2 = FUN_00403224(local_10,(int)&PTR_FUN_004aa588);
  local_8[0x4c] = iVar2;
  local_8[0x4d] = *(int *)(local_8[0x4c] + 0x204);
  (**(code **)(*local_8 + 0x60))(local_8,local_8[0x4d]);
  FUN_00403270(local_8,CONCAT31((int3)((uint)extraout_EDX >> 8),1),extraout_ECX_00);
  *in_FS_OFFSET = pcStackY_148;
  FUN_00403dd4(&local_18,2);
  return;
}

