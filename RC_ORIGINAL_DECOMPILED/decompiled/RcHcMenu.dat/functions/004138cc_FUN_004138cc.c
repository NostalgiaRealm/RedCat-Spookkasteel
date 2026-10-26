/*
 * FUN_004138cc at 004138cc
 * undefined __register FUN_004138cc(int * param_1)
 * Address ranges: 004138cc-00413910
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004138cc(int *param_1)

{
  char *pcVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined *local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = (undefined *)0x0;
  puStack_14 = &LAB_00413911;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  (**(code **)(*param_1 + 0x1c))(param_1,&local_8);
  pcVar1 = FUN_004041f4(local_8);
  FUN_0040a380(pcVar1);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00413918;
  puStack_14 = (undefined1 *)0x413910;
  FUN_00403db0((int *)&local_8);
  return;
}

