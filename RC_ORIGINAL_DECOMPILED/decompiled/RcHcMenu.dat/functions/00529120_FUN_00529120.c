/*
 * FUN_00529120 at 00529120
 * undefined __register FUN_00529120(int * param_1, undefined4 param_2)
 * Address ranges: 00529120-005291b7;005291bf-005291c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00529120(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  int *local_8;
  
  if ((param_1[0xa7] == 0) && (param_1[0xa2] == 0)) {
    puStack_10 = (undefined1 *)0x529150;
    local_c = param_2;
    local_8 = param_1;
    FUN_005231cc((uint)param_1);
    puStack_14 = &LAB_005291b8;
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    puStack_10 = &stack0xfffffffc;
    iVar1 = FUN_00549b48(local_8[0xa4]);
    piVar2 = (int *)FUN_005286e0(local_8);
    FUN_005279cc(piVar2,iVar1);
    piVar2 = (int *)FUN_005286e0(local_8);
    FUN_0052766c(piVar2,local_8[0xa5]);
    FUN_00529270((int)local_8,local_8[0xa5]);
    *in_FS_OFFSET = uStack_18;
    puStack_10 = (undefined1 *)0x5291bf;
    puStack_14 = (undefined1 *)0x5291b7;
    FUN_00523060(local_8);
    return;
  }
  return;
}

