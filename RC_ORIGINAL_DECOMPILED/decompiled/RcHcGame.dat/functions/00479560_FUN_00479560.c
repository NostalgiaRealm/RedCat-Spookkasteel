/*
 * FUN_00479560 at 00479560
 * undefined FUN_00479560(void)
 * Address ranges: 00479560-004797dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64e294 slot 2 for .?AVCRcFairy@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64e294 slot 2 for
   .?AVCRcFairy@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_00479560(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 unaff_EBP;
  int *piVar6;
  undefined4 unaff_retaddr;
  undefined4 uStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  undefined4 uStack_4;
  
  uStack_24 = CONCAT13(*(undefined1 *)(param_1 + 0x3f8),(undefined3)uStack_24);
  (**(code **)(*(int *)(param_1 + 0x38c) + 4))(param_2,param_3);
  cVar1 = *(char *)(param_1 + 0x3f8);
  iVar2 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    iVar2 = FUN_004bc480();
  }
  iVar4 = *(int *)(iVar2 + 0x4e8);
  if (iVar4 == -0x80000000) {
    puVar3 = *(undefined1 **)(iVar2 + 0x49c);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0064a3b4;
    }
    iVar4 = FUN_0060af10(puVar3);
    *(int *)(iVar2 + 0x4e8) = iVar4;
  }
  if (iVar4 == 0) {
    piVar5 = (int *)(param_1 + 0x548);
    iVar2 = 0x32;
    do {
      if ((char)piVar5[0x1b] != '\0') {
        (**(code **)(*piVar5 + 4))(param_2,param_3);
      }
      piVar5 = piVar5 + 0x51;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    FUN_0047c2b0(param_2,param_3);
  }
  if (cVar1 == '\0') {
    if ((char)((uint)unaff_EBP >> 0x18) != '\0') {
      FUN_0047c580(0xffffffff);
      FUN_0047d1f0(2);
      FUN_0047d2f0(1);
      *(undefined1 *)(param_1 + 0x4be8) = 0;
    }
  }
  else {
    FUN_0047b860(param_2,param_3);
    *(undefined4 *)(param_1 + 0x4b20) = *(undefined4 *)(param_1 + 0x390);
    *(undefined4 *)(param_1 + 0x4b24) = *(undefined4 *)(param_1 + 0x394);
    *(undefined4 *)(param_1 + 0x4b28) = *(undefined4 *)(param_1 + 0x398);
  }
  iVar2 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    iVar2 = FUN_004bc480();
  }
  iVar4 = *(int *)(iVar2 + 0x4e8);
  if (iVar4 == -0x80000000) {
    puVar3 = *(undefined1 **)(iVar2 + 0x49c);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0064a3b4;
    }
    iVar4 = FUN_0060af10(puVar3);
    *(int *)(iVar2 + 0x4e8) = iVar4;
  }
  if (iVar4 == 0) {
    piVar5 = (int *)(param_1 + 0x378);
    piVar6 = (int *)(param_1 + 0x4490);
    iVar2 = 5;
    do {
      if ((char)piVar6[0x1b] == '\0') {
        *(undefined1 *)(param_1 + 0x4b54) = 0;
      }
      else {
        iStack_18 = piVar6[1];
        iStack_14 = piVar6[2];
        iStack_10 = piVar6[3];
        piVar6[0x46] = *(int *)(param_1 + 0x4b20);
        piVar6[0x47] = *(int *)(param_1 + 0x4b24);
        piVar6[0x48] = *(int *)(param_1 + 0x4b28);
        (**(code **)(*piVar6 + 4))(uStack_4,unaff_retaddr);
        iStack_20 = piVar6[2];
        uStack_24 = piVar6[1];
        iStack_1c = piVar6[3];
        if (((int *)*piVar5 != (int *)0x0) && (*(char *)(param_1 + 0x4b54) != '\0')) {
          (**(code **)(*(int *)*piVar5 + 4))(uStack_4,unaff_retaddr,&iStack_18,&uStack_24);
        }
      }
      piVar5 = piVar5 + 1;
      piVar6 = piVar6 + 0x51;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if (*(int **)(param_1 + 0x374) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x374) + 0x4c))(param_1 + 0x4b20);
      FUN_004e2d60(*(float *)(param_1 + 0x4b2c) * 110.0);
      iStack_1c = 0x437f0000;
      iStack_18 = 0x437f0000;
      iStack_14 = 0x41c80000;
      iStack_10 = 0x437f0000;
      FUN_004e3090(&iStack_1c);
    }
  }
  return;
}

