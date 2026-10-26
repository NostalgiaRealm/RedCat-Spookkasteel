/*
 * FUN_00438c14 at 00438c14
 * undefined __register FUN_00438c14(int * param_1, byte param_2, undefined4 param_3)
 * Address ranges: 00438c14-00438c77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00438c14(int *param_1,byte param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (int *)0x0;
  puStack_18 = &LAB_00438c78;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  if ((param_2 != *(byte *)(param_1 + 0x5f)) &&
     (*(byte *)(param_1 + 0x5f) = param_2, ((*(byte *)(param_1 + 8) & 0x10) == 0 & param_2) != 0)) {
    FUN_00403270(param_1,&local_8,param_3);
    FUN_00406ab8(param_1 + 0x52,local_8);
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00438c7f;
  puStack_18 = (undefined1 *)0x438c77;
  FUN_00406aa0((int *)&local_8);
  return;
}

