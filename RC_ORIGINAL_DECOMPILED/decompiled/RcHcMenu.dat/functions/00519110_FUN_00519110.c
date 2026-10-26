/*
 * FUN_00519110 at 00519110
 * undefined __register FUN_00519110(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 00519110-00519188
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00519110(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HBITMAP pHVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  int *local_8;
  
  puStack_c = (undefined1 *)0x519120;
  local_8 = (int *)param_3;
  local_8 = FUN_00420f24((int *)&PTR_FUN_0041acd8,'\x01',param_3);
  puStack_10 = &LAB_00519189;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  puStack_c = &stack0xfffffffc;
  pHVar1 = LoadBitmapA((HINSTANCE)0x0,&DAT_00007ff7);
  FUN_00422004(local_8,pHVar1);
  iVar2 = (**(code **)(*local_8 + 0x2c))();
  if (iVar2 < 0) {
    iVar2 = iVar2 + 3;
  }
  DAT_00574734 = iVar2 >> 2;
  _DAT_00574738 = (**(code **)(*local_8 + 0x20))();
  _DAT_00574738 = _DAT_00574738 / 3;
  *in_FS_OFFSET = uStack_14;
  puStack_c = &LAB_00519190;
  puStack_10 = (undefined1 *)0x519188;
  FUN_00403094(local_8);
  return;
}

