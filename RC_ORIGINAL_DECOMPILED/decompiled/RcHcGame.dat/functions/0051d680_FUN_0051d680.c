/*
 * FUN_0051d680 at 0051d680
 * undefined FUN_0051d680(void)
 * Address ranges: 0051d680-0051d6f1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64e4c4 slot 1 for .?AVCRcGStateRESTART@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64e4c4 slot 1 for
   .?AVCRcGStateRESTART@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_0051d680(int *param_1,char param_2)

{
  if (DAT_006c8de0 == 0) {
    FUN_0055b280();
  }
  if (param_2 != '\0') {
    (**(code **)(*param_1 + 0x24))();
    (**(code **)(*param_1 + 0x2c))();
  }
  (**(code **)(*param_1 + 0x30))();
  (**(code **)(*param_1 + 0x38))();
  if ((int *)param_1[0x1d] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1d] + 0x20))();
  }
  FUN_005630f0();
  if ((int *)param_1[0x1d] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1d] + 0x1c))();
  }
  (**(code **)(*param_1 + 0x34))();
  (**(code **)(*param_1 + 0x28))();
  FUN_005637b0();
  return;
}

