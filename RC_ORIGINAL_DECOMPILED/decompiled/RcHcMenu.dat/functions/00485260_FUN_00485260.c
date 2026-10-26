/*
 * FUN_00485260 at 00485260
 * undefined __register FUN_00485260(int param_1, int param_2, int param_3, undefined4 * param_4)
 * Address ranges: 00485260-004852b9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00485260(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x485274;
  FUN_004041e4((int)param_4);
  puStack_18 = &LAB_004852ba;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  iVar1 = FUN_004730d8(param_1);
  if (param_3 == iVar1) {
    FUN_00403e04((int *)(param_3 + (uint)*(ushort *)(param_1 + 0x1ee) + *(int *)(param_2 + 0x40) * 4
                        ),param_4);
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004852c1;
  puStack_18 = (undefined1 *)0x4852b9;
  FUN_00403db0((int *)&param_4);
  return;
}

