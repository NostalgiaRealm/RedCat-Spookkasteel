/*
 * FUN_00493178 at 00493178
 * undefined __register FUN_00493178(int * param_1, char param_2)
 * Address ranges: 00493178-0049324b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00493178(int *param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined1 extraout_DL;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  char *pcStackY_13c;
  undefined4 uStackY_130;
  undefined1 *puStackY_12c;
  undefined1 *puStackY_128;
  undefined4 in_stack_fffffedc;
  undefined4 in_stack_fffffee0;
  byte local_114 [256];
  int local_14;
  int local_10;
  undefined1 local_9;
  int *local_8;
  
  local_10 = 0;
  local_14 = 0;
  local_9 = 0;
  if (param_2 != '\0') {
    puStackY_128 = (undefined1 *)0x493195;
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,0,in_stack_fffffedc,in_stack_fffffee0);
    local_9 = extraout_DL;
  }
  puStackY_12c = &LAB_0049324c;
  uStackY_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_130;
  puStackY_128 = &stack0xfffffffc;
  local_8 = param_1;
  FUN_0045f6c0(param_1,'\0',(int)param_1);
  iVar1 = FUN_00402fdc(local_8);
  piVar2 = (int *)FUN_00497394(iVar1,extraout_EDX,extraout_ECX);
  iVar1 = FUN_0049756c(piVar2,iVar1);
  local_8[6] = iVar1;
  if (local_8[6] == 0) {
    FUN_00402fe0(*local_8,local_114);
    FUN_00403fd4(&local_14,local_114);
    pcStackY_13c = "AppObjDesc not found";
    FUN_004040f0(&local_10,3);
    FUN_00403d94(local_10);
  }
  FUN_00492b20((int *)local_8[6],local_8);
  *in_FS_OFFSET = pcStackY_13c;
  FUN_00403dd4(&local_14,2);
  return;
}

