/*
 * FUN_0045915c at 0045915c
 * undefined __register FUN_0045915c(undefined4 * param_1, char * param_2, int * param_3)
 * Address ranges: 0045915c-004591b4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0045915c(undefined4 *param_1,char *param_2,int *param_3)

{
  undefined4 *in_FS_OFFSET;
  int *piVar1;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int *local_10;
  char *local_c;
  undefined4 *local_8;
  
  puStack_14 = (undefined1 *)0x459173;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_1);
  puStack_14 = (undefined1 *)0x45917b;
  FUN_004041e4((int)local_c);
  puStack_18 = &LAB_004591b5;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  piVar1 = local_10;
  puStack_14 = &stack0xfffffffc;
  FUN_00459030(local_8,local_c,0,local_10);
  *in_FS_OFFSET = piVar1;
  puStack_18 = &LAB_004591bc;
  uStack_1c = 0x4591b4;
  FUN_00403dd4((int *)&local_c,2);
  return;
}

