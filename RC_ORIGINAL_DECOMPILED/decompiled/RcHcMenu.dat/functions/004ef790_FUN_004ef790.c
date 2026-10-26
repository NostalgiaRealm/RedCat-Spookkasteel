/*
 * FUN_004ef790 at 004ef790
 * undefined __register FUN_004ef790(int * param_1, char param_2, int * param_3)
 * Address ranges: 004ef790-004ef859
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ef790(int *param_1,char param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *extraout_ECX;
  undefined1 extraout_DL;
  undefined4 *in_FS_OFFSET;
  char *pcStack_144;
  undefined4 uStack_138;
  undefined1 *puStack_134;
  undefined1 *puStack_130;
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
    puStack_130 = (undefined1 *)0x4ef7ae;
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_fffffed4,in_stack_fffffed8);
    param_3 = extraout_ECX;
    local_9 = extraout_DL;
  }
  puStack_134 = &LAB_004ef85a;
  uStack_138 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_138;
  puStack_130 = &stack0xfffffffc;
  local_10 = param_3;
  local_8 = param_1;
  uVar1 = FUN_0040320c(param_3,(int)&PTR_FUN_004ef608);
  if ((char)uVar1 == '\0') {
    FUN_00402fe0(*local_8,local_118);
    FUN_00403fd4(&local_18,local_118);
    pcStack_144 = "Owner is not TDaviCustomCombo";
    FUN_004040f0(&local_14,3);
    FUN_00403d94(local_14);
  }
  FUN_004c7e64(local_8,'\0',local_10);
  iVar2 = GetSystemMetrics(2);
  FUN_00431f78(local_8,iVar2);
  *in_FS_OFFSET = pcStack_144;
  FUN_00403dd4(&local_18,2);
  return;
}

