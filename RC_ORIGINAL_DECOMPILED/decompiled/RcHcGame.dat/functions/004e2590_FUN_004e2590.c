/*
 * FUN_004e2590 at 004e2590
 * undefined FUN_004e2590(void)
 * Address ranges: 004e2590-004e2705
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f314 slot 2 for .?AVCAdamLight@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f314 slot 2 for
   .?AVCAdamLight@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_004e2590(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  float10 fVar5;
  undefined1 local_10 [16];
  
  FUN_004ad310(param_2,param_3,param_1);
  iVar1 = *(int *)(param_1 + 0x174);
  if (iVar1 != -1) {
    cVar4 = '\x01';
    if (iVar1 != -1) {
      iVar2 = *(int *)(param_1 + 0x178);
      if (iVar2 == -1) {
        *(undefined4 *)(param_1 + 0x17c) = 0x3f800000;
        *(int *)(param_1 + 0x178) = iVar1 + param_2;
      }
      else if (iVar2 < param_2) {
        *(undefined4 *)(param_1 + 0x17c) = 0;
        cVar4 = '\0';
      }
      else if (iVar1 < 1) {
        *(undefined4 *)(param_1 + 0x17c) = 0;
      }
      else {
        *(float *)(param_1 + 0x17c) = (float)(iVar2 - param_2) / (float)iVar1;
      }
    }
    *(char *)(param_1 + 0x180) = cVar4;
    if (cVar4 == '\0') {
      FUN_004e2d60(0);
      goto LAB_004e267e;
    }
  }
  if (*(int *)(param_1 + 0x184) != 0) {
    fVar5 = (float10)FUN_00569050(param_3,*(undefined4 *)(param_1 + 0x18c),
                                  *(undefined4 *)(param_1 + 400));
    FUN_004e2d60((float)fVar5);
  }
  if (*(int *)(param_1 + 0x188) != 0) {
    uVar3 = FUN_00569070(local_10,param_3,param_1 + 0x194,param_1 + 0x1a4);
    FUN_004e3090(uVar3);
  }
LAB_004e267e:
  if (*(char *)(param_1 + 0x1f0) != '\0') {
    FUN_004e4440();
  }
  iVar1 = *(int *)(param_1 + 0x164);
  cVar4 = '\x01';
  if (iVar1 != -1) {
    iVar2 = *(int *)(param_1 + 0x168);
    if (iVar2 == -1) {
      *(undefined4 *)(param_1 + 0x16c) = 0x3f800000;
      *(int *)(param_1 + 0x168) = iVar1 + param_2;
    }
    else if (iVar2 < param_2) {
      *(undefined4 *)(param_1 + 0x16c) = 0;
      cVar4 = '\0';
    }
    else if (iVar1 < 1) {
      *(undefined4 *)(param_1 + 0x16c) = 0;
    }
    else {
      *(float *)(param_1 + 0x16c) = (float)(iVar2 - param_2) / (float)iVar1;
    }
  }
  *(char *)(param_1 + 0x170) = cVar4;
  if (cVar4 == '\0') {
    FUN_00502220();
  }
  return;
}

