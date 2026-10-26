/*
 * FUN_00459b18 at 00459b18
 * undefined __register FUN_00459b18(int * param_1, char param_2, int param_3)
 * Address ranges: 00459b18-00459b9e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00459b18(int *param_1,char param_2,int param_3)

{
  int iVar1;
  int extraout_ECX;
  undefined1 extraout_DL;
  int *in_FS_OFFSET;
  int iStackY_38;
  undefined1 *puStackY_34;
  undefined1 *puStackY_30;
  undefined4 in_stack_ffffffd4;
  undefined4 in_stack_ffffffd8;
  int local_18;
  undefined4 *local_14;
  int local_10;
  undefined1 local_9;
  int *local_8;
  
  local_14 = (undefined4 *)0x0;
  local_18 = 0;
  local_9 = 0;
  if (param_2 != '\0') {
    puStackY_30 = (undefined1 *)0x459b33;
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffd4,in_stack_ffffffd8);
    param_3 = extraout_ECX;
    local_9 = extraout_DL;
  }
  puStackY_30 = (undefined1 *)0x459b44;
  local_10 = param_3;
  local_8 = param_1;
  FUN_004041e4(param_3);
  puStackY_34 = &LAB_00459b9f;
  iStackY_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStackY_38;
  puStackY_30 = &stack0xfffffffc;
  FUN_00406a48(&PTR_DAT_00459b10,&local_18);
  iVar1 = local_10;
  FUN_004040f0((int *)&local_14,3);
  FUN_0040ceec(local_8,'\0',local_14);
  *in_FS_OFFSET = iVar1;
  FUN_00403dd4(&local_18,3);
  return;
}

