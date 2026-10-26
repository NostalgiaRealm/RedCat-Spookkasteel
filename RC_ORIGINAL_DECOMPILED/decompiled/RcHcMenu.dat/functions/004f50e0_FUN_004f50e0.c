/*
 * FUN_004f50e0 at 004f50e0
 * undefined __register FUN_004f50e0(int param_1, char param_2)
 * Address ranges: 004f50e0-004f515c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f50e0(int param_1,char param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 *local_c;
  undefined1 local_5;
  
  puStack_18 = &stack0xfffffffc;
  local_c = (undefined4 *)0x0;
  puStack_1c = &LAB_004f515d;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  local_5 = param_2 != *(char *)(param_1 + 0x200);
  if ((bool)local_5) {
    if ((param_2 == '\0') &&
       ((*(char *)(param_1 + 0x20e) == '\x02' || (*(char *)(param_1 + 0x20e) == '\x03')))) {
      FUN_00406a48((undefined4 *)PTR_PTR_005724c0,(int *)&local_c);
      FUN_004f46e0(local_c);
    }
    *(char *)(param_1 + 0x200) = param_2;
    if (param_2 == '\0') {
      *(undefined1 *)(param_1 + 0x20c) = 0;
    }
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004f5164;
  puStack_1c = (undefined1 *)0x4f515c;
  FUN_00403db0((int *)&local_c);
  return;
}

