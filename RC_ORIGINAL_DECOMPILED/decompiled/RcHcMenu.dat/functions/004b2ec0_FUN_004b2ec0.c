/*
 * FUN_004b2ec0 at 004b2ec0
 * int * __register FUN_004b2ec0(int * param_1, char param_2, int * param_3)
 * Address ranges: 004b2ec0-004b2f20
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004b2ec0(int *param_1,char param_2,int *param_3)

{
  int *extraout_ECX;
  int iVar1;
  char extraout_DL;
  char cVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  byte bVar5;
  undefined4 in_stack_ffffffc0;
  undefined4 in_stack_ffffffc4;
  int local_28 [7];
  char local_9;
  int *local_8;
  
  bVar5 = 0;
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffc0,in_stack_ffffffc4);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  piVar3 = local_28;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *param_3;
    param_3 = param_3 + (uint)bVar5 * -2 + 1;
    piVar3 = piVar3 + (uint)bVar5 * -2 + 1;
  }
  local_9 = cVar2;
  local_8 = param_1;
  FUN_0045b418(param_1,'\0',0);
  piVar3 = local_28;
  piVar4 = local_8 + 1;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + (uint)bVar5 * -2 + 1;
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
  }
  if (local_9 != '\0') {
    FUN_0040342c(local_8);
    *in_FS_OFFSET = in_stack_ffffffc0;
  }
  return local_8;
}

