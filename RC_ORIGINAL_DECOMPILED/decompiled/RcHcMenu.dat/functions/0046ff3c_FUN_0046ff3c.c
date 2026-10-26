/*
 * FUN_0046ff3c at 0046ff3c
 * undefined __register FUN_0046ff3c(int param_1, undefined4 * param_2, uint param_3)
 * Address ranges: 0046ff3c-0046ff94
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046ff3c(int param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_1c = &LAB_0046ff95;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_00404364((int *)&local_8,param_3);
  puVar1 = (undefined4 *)FUN_004041f4((undefined *)local_8);
  FUN_00402944(param_2,puVar1,param_3);
  FUN_00470b94(param_1,local_8);
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0046ff9c;
  puStack_1c = (undefined1 *)0x46ff94;
  FUN_00403db0((int *)&local_8);
  return;
}

