/*
 * FUN_00411ee0 at 00411ee0
 * undefined __register FUN_00411ee0(undefined4 * param_1, undefined4 param_2)
 * Address ranges: 00411ee0-00411f6e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00411ee0(undefined4 *param_1,undefined4 param_2)

{
  undefined **ppuVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar2;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  char local_e;
  undefined1 local_d;
  undefined4 local_c;
  undefined4 *local_8;
  
  puVar2 = &stack0xfffffffc;
  puStack_14 = (undefined1 *)0x411ef6;
  local_c = param_2;
  local_8 = param_1;
  FUN_0040e444(DAT_00573618);
  puStack_18 = &LAB_00411f8e;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  local_e = (*(ushort *)(local_8 + 8) & 0x201) == 0;
  puStack_14 = &stack0xfffffffc;
  if ((bool)local_e) {
    puStack_20 = (undefined1 *)0x411f2b;
    puStack_14 = &stack0xfffffffc;
    FUN_00411d34();
  }
  puStack_24 = &LAB_00411f6f;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  ppuVar1 = (undefined **)FUN_00402fdc(local_8);
  local_d = FUN_00411e38(ppuVar1,extraout_EDX,extraout_ECX,(int)puVar2);
  if (local_e != '\0') {
    FUN_00411d94();
  }
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00411f76;
  if (local_e != '\0') {
    puStack_24 = (undefined1 *)0x411f6e;
    FUN_00411dc4();
  }
  return;
}

