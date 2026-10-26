/*
 * FUN_00402410 at 00402410
 * undefined FUN_00402410(void)
 * Address ranges: 00402410-004024ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64a348 slot 1 for .?AVCRcDmRise@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64a348 slot 1 for
   .?AVCRcDmRise@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_00402410(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  
  cVar3 = '\x01';
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 != -1) {
    iVar2 = *(int *)(param_1 + 0x34);
    if (iVar2 == -1) {
      *(undefined4 *)(param_1 + 0x38) = 0x3f800000;
      *(int *)(param_1 + 0x34) = iVar1 + param_3;
    }
    else if (iVar2 < param_3) {
      *(undefined4 *)(param_1 + 0x38) = 0;
      cVar3 = '\0';
    }
    else if (iVar1 < 1) {
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    else {
      *(float *)(param_1 + 0x38) = (float)(iVar2 - param_3) / (float)iVar1;
    }
  }
  *(char *)(param_1 + 0x3c) = cVar3;
  if (cVar3 == '\0') {
    FUN_0041c810(0x3f800000,0);
    FUN_00402d00();
    return;
  }
  FUN_0041c810(1.0 - *(float *)(param_1 + 0x38),0);
  return;
}

