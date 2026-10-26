/*
 * FUN_00422e7c at 00422e7c
 * undefined __register FUN_00422e7c(int param_1, int param_2, uint param_3)
 * Address ranges: 00422e7c-00422f1c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00422e7c(int param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 *local_c;
  
  puStack_1c = (undefined1 *)0x422e94;
  FUN_00422e64(param_1);
  puStack_20 = &LAB_00422f1d;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  for (local_c = *(undefined4 **)(param_1 + 4);
      (local_c != (undefined4 *)0x0 && ((param_2 != local_c[2] || (param_3 != local_c[3]))));
      local_c = (undefined4 *)*local_c) {
  }
  if (local_c == (undefined4 *)0x0) {
    puStack_1c = &stack0xfffffffc;
    puVar1 = (undefined4 *)FUN_004027e8(0x10);
    *puVar1 = *(undefined4 *)(param_1 + 4);
    piVar2 = FUN_00422f30(param_1,param_2,param_3);
    puVar1[1] = piVar2;
    puVar1[2] = param_2;
    puVar1[3] = param_3;
    *(undefined4 **)(param_1 + 4) = puVar1;
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00422f24;
  puStack_20 = (undefined1 *)0x422f1c;
  FUN_00422e70(param_1);
  return;
}

