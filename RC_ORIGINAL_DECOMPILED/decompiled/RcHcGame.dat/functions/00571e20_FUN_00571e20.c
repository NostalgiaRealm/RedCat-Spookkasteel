/*
 * FUN_00571e20 at 00571e20
 * undefined FUN_00571e20(void)
 * Address ranges: 00571e20-005720f6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f994 slot 2 for .?AVCAdamDecal@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f994 slot 2 for
   .?AVCAdamDecal@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_00571e20(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  undefined1 uVar4;
  char cVar5;
  
  FUN_00573200();
  iVar1 = *(int *)(param_1 + 0x164);
  if (iVar1 != -1) {
    uVar4 = 1;
    if (iVar1 != -1) {
      iVar2 = *(int *)(param_1 + 0x168);
      if (iVar2 == -1) {
        *(undefined4 *)(param_1 + 0x16c) = 0x3f800000;
        *(int *)(param_1 + 0x168) = iVar1 + param_2;
      }
      else if (iVar2 < param_2) {
        *(undefined4 *)(param_1 + 0x16c) = 0;
        uVar4 = 0;
      }
      else if (iVar1 < 1) {
        *(undefined4 *)(param_1 + 0x16c) = 0;
      }
      else {
        *(float *)(param_1 + 0x16c) = (float)(iVar2 - param_2) / (float)iVar1;
      }
    }
    *(undefined1 *)(param_1 + 0x170) = uVar4;
    *(float *)(param_1 + 0x174) =
         *(float *)(param_1 + 0x144) * *(float *)(param_1 + 0x16c) +
         (1.0 - *(float *)(param_1 + 0x16c)) * *(float *)(param_1 + 0x154);
    *(float *)(param_1 + 0x178) =
         *(float *)(param_1 + 0x148) * *(float *)(param_1 + 0x16c) +
         (1.0 - *(float *)(param_1 + 0x16c)) * *(float *)(param_1 + 0x158);
    *(float *)(param_1 + 0x17c) =
         *(float *)(param_1 + 0x14c) * *(float *)(param_1 + 0x16c) +
         (1.0 - *(float *)(param_1 + 0x16c)) * *(float *)(param_1 + 0x15c);
    *(float *)(param_1 + 0x180) =
         *(float *)(param_1 + 0x150) * *(float *)(param_1 + 0x16c) +
         (1.0 - *(float *)(param_1 + 0x16c)) * *(float *)(param_1 + 0x160);
  }
  iVar1 = *(int *)(param_1 + 0x11c);
  if (iVar1 != -1) {
    uVar4 = 1;
    if (iVar1 != -1) {
      iVar2 = *(int *)(param_1 + 0x120);
      if (iVar2 == -1) {
        *(undefined4 *)(param_1 + 0x124) = 0x3f800000;
        *(int *)(param_1 + 0x120) = iVar1 + param_2;
      }
      else if (iVar2 < param_2) {
        *(undefined4 *)(param_1 + 0x124) = 0;
        uVar4 = 0;
      }
      else if (iVar1 < 1) {
        *(undefined4 *)(param_1 + 0x124) = 0;
      }
      else {
        *(float *)(param_1 + 0x124) = (float)(iVar2 - param_2) / (float)iVar1;
      }
    }
    *(undefined1 *)(param_1 + 0x128) = uVar4;
    fVar3 = *(float *)(param_1 + 0x114) * *(float *)(param_1 + 0x124) +
            (1.0 - *(float *)(param_1 + 0x124)) * *(float *)(param_1 + 0x118);
    if (fVar3 != *(float *)(param_1 + 0x110)) {
      *(float *)(param_1 + 0x110) = fVar3;
      *(undefined1 *)(param_1 + 0x1bc) = 1;
    }
  }
  iVar1 = *(int *)(param_1 + 0x134);
  if (iVar1 != -1) {
    uVar4 = 1;
    if (iVar1 != -1) {
      iVar2 = *(int *)(param_1 + 0x138);
      if (iVar2 == -1) {
        *(undefined4 *)(param_1 + 0x13c) = 0x3f800000;
        *(int *)(param_1 + 0x138) = iVar1 + param_2;
      }
      else if (iVar2 < param_2) {
        *(undefined4 *)(param_1 + 0x13c) = 0;
        uVar4 = 0;
      }
      else if (iVar1 < 1) {
        *(undefined4 *)(param_1 + 0x13c) = 0;
      }
      else {
        *(float *)(param_1 + 0x13c) = (float)(iVar2 - param_2) / (float)iVar1;
      }
    }
    *(undefined1 *)(param_1 + 0x140) = uVar4;
    *(float *)(param_1 + 0x180) =
         *(float *)(param_1 + 300) * *(float *)(param_1 + 0x13c) +
         (1.0 - *(float *)(param_1 + 0x13c)) * *(float *)(param_1 + 0x130);
    FUN_00571990();
  }
  iVar1 = *(int *)(param_1 + 0xf8);
  cVar5 = '\x01';
  if (iVar1 != -1) {
    iVar2 = *(int *)(param_1 + 0xfc);
    if (iVar2 == -1) {
      *(undefined4 *)(param_1 + 0x100) = 0x3f800000;
      *(int *)(param_1 + 0xfc) = iVar1 + param_2;
    }
    else if (iVar2 < param_2) {
      *(undefined4 *)(param_1 + 0x100) = 0;
      cVar5 = '\0';
    }
    else if (iVar1 < 1) {
      *(undefined4 *)(param_1 + 0x100) = 0;
    }
    else {
      *(float *)(param_1 + 0x100) = (float)(iVar2 - param_2) / (float)iVar1;
    }
  }
  *(char *)(param_1 + 0x104) = cVar5;
  if (cVar5 == '\0') {
    FUN_00502220();
  }
  return;
}

