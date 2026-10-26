/*
 * FUN_005c4630 at 005c4630
 * undefined FUN_005c4630(void)
 * Address ranges: 005c4630-005c47d8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005c4630(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_c;
  undefined1 local_8;
  undefined4 local_7;
  
  iVar2 = FUN_005cd390(3);
  if (iVar2 == 0) {
    return 0;
  }
  *(uint *)(param_1 + 0x10) = local_7 & 0xff;
  uVar1 = local_7 >> 8;
  *(uint *)(param_1 + 0x18) = (uVar1 & 0xff) >> 4;
  *(uint *)(param_1 + 0x7c) = uVar1 & 0xf;
  if ((local_8 & 8) != 0) {
    *(undefined4 *)(param_1 + 0x24) = 1;
  }
  if ((local_8 & 4) != 0) {
    *(undefined4 *)(param_1 + 0x68) = 1;
  }
  if ((local_8 & 1) == 0) {
    if ((local_8 & 0x20) == 0) {
      iVar2 = FUN_005cd390(2);
      if (iVar2 == 0) {
        return 0;
      }
      *(uint *)(param_1 + 4) = local_c & 0xffff;
      iVar2 = FUN_005cd390(2);
      if (iVar2 == 0) {
        return 0;
      }
      *(uint *)(param_1 + 8) = local_c & 0xffff;
    }
    else {
      iVar2 = FUN_005cd390(1);
      if (iVar2 == 0) {
        return 0;
      }
      *(uint *)(param_1 + 4) = uVar1 & 0xff;
      iVar2 = FUN_005cd390(1);
      if (iVar2 == 0) {
        return 0;
      }
      *(uint *)(param_1 + 8) = uVar1 & 0xff;
    }
  }
  else {
    iVar2 = FUN_005cd390(1);
    if (iVar2 == 0) {
      return 0;
    }
    *(int *)(param_1 + 4) = 1 << (sbyte)((uVar1 & 0xff) >> 4);
    *(int *)(param_1 + 8) = 1 << ((byte)(local_7 >> 8) & 0xf);
  }
  if ((local_8 & 2) != 0) {
    iVar2 = FUN_005c6a70();
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x1c) = 1;
      uVar3 = FUN_005c6a70();
      iVar2 = FUN_005cd390(uVar3);
      if (iVar2 == 0) {
        return 0;
      }
      uVar3 = FUN_005c6970();
      *(undefined4 *)(param_1 + 0x20) = uVar3;
    }
  }
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 4);
  return 1;
}

