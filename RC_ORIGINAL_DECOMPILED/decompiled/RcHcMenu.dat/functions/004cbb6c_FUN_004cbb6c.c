/*
 * FUN_004cbb6c at 004cbb6c
 * undefined __register FUN_004cbb6c(int * param_1, int param_2)
 * Address ranges: 004cbb6c-004cbbf5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004cbb6c(int *param_1,int param_2)

{
  char cVar1;
  undefined2 extraout_var;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_004cbbf6;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_00432714((int)param_1,&local_8);
  cVar1 = FUN_0044872c(CONCAT22(extraout_var,*(undefined2 *)(param_2 + 4)),local_8);
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(*param_1 + 0x4c))();
    if ((((cVar1 != '\0') && (*(char *)((int)param_1 + 0x47) != '\0')) && (param_1[9] != 0)) &&
       (*(char *)(param_1[9] + 0x168) != '\0')) {
      FUN_00403270(param_1,extraout_EDX,extraout_ECX);
      *(undefined4 *)(param_2 + 0xc) = 1;
      goto LAB_004cbbe0;
    }
  }
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
LAB_004cbbe0:
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004cbbfd;
  puStack_1c = (undefined1 *)0x4cbbf5;
  FUN_00403db0(&local_8);
  return;
}

