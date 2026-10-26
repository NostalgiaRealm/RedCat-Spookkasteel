/*
 * FUN_004ab750 at 004ab750
 * undefined FUN_004ab750(void)
 * Address ranges: 004ab750-004ab7d0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64e994 slot 6 for .?AVCAdamCommMessageCell@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64e994 slot 6 for
   .?AVCAdamCommMessageCell@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_004ab750(int param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  char cVar1;
  undefined1 local_10 [4];
  int local_c;
  
  if (param_4 != '\0') {
    FUN_00511cb0(local_10,*(undefined4 *)(param_1 + 0x74),*(int *)(param_1 + 0x78) + 0x28);
    if (local_c != 0) {
      cVar1 = *(char *)(local_c + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(local_c + -1));
      }
      else {
        *(char *)(local_c + -1) = cVar1 + -1;
      }
    }
  }
  FUN_0050e830(*(float *)(param_1 + 0x70) * 255.0);
  if (((*(char *)(param_1 + 0x60) == '\0') && (*(int *)(param_1 + 0x50) == 4)) &&
     (*(int *)(param_1 + 0x7c) == -1)) {
    *(undefined4 *)(param_1 + 0x7c) = param_2;
  }
  return;
}

