/*
 * FUN_00481390 at 00481390
 * undefined __register FUN_00481390(int param_1)
 * Address ranges: 00481390-004814ce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00481390(int param_1)

{
  short sVar1;
  DWORD DVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_294;
  undefined4 uStack_278;
  undefined1 *puStack_274;
  undefined1 *puStack_270;
  undefined4 uStack_26c;
  undefined1 *puStack_268;
  undefined1 *puStack_264;
  undefined *local_25c;
  undefined4 local_255 [131];
  char local_49 [64];
  char local_9;
  undefined4 local_8;
  
  puStack_264 = &stack0xfffffffc;
  local_25c = (undefined *)0x0;
  puStack_268 = &LAB_004814ef;
  uStack_26c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_26c;
  puStack_270 = (undefined1 *)0x4813b7;
  DVar2 = GetCurrentThreadId();
  if ((DVar2 == *(DWORD *)PTR_DAT_00572618) && (*(short *)(*(int *)PTR_DAT_005725f0 + 0x38) == 0)) {
    local_9 = '\x01';
  }
  else {
    local_9 = '\0';
  }
  if (local_9 != '\0') {
    puStack_270 = (undefined1 *)0x4813ee;
    FUN_0044f5e0(*(int *)PTR_DAT_005725f0,-0xb);
  }
  puStack_274 = &LAB_004814cf;
  uStack_278 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_278;
  puStack_270 = &stack0xfffffffc;
  FUN_00402cfc(local_255,0x24c,0);
  FUN_00406a48((undefined4 *)PTR_PTR_005724f4,(int *)&local_25c);
  FUN_0040a1f0(local_49,local_25c,0x1f);
  uVar3 = FUN_00478b04();
  if (((short)uVar3 != 0) && ((short)uVar3 != 0x2a07)) {
    FUN_0047fe48(uVar3);
  }
  uVar3 = thunk_FUN_00479b5f(param_1 + 0x24);
  FUN_0047fe48(uVar3);
  sVar1 = thunk_FUN_00478ff4(&local_8);
  if (sVar1 == 0) {
    FUN_0040e284();
    uStack_294 = local_8;
    thunk_FUN_00478ffa(local_8);
  }
  if (*PTR_DAT_0057201c != '\0') {
    thunk_FUN_00479a3b(PTR_DAT_0057201c);
  }
  *in_FS_OFFSET = uStack_294;
  if ((local_9 != '\0') && (*(short *)(*(int *)PTR_DAT_005725f0 + 0x38) == -0xb)) {
    FUN_0044f5e0(*(int *)PTR_DAT_005725f0,0);
  }
  return;
}

