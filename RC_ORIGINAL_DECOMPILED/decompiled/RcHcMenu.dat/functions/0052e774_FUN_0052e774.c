/*
 * FUN_0052e774 at 0052e774
 * undefined __register FUN_0052e774(int * param_1, char param_2, int param_3)
 * Address ranges: 0052e774-0052e89c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0052e774(int *param_1,char param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int extraout_ECX;
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
    puStackY_130 = (undefined1 *)0x52e792;
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_fffffed4,in_stack_fffffed8);
    param_3 = extraout_ECX;
    local_9 = extraout_DL;
  }
  puStackY_134 = &LAB_0052e89d;
  uStackY_138 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_138;
  puStackY_130 = &stack0xfffffffc;
  local_10 = param_3;
  local_8 = param_1;
  FUN_0054b670(param_1,'\0',param_3);
  iVar1 = FUN_00403224((int *)local_8[1],(int)&PTR_FUN_0052b7f4);
  if (*(int *)(iVar1 + 0x88) == -0x80000000) {
    FUN_00402fe0(*local_8,local_118);
    FUN_00403fd4(&local_18,local_118);
    pcStackY_144 = " Invalid position in list";
    FUN_004040f0(&local_14,3);
    FUN_00403d94(local_14);
  }
  iVar1 = FUN_00403224((int *)local_8[1],(int)&PTR_FUN_0052b7f4);
  local_8[5] = *(int *)(iVar1 + 0x94);
  iVar1 = FUN_00403224((int *)local_8[1],(int)&PTR_FUN_0052b7f4);
  local_8[3] = *(int *)(iVar1 + 0x88);
  piVar2 = (int *)FUN_00549b64(local_10);
  iVar1 = FUN_0049206c(piVar2);
  local_8[4] = iVar1;
  piVar2 = (int *)FUN_00549b80(local_8[1]);
  FUN_00493768((int *)local_8[4],piVar2);
  *in_FS_OFFSET = pcStackY_144;
  FUN_00403dd4(&local_18,2);
  return;
}

