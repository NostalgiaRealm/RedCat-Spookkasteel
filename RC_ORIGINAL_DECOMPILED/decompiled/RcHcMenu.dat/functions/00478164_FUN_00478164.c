/*
 * FUN_00478164 at 00478164
 * undefined __register FUN_00478164(undefined4 param_1, int param_2, int param_3, int param_4)
 * Address ranges: 00478164-0047820d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00478164(undefined4 param_1,int param_2,int param_3,int param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_1c = &LAB_0047820e;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if ((param_3 != 0) || (param_4 != 0)) {
    if (param_4 == 0) {
      *(undefined1 *)(param_2 + 0x2c) = *(undefined1 *)(param_3 + 0x2c);
    }
    else {
      if (((*(char *)(param_3 + 0x2c) == '\0') && (*(char *)(param_4 + 0x2c) == '\x01')) ||
         ((*(char *)(param_3 + 0x2c) == '\x01' && (*(char *)(param_4 + 0x2c) == '\0')))) {
        FUN_00406a48((undefined4 *)PTR_PTR_00572094,(int *)&local_8);
        FUN_00466d84(local_8,0);
      }
      if ((*(char *)(param_3 + 0x2c) == '\x02') && (*(char *)(param_4 + 0x2c) == '\x02')) {
        *(undefined1 *)(param_2 + 0x2c) = 2;
      }
      else if ((*(char *)(param_3 + 0x2c) == '\x01') || (*(char *)(param_4 + 0x2c) == '\x01')) {
        *(undefined1 *)(param_2 + 0x2c) = 1;
      }
      else if ((*(char *)(param_3 + 0x2c) == '\0') || (*(char *)(param_4 + 0x2c) == '\0')) {
        *(undefined1 *)(param_2 + 0x2c) = 0;
      }
    }
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00478215;
  puStack_1c = (undefined1 *)0x47820d;
  FUN_00403db0((int *)&local_8);
  return;
}

