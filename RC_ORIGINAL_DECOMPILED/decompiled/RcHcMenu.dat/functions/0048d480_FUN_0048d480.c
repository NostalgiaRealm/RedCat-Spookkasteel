/*
 * FUN_0048d480 at 0048d480
 * undefined __register FUN_0048d480(byte * param_1, int * param_2)
 * Address ranges: 0048d480-0048d523
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0048d480(byte *param_1,int *param_2)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 *local_14;
  char local_e;
  byte local_d;
  int *local_c;
  byte *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_14 = (undefined4 *)0x0;
  puStack_1c = &LAB_0048d524;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  local_c = param_2;
  local_8 = param_1;
  FUN_00403db0(param_2);
  uVar1 = *local_8 - 1;
  if (SBORROW4((uint)*local_8,1)) {
    uVar1 = thunk_FUN_00402874(uVar1);
  }
  if (9 < uVar1) {
    uVar1 = thunk_FUN_00402874(uVar1);
  }
  local_e = (char)uVar1 + '\x01';
  local_d = 0;
  do {
    if (local_d != 0) {
      FUN_00404038(local_c,(undefined4 *)&DAT_0048d538);
    }
    FUN_00409bd8((int)*(short *)(local_8 + (uint)local_d * 2 + 2),(int *)&local_14);
    FUN_00404038(local_c,local_14);
    local_d = local_d + 1;
    local_e = local_e + -1;
  } while (local_e != '\0');
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0048d52b;
  puStack_1c = (undefined1 *)0x48d523;
  FUN_00403db0((int *)&local_14);
  return;
}

