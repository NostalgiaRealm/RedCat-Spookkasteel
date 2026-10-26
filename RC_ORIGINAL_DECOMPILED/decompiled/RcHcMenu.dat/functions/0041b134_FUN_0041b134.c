/*
 * FUN_0041b134 at 0041b134
 * undefined __register FUN_0041b134(int param_1, int * param_2, byte * param_3)
 * Address ranges: 0041b134-0041b19c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041b134(int param_1,int *param_2,byte *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = (undefined1 *)0x41b14d;
  FUN_0041af88(param_1);
  puStack_20 = &LAB_0041b19d;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puVar1 = (undefined4 *)param_2[4];
  puStack_1c = &stack0xfffffffc;
  puVar2 = (undefined4 *)FUN_0041afa0(param_1,param_3);
  param_2[4] = (int)puVar2;
  if (puVar1 != puVar2) {
    FUN_00403270(param_2,extraout_EDX,extraout_ECX);
  }
  FUN_0041b084(param_1,puVar1);
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0041b1a4;
  puStack_20 = (undefined1 *)0x41b19c;
  FUN_0041af94(param_1);
  return;
}

