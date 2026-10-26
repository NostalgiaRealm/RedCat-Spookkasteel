/*
 * FUN_00448214 at 00448214
 * undefined __register FUN_00448214(undefined4 param_1)
 * Address ranges: 00448214-0044827f;00448299-004482b6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00448214(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  DWORD dwThreadId;
  undefined4 *in_FS_OFFSET;
  WNDENUMPROC lpfn;
  LPARAM lParam;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  
  uVar2 = DAT_0056f9e8;
  uVar1 = DAT_0056f9dc;
  puStack_20 = &stack0xfffffffc;
  puStack_2c = &stack0xfffffffc;
  DAT_0056f9e8 = 0;
  puStack_24 = &LAB_004482b7;
  local_28 = *in_FS_OFFSET;
  DAT_0056f9dc = param_1;
  *in_FS_OFFSET = &local_28;
  puStack_30 = &LAB_00448280;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  lParam = 0;
  lpfn = (WNDENUMPROC)&LAB_004481c4;
  dwThreadId = GetCurrentThreadId();
  EnumThreadWindows(dwThreadId,lpfn,lParam);
  *in_FS_OFFSET = uStack_34;
  *in_FS_OFFSET = local_28;
  DAT_0056f9e8 = uVar2;
  DAT_0056f9dc = uVar1;
  return;
}

