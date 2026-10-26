/*
 * FUN_00415ee4 at 00415ee4
 * undefined __register FUN_00415ee4(int * param_1, int * param_2, uint param_3)
 * Address ranges: 00415ee4-00415f3e;00415f46-00415f53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00415ee4(int *param_1,int *param_2,uint param_3)

{
  int iVar1;
  uint extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  if (param_1[0xc] == 0) {
    puStack_10 = (undefined1 *)0x415f03;
    iVar1 = FUN_00403064((int *)&PTR_FUN_0041077c,'\x01',param_3);
    param_1[0xc] = iVar1;
    puStack_14 = &LAB_00415f3f;
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    puStack_10 = &stack0xfffffffc;
    FUN_00415f54(param_1,param_2,extraout_ECX);
    FUN_004156b8(param_1);
    *in_FS_OFFSET = uStack_18;
    puStack_10 = (undefined1 *)0x415f50;
    puStack_14 = (undefined1 *)0x415f3e;
    FUN_004157fc((int)param_1);
    return;
  }
  puStack_10 = (undefined1 *)0x415f50;
  FUN_00415f54(param_1,param_2,param_3);
  return;
}

