/*
 * FUN_005e4460 at 005e4460
 * undefined FUN_005e4460(void)
 * Address ranges: 005e4460-005e451d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005e4460(void)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  piVar2 = DAT_0070fae8;
  if (DAT_0070fae8 == (int *)0x0) {
    return;
  }
  if ((DAT_0070fae8[0x15] != 0) && (iVar3 = FUN_0060d30d(DAT_0070fae8[0x15]), iVar3 == 0)) {
    piVar2[5] = (int)(piVar2 + 3);
    piVar2[4] = (int)(piVar2 + 2);
    piVar2[8] = (int)(piVar2 + 6);
    piVar2[0xc] = (int)(piVar2 + 10);
    *(undefined1 *)(piVar2 + 0x13) = 0;
    piVar2[9] = (int)(piVar2 + 7);
    piVar2[0xd] = (int)(piVar2 + 0xb);
    FUN_005e56b0(0,0);
    FUN_005e5690(0,0,0);
    piVar2[0x15] = 0;
    piVar2[0x11] = DAT_00747b58;
    piVar2[0x10] = DAT_00747b58;
    piVar2[0xf] = 0;
    if (piVar2 != (int *)0xfffffffc) goto LAB_005e44fc;
  }
  uVar1 = *(uint *)((int)piVar2 + *(int *)(*piVar2 + 4) + 4);
  uVar4 = uVar1 | 2;
  if (*(int *)(*(int *)(*piVar2 + 4) + 0x28 + (int)piVar2) == 0) {
    uVar4 = CONCAT31((int3)(uVar1 >> 8),(char)uVar4) | 4;
  }
  FUN_005fe7e4(uVar4,0);
LAB_005e44fc:
  if (DAT_0070fae8 != (int *)0x0) {
    (*(code *)**(undefined4 **)(*(int *)(*DAT_0070fae8 + 4) + (int)DAT_0070fae8))(1);
  }
  DAT_0070fae8 = (int *)0x0;
  return;
}

