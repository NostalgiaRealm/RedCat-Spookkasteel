/*
 * FUN_00539910 at 00539910
 * undefined FUN_00539910(void)
 * Address ranges: 00539910-00539a0e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_00539910(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  
  cVar3 = *(char *)(param_1 + 0x60);
  iVar2 = FUN_0053b650(param_2);
  if (iVar2 == 0xd) {
    iVar2 = 1;
    cVar3 = '\x01';
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
                  iVar2 = FUN_0053b690(param_2);
                  if (iVar2 != 0x2d) {
                    return 0;
                  }
                }
              }
            }
            iVar2 = 1;
            goto LAB_005399ad;
          }
        }
      }
    }
    iVar2 = -1;
  }
LAB_005399ad:
  FUN_00537ed0();
  iVar2 = *(int *)(param_1 + 0x5c) + iVar2;
  *(int *)(param_1 + 0x5c) = iVar2;
  if (iVar2 < 0) {
    if (cVar3 == '\0') {
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x48);
    }
  }
  uVar1 = *(uint *)(param_1 + 0x48);
  if ((int)uVar1 < *(int *)(param_1 + 0x5c)) {
    *(uint *)(param_1 + 0x5c) = ~-(uint)(cVar3 != '\0') & uVar1;
  }
  (**(code **)(param_1 + 0x44))(*(undefined4 *)(param_1 + 0x5c),uVar1);
  FUN_005397d0();
  return 1;
}

