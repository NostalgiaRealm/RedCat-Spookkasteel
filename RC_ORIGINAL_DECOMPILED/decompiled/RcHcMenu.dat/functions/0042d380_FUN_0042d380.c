/*
 * FUN_0042d380 at 0042d380
 * undefined __register FUN_0042d380(int param_1, uint param_2, undefined4 * param_3, uint param_4)
 * Address ranges: 0042d380-0042d412
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042d380(int param_1,uint param_2,undefined4 *param_3,uint param_4)

{
  HGLOBAL hMem;
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = (undefined1 *)0x42d39b;
  FUN_0042d304(param_1);
  puStack_20 = &LAB_0042d452;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  uStack_30 = 0x42d3b4;
  puStack_1c = &stack0xfffffffc;
  hMem = GlobalAlloc(0x2002,param_4);
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puVar1 = GlobalLock(hMem);
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  FUN_00402944(param_3,puVar1,param_4);
  FUN_0042d2bc(param_1);
  SetClipboardData(param_2 & 0xffff,hMem);
  *in_FS_OFFSET = uStack_3c;
  uStack_3c = 0x42d412;
  GlobalUnlock(hMem);
  return;
}

