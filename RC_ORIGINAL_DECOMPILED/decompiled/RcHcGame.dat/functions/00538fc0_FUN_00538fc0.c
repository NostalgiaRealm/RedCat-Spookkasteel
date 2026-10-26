/*
 * FUN_00538fc0 at 00538fc0
 * undefined FUN_00538fc0(void)
 * Address ranges: 00538fc0-00539121
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_00538fc0(int param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined3 uVar4;
  undefined3 extraout_var;
  undefined4 uVar5;
  
  bVar1 = false;
  iVar2 = FUN_0053b650(param_2);
  if (iVar2 == 0xd) {
    iVar2 = 1;
    bVar1 = true;
  }
  else {
    iVar2 = FUN_0053b650(param_2);
    if (iVar2 != 0x25) {
      iVar2 = FUN_0053b650(param_2);
      if (iVar2 != 0x6d) {
        iVar2 = FUN_0053b650(param_2);
        if (iVar2 != 100) {
          iVar2 = FUN_0053b690(param_2);
          if (iVar2 != 0x2d) {
            iVar2 = FUN_0053b650(param_2);
            if (iVar2 != 0x27) {
              iVar2 = FUN_0053b650(param_2);
              if (iVar2 != 0x6b) {
                iVar2 = FUN_0053b650(param_2);
                if (iVar2 != 0x66) {
                  uVar3 = FUN_0053b690(param_2);
                  if (uVar3 != 0x2d) {
                    return uVar3 & 0xffffff00;
                  }
                }
              }
            }
            iVar2 = 1;
            goto LAB_00539060;
          }
        }
      }
    }
    iVar2 = -1;
  }
LAB_00539060:
  FUN_00537ed0();
  iVar2 = *(int *)(param_1 + 0x4c) + iVar2;
  *(int *)(param_1 + 0x4c) = iVar2;
  if (iVar2 < 0) {
    if (bVar1) {
      *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x48);
    }
    else {
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
  }
  if ((int)*(uint *)(param_1 + 0x48) < *(int *)(param_1 + 0x4c)) {
    *(uint *)(param_1 + 0x4c) = ~-(uint)bVar1 & *(uint *)(param_1 + 0x48);
  }
  if (*(char *)(param_1 + 0x50) != '\0') {
    *(undefined1 *)(param_3 + 0x28) = 1;
    if (DAT_006b915c == 0) {
      FUN_004bc480();
    }
    uVar5 = 5;
    FUN_0040cf10(5);
    FUN_0051c250(uVar5);
    FUN_0051abb0();
  }
  (**(code **)(param_1 + 0x44))(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x48));
  uVar5 = FUN_00538e80();
  uVar4 = (undefined3)((uint)uVar5 >> 8);
  if (*(char *)(param_1 + 0x50) != '\0') {
    *(undefined1 *)(param_3 + 0x28) = 0;
    if (DAT_006b915c == 0) {
      FUN_004bc480();
    }
    uVar5 = 5;
    FUN_0040cf10(5);
    FUN_0051c250(uVar5);
    FUN_0051abb0();
    uVar4 = extraout_var;
  }
  return CONCAT31(uVar4,1);
}

