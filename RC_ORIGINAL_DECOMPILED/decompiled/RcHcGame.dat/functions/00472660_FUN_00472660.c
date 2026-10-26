/*
 * FUN_00472660 at 00472660
 * undefined FUN_00472660(void)
 * Address ranges: 00472660-0047283c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64e040 slot 2 for .?AVCRcTeleporterFX@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64e040 slot 2 for
   .?AVCRcTeleporterFX@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_00472660(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  char cVar2;
  int *piVar3;
  float10 fVar4;
  
  uVar1 = param_3;
  cVar2 = FUN_00421560();
  if (cVar2 != '\0') {
    FUN_00474a20(param_2,param_3);
    FUN_004749b0(param_2,param_3);
    if (*(char *)(param_1 + 0x149a8) != '\0') {
      FUN_00475910(param_2,param_3);
    }
    if (*(char *)(param_1 + 0x149c4) != '\0') {
      FUN_00475bd0(param_2,param_3);
    }
    piVar3 = (int *)(param_1 + 0x1419c);
    param_3 = 5;
    do {
      if ((char)piVar3[0x1b] != '\0') {
        (**(code **)(*piVar3 + 4))(param_2,uVar1);
      }
      piVar3 = piVar3 + 0x51;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    fVar4 = (float10)FUN_00409e30(uVar1);
    fVar4 = fVar4 * (float10)25.0;
    if (*(char *)(param_1 + 0x14814) == '\0') {
      *(float *)(param_1 + 0x147f4) = (float)((float10)*(float *)(param_1 + 0x147f4) - fVar4);
      *(float *)(param_1 + 0x14800) = (float)(fVar4 + (float10)*(float *)(param_1 + 0x14800));
    }
    else {
      *(float *)(param_1 + 0x147f4) = (float)(fVar4 + (float10)*(float *)(param_1 + 0x147f4));
      *(float *)(param_1 + 0x14800) = (float)((float10)*(float *)(param_1 + 0x14800) - fVar4);
    }
    if (*(float *)(param_1 + 0x147f4) <= *(float *)(param_1 + 0x14818)) {
      if (*(float *)(param_1 + 0x147f4) < *(float *)(param_1 + 0x14980)) {
        *(undefined1 *)(param_1 + 0x14814) = 1;
        *(undefined4 *)(param_1 + 0x147f4) = *(undefined4 *)(param_1 + 0x14980);
        *(undefined4 *)(param_1 + 0x14800) = *(undefined4 *)(param_1 + 0x14818);
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x14814) = 0;
      *(undefined4 *)(param_1 + 0x147f4) = *(undefined4 *)(param_1 + 0x14818);
      *(undefined4 *)(param_1 + 0x14800) = *(undefined4 *)(param_1 + 0x14980);
    }
    if (*(float *)(param_1 + 0x14980) - 10.0 < *(float *)(param_1 + 0x1480c)) {
      fVar4 = (float10)FUN_00409e30(uVar1);
      *(float *)(param_1 + 0x1480c) =
           (float)((float10)*(float *)(param_1 + 0x1480c) - fVar4 * (float10)200.0);
    }
    if (*(int **)(param_1 + 0x374) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x374) + 0x4c))(param_1 + 0x14858);
      FUN_004e2d60(*(float *)(param_1 + 0x14864) * 110.0);
      FUN_004e3090(&stack0xffffffec);
    }
  }
  return;
}

