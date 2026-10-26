/*
 * FUN_004990a4 at 004990a4
 * int * __register FUN_004990a4(int * param_1, char param_2, undefined4 param_3)
 * Address ranges: 004990a4-0049915d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004990a4(int *param_1,char param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  int iVar1;
  char extraout_DL;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  byte bVar6;
  undefined4 in_stack_fffffbac;
  undefined4 in_stack_fffffbb0;
  int local_43c [12];
  undefined4 local_40c [256];
  char local_9;
  int *local_8;
  
  bVar6 = 0;
  local_9 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_fffffbac,in_stack_fffffbb0);
    param_3 = extraout_ECX;
    local_9 = extraout_DL;
  }
  local_8 = param_1;
  FUN_00403064(param_1,'\0',param_3);
  *(undefined1 *)(local_8 + 0x10b) = 1;
  FUN_00498b58((int)local_40c);
  FUN_0049a214((int)local_8,local_40c);
  FUN_00498b58((int)local_40c);
  puVar2 = local_40c;
  puVar4 = (undefined4 *)((int)local_8 + 0x15);
  for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + (uint)bVar6 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
  }
  FUN_004989fc(8,8,8,local_43c);
  piVar3 = local_43c;
  piVar5 = local_8 + 0x111;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar5 = *piVar3;
    piVar3 = piVar3 + (uint)bVar6 * -2 + 1;
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  if (local_9 != '\0') {
    FUN_0040342c(local_8);
    *in_FS_OFFSET = in_stack_fffffbac;
  }
  return local_8;
}

