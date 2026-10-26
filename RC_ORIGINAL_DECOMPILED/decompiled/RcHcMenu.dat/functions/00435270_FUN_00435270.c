/*
 * FUN_00435270 at 00435270
 * undefined __register FUN_00435270(int * param_1, undefined4 param_2)
 * Address ranges: 00435270-004352f6;004352fe-00435302
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00435270(int *param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined1 local_18 [16];
  int *local_8;
  
  puStack_20 = (undefined1 *)0x435284;
  local_8 = param_1;
  bVar1 = FUN_00438c84((int)param_1);
  if ((bVar1) && ((*(byte *)(local_8 + 8) & 8) == 0)) {
    if ((short)local_8[0x48] == 0) {
      puStack_20 = (undefined1 *)0x4352b0;
      FUN_00435304((int)local_8);
      puStack_24 = &LAB_004352f7;
      uStack_28 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_28;
      puStack_20 = &stack0xfffffffc;
      (**(code **)(*local_8 + 0x40))(local_8,local_18);
      (**(code **)(*local_8 + 0x88))(local_8,param_2,local_18);
      *in_FS_OFFSET = uStack_28;
      puStack_20 = (undefined1 *)0x4352fe;
      *(ushort *)(local_8 + 0x11) = *(ushort *)(local_8 + 0x11) & 0xffef;
      puStack_24 = (undefined1 *)0x4352f6;
      FUN_0043530c((int)local_8);
      return;
    }
    *(ushort *)(local_8 + 0x11) = *(ushort *)(local_8 + 0x11) | 0x10;
  }
  return;
}

