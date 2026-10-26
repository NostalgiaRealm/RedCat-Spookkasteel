/*
 * FUN_0047f360 at 0047f360
 * undefined __register FUN_0047f360(int param_1)
 * Address ranges: 0047f360-0047f3ee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0047f360(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  _union_2683 local_18;
  int local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_18._12_4_ = 0;
  local_18._8_4_ = 0;
  local_18.decVal.Hi32 = 0;
  local_18._0_4_ = 0;
  puStack_24 = &LAB_0047f3ef;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  cVar1 = FUN_0046f9c0(param_1);
  if ((cVar1 == '\x01') || (cVar1 == '\x17')) {
    FUN_00470b20(param_1,(VARIANT *)&local_18.n2);
    FUN_00405c34((VARIANTARG *)&local_18.n2,&local_8);
    iVar2 = FUN_00404030(local_8);
    if (0xff < iVar2) goto LAB_0047f3d1;
  }
  cVar1 = FUN_0046f9c0(param_1);
  if ((6 < (byte)(cVar1 - 0xfU)) && (1 < (byte)(cVar1 - 0x1eU))) {
    FUN_0046fa9c(param_1);
  }
LAB_0047f3d1:
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0047f3f6;
  puStack_24 = (undefined1 *)0x47f3e6;
  FUN_00405bcc((VARIANTARG *)&local_18.n2);
  puStack_24 = (undefined1 *)0x47f3ee;
  FUN_00403db0(&local_8);
  return;
}

