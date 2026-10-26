/*
 * FUN_0044599c at 0044599c
 * undefined __register FUN_0044599c(undefined4 * param_1, undefined4 * param_2)
 * Address ranges: 0044599c-004459f4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0044599c(undefined4 *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined *local_c;
  undefined *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = (undefined *)0x0;
  local_c = (undefined *)0x0;
  puStack_1c = &LAB_004459f5;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_004458a0(param_2,(int *)&local_8);
  puVar1 = local_8;
  FUN_004458a0(param_1,(int *)&local_c);
  FUN_004098a8(local_c,puVar1);
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004459fc;
  puStack_1c = (undefined1 *)0x4459f4;
  FUN_00403dd4((int *)&local_c,2);
  return;
}

