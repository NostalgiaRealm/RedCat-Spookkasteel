/*
 * FUN_004059d0 at 004059d0
 * undefined FUN_004059d0(void)
 * Address ranges: 004059d0-00405a7a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64a64c slot 1 for .?AVCRcMoveDefault@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64a64c slot 1 for
   .?AVCRcMoveDefault@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_004059d0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  
  bVar3 = true;
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 != -1) {
    iVar2 = *(int *)(param_1 + 0x30);
    if (iVar2 == -1) {
      *(undefined4 *)(param_1 + 0x34) = 0x3f800000;
      *(int *)(param_1 + 0x30) = iVar1 + param_3;
    }
    else if (iVar2 < param_3) {
      *(undefined4 *)(param_1 + 0x34) = 0;
      bVar3 = false;
    }
    else if (iVar1 < 1) {
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    else {
      *(float *)(param_1 + 0x34) = (float)(iVar2 - param_3) / (float)iVar1;
    }
  }
  *(bool *)(param_1 + 0x38) = bVar3;
  if (!bVar3) {
    (**(code **)(**(int **)(param_1 + 0x28) + 0xbc))(0);
    FUN_0060a4a0();
    uVar4 = __ftol();
    FUN_004041b0(uVar4);
  }
  return;
}

