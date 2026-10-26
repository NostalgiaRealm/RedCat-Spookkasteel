/*
 * FUN_00453640 at 00453640
 * undefined FUN_00453640(void)
 * Address ranges: 00453640-0045369b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64d330 slot 5 for .?AVCRcHUD@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64d330 slot 5 for
   .?AVCRcHUD@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_00453640(int param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  
  if (*(char *)(param_1 + 0x6a) != '\0') {
    param_3 = *(int *)(param_1 + 0x6c) + param_3;
    *(int *)(param_1 + 0x6c) = param_3;
    if (*(int *)(param_1 + 0x70) <= param_3) {
      *(undefined4 *)(param_1 + 0x6c) = 0;
      *(undefined1 *)(param_1 + 0x6a) = 0;
      *(undefined1 *)(param_1 + 0x69) = *(undefined1 *)(param_1 + 0x68);
      return;
    }
    fVar1 = ((float)param_3 / (float)*(int *)(param_1 + 0x70)) * 255.0;
    if (*(char *)(param_1 + 0x68) == '\0') {
      fVar1 = 255.0 - fVar1;
    }
    *(float *)(param_1 + 100) = fVar1;
  }
  return;
}

