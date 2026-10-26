/*
 * FUN_004555bc at 004555bc
 * undefined __register FUN_004555bc(int param_1)
 * Address ranges: 004555bc-0045563a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004555bc(int param_1)

{
  UINT_PTR UVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_18 = &LAB_0045563b;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  KillTimer(*(HWND *)(param_1 + 0x28),1);
  if (((*(UINT *)(param_1 + 0x24) != 0) && (*(char *)(param_1 + 0x38) != '\0')) &&
     (*(short *)(param_1 + 0x32) != 0)) {
    UVar1 = SetTimer(*(HWND *)(param_1 + 0x28),1,*(UINT *)(param_1 + 0x24),(TIMERPROC)0x0);
    if (UVar1 == 0) {
      FUN_00406a48((undefined4 *)PTR_PTR_005725ec,(int *)&local_8);
      piVar2 = FUN_0040ceec((int *)&DAT_004106c0,'\x01',local_8);
      FUN_0040382c(piVar2);
    }
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00455642;
  puStack_18 = (undefined1 *)0x45563a;
  FUN_00403db0((int *)&local_8);
  return;
}

