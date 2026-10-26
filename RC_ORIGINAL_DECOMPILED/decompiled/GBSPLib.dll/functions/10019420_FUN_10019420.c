/*
 * FUN_10019420 at 10019420
 * undefined FUN_10019420(void)
 * Address ranges: 10019420-10019632
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10019420(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int local_2e;
  uint local_28;
  int local_24;
  uint local_20;
  undefined2 uStack_1a;
  undefined2 local_18;
  undefined2 uStack_16;
  int local_8;
  
  iVar1 = FUN_10014a00(0xe);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_10014a00(0x28);
  if (iVar1 == 0) {
    return 0;
  }
  if (local_28 < 0x29) {
    if (0x27 < local_28) goto LAB_10019466;
    uVar4 = 0xf08;
  }
  else {
    FUN_10014a40(0);
LAB_10019466:
    if (CONCAT22(uStack_16,local_18) == 0) {
      iVar1 = local_2e + -0x36;
      switch(uStack_1a) {
      case 8:
        if (local_8 == 0) {
          local_8 = 0x100;
        }
        iVar3 = FUN_10019ae0();
        *(int *)(param_1 + 0x24) = iVar3;
        if (iVar3 == 0) {
          return 0;
        }
        iVar3 = FUN_10014a00(local_8 * 4);
        if (iVar3 == 0) {
          return 0;
        }
        iVar3 = 1;
        *(undefined4 *)(param_1 + 0x10) = 1;
        iVar1 = iVar1 + local_8 * -4;
        break;
      default:
        goto switchD_100194c4_caseD_9;
      case 0x10:
        iVar3 = 2;
        *(undefined4 *)(param_1 + 0x10) = 3;
        break;
      case 0x18:
        iVar3 = 3;
        *(undefined4 *)(param_1 + 0x10) = 10;
        break;
      case 0x20:
        iVar3 = 4;
        *(undefined4 *)(param_1 + 0x10) = 0xd;
      }
      if (-1 < iVar1) {
        FUN_10014a40(0);
        *(int *)(param_1 + 4) = local_24;
        *(uint *)(param_1 + 8) = (local_20 ^ (int)local_20 >> 0x1f) - ((int)local_20 >> 0x1f);
        *(uint *)(param_1 + 0xc) = local_24 + 3U & 0xfffffffc;
        uVar2 = local_24 * iVar3 + 3U & 0xfffffffc;
        *(undefined4 *)(param_1 + 0x1c) = 0;
        iVar1 = FUN_100162f0(param_1,0);
        if (iVar1 == 0) {
          return 0;
        }
        if (0 < (int)local_20) {
          iVar1 = *(int *)(param_1 + 8);
          if (iVar1 == 0) {
            return 1;
          }
          do {
            iVar1 = iVar1 + -1;
            iVar3 = FUN_10014a00(uVar2);
            if (iVar3 == 0) {
              return 0;
            }
          } while (iVar1 != 0);
          return 1;
        }
        iVar1 = *(int *)(param_1 + 8);
        do {
          if (iVar1 == 0) {
            return 1;
          }
          iVar1 = iVar1 + -1;
          iVar3 = FUN_10014a00(uVar2);
        } while (iVar3 != 0);
        return 0;
      }
      uVar4 = 0xf37;
    }
    else {
      uVar4 = 0xf0e;
    }
  }
  FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Bitmap_bitmap_c_1003c5d4,uVar4,&DAT_10265ce0,0);
switchD_100194c4_caseD_9:
  return 0;
}

