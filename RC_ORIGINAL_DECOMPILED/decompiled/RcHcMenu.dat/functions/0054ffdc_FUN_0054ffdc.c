/*
 * FUN_0054ffdc at 0054ffdc
 * undefined __register FUN_0054ffdc(int * param_1)
 * Address ranges: 0054ffdc-00550071
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0054ffdc(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_118;
  undefined1 *puStack_114;
  undefined1 *puStack_110;
  byte local_10c [256];
  undefined4 *local_c;
  int *local_8;
  
  puStack_110 = &stack0xfffffffc;
  local_c = (undefined4 *)0x0;
  puStack_114 = &LAB_00550072;
  uStack_118 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_118;
  local_8 = param_1;
  FUN_00402fe0(*param_1,local_10c);
  FUN_00403fd4((int *)&local_c,local_10c);
  FUN_00404038((int *)&local_c,(undefined4 *)".StopCurrentSound");
  puVar1 = local_c;
  uVar2 = FUN_004a418c();
  FUN_004a48b8(uVar2,puVar1,0);
  if (local_8[1] != 0) {
    FUN_0054f4b4(local_8,(int *)local_8[1]);
  }
  uVar2 = FUN_004a418c();
  FUN_004a49b0(uVar2);
  *in_FS_OFFSET = uStack_118;
  puStack_110 = &LAB_00550079;
  puStack_114 = (undefined1 *)0x550071;
  FUN_00403db0((int *)&local_c);
  return;
}

