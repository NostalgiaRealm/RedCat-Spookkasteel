/*
 * FUN_004a48b8 at 004a48b8
 * undefined __register FUN_004a48b8(uint param_1, undefined4 * param_2, byte param_3)
 * Address ranges: 004a48b8-004a4952
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a48b8(uint param_1,undefined4 *param_2,byte param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  byte local_d;
  undefined4 *local_c;
  uint local_8;
  
  puStack_14 = (undefined1 *)0x4a48cf;
  local_d = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_2);
  puStack_18 = &LAB_004a4953;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  if (local_8 == 0) {
    puStack_14 = &stack0xfffffffc;
    FUN_00403d94(" Self = nil: TDebug.InProc");
  }
  if (*(char *)(local_8 + 0xc) != '\0') {
    if ((local_d & 1) != 0) {
      *(undefined4 *)(local_8 + 0x10) = 0;
    }
    FUN_004a4324(local_8,0x49,(int)local_c);
    if ((local_d & 2) == 0) {
      FUN_00403e04((int *)(local_8 + 8),local_c);
      piVar1 = (int *)(local_8 + 0x10);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + 1;
      if (SCARRY4(iVar2,1)) {
        thunk_FUN_00402874(local_8);
      }
    }
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004a495a;
  puStack_18 = (undefined1 *)0x4a4952;
  FUN_00403db0((int *)&local_c);
  return;
}

