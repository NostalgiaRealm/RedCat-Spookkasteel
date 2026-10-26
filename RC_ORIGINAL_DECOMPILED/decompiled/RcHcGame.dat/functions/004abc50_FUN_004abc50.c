/*
 * FUN_004abc50 at 004abc50
 * undefined FUN_004abc50(void)
 * Address ranges: 004abc50-004abd05
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64e9b4 slot 6 for .?AVCAdamCommPortraitCell@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64e9b4 slot 6 for
   .?AVCAdamCommPortraitCell@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_004abc50(int param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  float fVar2;
  undefined1 local_10 [16];
  
  if (param_4 != '\0') {
    FUN_00511a90(local_10,*(undefined4 *)(param_1 + 0x74),*(int *)(param_1 + 0x78) + 0x38);
    FUN_004040a0(1);
  }
  if (((*(char *)(param_1 + 0x84) == '\0') && (*(int *)(param_1 + 0x50) < 4)) ||
     ((*(char *)(param_1 + 0x85) == '\0' &&
      ((4 < *(int *)(param_1 + 0x50) && (*(int *)(param_1 + 0x50) < 8)))))) {
    fVar2 = 255.0;
  }
  else {
    fVar2 = *(float *)(param_1 + 0x70) * 255.0;
  }
  FUN_0050e830(fVar2);
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 != 1) {
    if (iVar1 == 4) {
      if (*(int *)(param_1 + 0x7c) == -1) {
        *(undefined4 *)(param_1 + 0x7c) = param_2;
      }
      FUN_004aba40(param_3);
      return;
    }
    if (iVar1 != 5) {
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x78) + 0x1c) = 0;
  return;
}

