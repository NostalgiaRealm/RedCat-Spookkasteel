/*
 * FUN_0044872c at 0044872c
 * undefined __register FUN_0044872c(undefined4 param_1, int param_2)
 * Address ranges: 0044872c-00448789
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0044872c(undefined4 param_1,int param_2)

{
  char *pcVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  char *local_c;
  char *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = (char *)0x0;
  local_c = (char *)0x0;
  puStack_1c = &LAB_0044878a;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_00445938(param_2,(int *)&local_8);
  pcVar1 = local_8;
  FUN_00403f58((int *)&local_c,param_1);
  FUN_00409758(local_c,pcVar1);
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00448791;
  puStack_1c = (undefined1 *)0x448789;
  FUN_00403dd4((int *)&local_c,2);
  return;
}

