/*
 * FUN_005d5df0 at 005d5df0
 * undefined FUN_005d5df0(void)
 * Address ranges: 005d5df0-005d6531
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005d5df0(byte *param_1,int *param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 uVar4;
  int iVar5;
  byte *pbVar6;
  bool bVar7;
  
  iVar2 = FUN_005cd390(0xc);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = *param_2;
  if (0xffff < iVar2) {
    return 0;
  }
  if (iVar2 == 0xffff) {
    return 1;
  }
  switch(iVar2) {
  case 0:
    if (param_2[1] == 0x1c) {
      iVar2 = FUN_005d67b0(param_2,param_1,param_3);
      if (iVar2 == 0) {
        return 0;
      }
      pbVar6 = &DAT_006ac60c;
      pbVar3 = param_1;
      do {
        bVar1 = *pbVar3;
        bVar7 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_005d5e9b:
          iVar2 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_005d5ea0;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar7 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_005d5e9b;
        pbVar3 = pbVar3 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar2 = 0;
LAB_005d5ea0:
      if (iVar2 != 0) {
        FUN_005cf220(0x35,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006ac5d4 + 8,0x79,
                     &DAT_006b3f70,0);
        return 0;
      }
      if (*(int *)(param_1 + 8) == 0xf) {
        return 1;
      }
      FUN_005cf220(0x36,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006ac5d4 + 8,0x7e,
                   &DAT_006b3f70,0);
      return 0;
    }
    uVar4 = 0x72;
    break;
  case 1:
    if (param_2[1] == 0x50) {
      iVar2 = param_2[2];
      *(int *)(param_1 + 0xa0) = iVar2;
      uVar4 = FUN_005cf3b0(iVar2 * 0x50);
      *(undefined4 *)(param_1 + 0x48) = uVar4;
      iVar2 = FUN_005d67b0(param_2,uVar4,param_3);
      if (iVar2 == 0) {
        return 0;
      }
      iVar2 = 0;
      if (*(int *)(param_1 + 0xa0) < 1) {
        return 1;
      }
      iVar5 = 0;
      do {
        iVar2 = iVar2 + 1;
        *(undefined4 *)(iVar5 + 0x4c + *(int *)(param_1 + 0x48)) = 0;
        iVar5 = iVar5 + 0x50;
      } while (iVar2 < *(int *)(param_1 + 0xa0));
      return 1;
    }
    uVar4 = 0x88;
    break;
  case 2:
    if (param_2[1] == 0x2c) {
      iVar2 = param_2[2];
      *(int *)(param_1 + 0xa4) = iVar2;
      uVar4 = FUN_005cf3b0(iVar2 * 0x2c);
      *(undefined4 *)(param_1 + 0x4c) = uVar4;
      iVar2 = FUN_005d67b0(param_2,uVar4,param_3);
      goto LAB_005d6512;
    }
    uVar4 = 0x99;
    break;
  case 3:
    if (param_2[1] == 0xc) {
      iVar2 = param_2[2];
      *(int *)(param_1 + 0xa8) = iVar2;
      if (iVar2 == 0) {
        return 1;
      }
      uVar4 = FUN_005cf3b0(iVar2 * 0xc);
      *(undefined4 *)(param_1 + 0x50) = uVar4;
      iVar2 = FUN_005d67b0(param_2,uVar4,param_3);
      goto LAB_005d6512;
    }
    uVar4 = 0xa7;
    break;
  case 4:
    if (param_2[1] == 0x3c) {
      iVar2 = param_2[2];
      *(int *)(param_1 + 0xac) = iVar2;
      uVar4 = FUN_005cf3b0(iVar2 * 0x3c);
      *(undefined4 *)(param_1 + 0x54) = uVar4;
      iVar2 = FUN_005d67b0(param_2,uVar4,param_3);
      goto LAB_005d6512;
    }
    uVar4 = 0xb8;
    break;
  case 5:
    if (param_2[1] == 4) {
      iVar2 = param_2[2];
      *(int *)(param_1 + 0xb0) = iVar2;
      uVar4 = FUN_005cf3b0(iVar2 * 4);
      *(undefined4 *)(param_1 + 0x58) = uVar4;
      iVar2 = FUN_005d67b0(param_2,uVar4,param_3);
      goto LAB_005d6512;
    }
    uVar4 = 0xc6;
    break;
  case 6:
    if (param_2[1] == 8) {
      iVar2 = param_2[2];
      *(int *)(param_1 + 0xb4) = iVar2;
      uVar4 = FUN_005cf3b0(iVar2 << 3);
      *(undefined4 *)(param_1 + 0x5c) = uVar4;
      iVar2 = FUN_005d67b0(param_2,uVar4,param_3);
      goto LAB_005d6512;
    }
    uVar4 = 0xd5;
    break;
  case 7:
    if (param_2[1] == 8) {
      iVar2 = param_2[2];
      *(int *)(param_1 + 0xb8) = iVar2;
      uVar4 = FUN_005cf3b0(iVar2 * 8);
      *(undefined4 *)(param_1 + 0x60) = uVar4;
      iVar2 = FUN_005d67b0(param_2,uVar4,param_3);
      goto LAB_005d6512;
    }
    uVar4 = 0xe3;
    break;
  case 8:
    if (param_2[1] == 8) {
      iVar2 = param_2[2];
      *(int *)(param_1 + 200) = iVar2;
      uVar4 = FUN_005cf3b0(iVar2 * 8);
      *(undefined4 *)(param_1 + 0x70) = uVar4;
      iVar2 = FUN_005d67b0(param_2,uVar4,param_3);
      goto LAB_005d6512;
    }
    uVar4 = 0x129;
    break;
  case 9:
    if (param_2[1] == 0x10) {
      iVar2 = param_2[2];
      *(int *)(param_1 + 0xf4) = iVar2;
      uVar4 = FUN_005cf3b0(iVar2 << 4);
      *(undefined4 *)(param_1 + 0x9c) = uVar4;
      iVar2 = FUN_005d67b0(param_2,uVar4,param_3);
      goto LAB_005d6512;
    }
    uVar4 = 0xf1;
    break;
  case 10:
    if (param_2[1] == 0x14) {
      iVar2 = param_2[2];
      *(int *)(param_1 + 0xbc) = iVar2;
      uVar4 = FUN_005cf3b0(iVar2 * 0x14);
      *(undefined4 *)(param_1 + 100) = uVar4;
      iVar2 = FUN_005d67b0(param_2,uVar4,param_3);
      goto LAB_005d6512;
    }
    uVar4 = 0xff;
    break;
  case 0xb:
    if (param_2[1] == 0x24) {
      iVar2 = param_2[2];
      *(int *)(param_1 + 0xc0) = iVar2;
      uVar4 = FUN_005cf3b0(iVar2 * 0x24);
      *(undefined4 *)(param_1 + 0x68) = uVar4;
      iVar2 = FUN_005d67b0(param_2,uVar4,param_3);
      goto LAB_005d6512;
    }
    uVar4 = 0x10d;
    break;
  case 0xc:
    if (param_2[1] == 4) {
      iVar2 = param_2[2];
      *(int *)(param_1 + 0xc4) = iVar2;
      uVar4 = FUN_005cf3b0(iVar2 * 4);
      *(undefined4 *)(param_1 + 0x6c) = uVar4;
      iVar2 = FUN_005d67b0(param_2,uVar4,param_3);
      goto LAB_005d6512;
    }
    uVar4 = 0x11b;
    break;
  case 0xd:
    if (param_2[1] == 4) {
      iVar2 = param_2[2];
      *(int *)(param_1 + 0xd0) = iVar2;
      uVar4 = FUN_005cf3b0(iVar2 * 4);
      *(undefined4 *)(param_1 + 0x78) = uVar4;
      iVar2 = FUN_005d67b0(param_2,uVar4,param_3);
      goto LAB_005d6512;
    }
    uVar4 = 0x145;
    break;
  case 0xe:
    if (param_2[1] == 0xc) {
      iVar2 = param_2[2];
      *(int *)(param_1 + 0xcc) = iVar2;
      uVar4 = FUN_005cf3b0(iVar2 * 0xc);
      *(undefined4 *)(param_1 + 0x74) = uVar4;
      iVar2 = FUN_005d67b0(param_2,uVar4,param_3);
      goto LAB_005d6512;
    }
    uVar4 = 0x137;
    break;
  case 0xf:
    if (param_2[1] == 0xc) {
      iVar2 = param_2[2];
      *(int *)(param_1 + 0xd4) = iVar2;
      uVar4 = FUN_005cf3b0(iVar2 * 0xc);
      *(undefined4 *)(param_1 + 0x7c) = uVar4;
      iVar2 = FUN_005d67b0(param_2,uVar4,param_3);
      goto LAB_005d6512;
    }
    uVar4 = 0x155;
    break;
  case 0x10:
    if (param_2[1] == 1) {
      iVar2 = param_2[2];
      *(int *)(param_1 + 0xd8) = iVar2;
      uVar4 = FUN_005cf3b0(iVar2);
      *(undefined4 *)(param_1 + 0x80) = uVar4;
      iVar2 = FUN_005d67b0(param_2,uVar4,param_3);
      goto LAB_005d6512;
    }
    uVar4 = 400;
    break;
  case 0x11:
    if (param_2[1] == 0x40) {
      iVar2 = param_2[2];
      *(int *)(param_1 + 0xe0) = iVar2;
      uVar4 = FUN_005cf3b0(iVar2 << 6);
      *(undefined4 *)(param_1 + 0x88) = uVar4;
      iVar2 = FUN_005d67b0(param_2,uVar4,param_3);
      goto LAB_005d6512;
    }
    uVar4 = 0x164;
    break;
  case 0x12:
    if (param_2[1] == 0x34) {
      iVar2 = param_2[2];
      *(int *)(param_1 + 0xdc) = iVar2;
      uVar4 = FUN_005cf3b0(iVar2 * 0x34);
      *(undefined4 *)(param_1 + 0x84) = uVar4;
      iVar2 = FUN_005d67b0(param_2,uVar4,param_3);
      goto LAB_005d6512;
    }
    uVar4 = 0x173;
    break;
  case 0x13:
    if (param_2[1] == 1) {
      iVar2 = param_2[2];
      *(int *)(param_1 + 0xe4) = iVar2;
      uVar4 = FUN_005cf3b0(iVar2);
      *(undefined4 *)(param_1 + 0x8c) = uVar4;
      iVar2 = FUN_005d67b0(param_2,uVar4,param_3);
      goto LAB_005d6512;
    }
    uVar4 = 0x182;
    break;
  case 0x14:
    if (param_2[1] == 1) {
      iVar2 = param_2[2];
      *(int *)(param_1 + 0xec) = iVar2;
      uVar4 = FUN_005cf3b0(iVar2);
      *(undefined4 *)(param_1 + 0x94) = uVar4;
      iVar2 = FUN_005d67b0(param_2,uVar4,param_3);
      goto LAB_005d6512;
    }
    uVar4 = 0x19e;
    break;
  case 0x15:
    if (param_2[1] == 1) {
      iVar2 = param_2[2];
      *(int *)(param_1 + 0xf0) = iVar2;
      uVar4 = FUN_005cf3b0(iVar2);
      *(undefined4 *)(param_1 + 0x98) = uVar4;
      iVar2 = FUN_005d67b0(param_2,uVar4,param_3);
      goto LAB_005d6512;
    }
    uVar4 = 0x1ac;
    break;
  case 0x16:
    if (param_2[1] == 0x2c) {
      pbVar3 = param_1 + 0x1c;
LAB_005d6508:
      iVar2 = FUN_005d67b0(param_2,pbVar3,param_3);
LAB_005d6512:
      if (iVar2 != 0) {
        return 1;
      }
      return 0;
    }
    uVar4 = 0x1bb;
    break;
  case 0x17:
    if (param_2[1] == 0x300) {
      iVar2 = param_2[2];
      *(int *)(param_1 + 0xe8) = iVar2;
      pbVar3 = (byte *)FUN_005cf3b0(iVar2 * 0x300);
      *(byte **)(param_1 + 0x90) = pbVar3;
      if (pbVar3 == (byte *)0x0) {
        return 0;
      }
      goto LAB_005d6508;
    }
    uVar4 = 0x1c8;
    break;
  case 0x18:
    uVar4 = FUN_005d65a0(param_1,param_3);
    return uVar4;
  default:
    goto switchD_005d5e28_default;
  }
  FUN_005cf220(0x76,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006ac5d4 + 8,uVar4,
               &DAT_006b3f70,0);
switchD_005d5e28_default:
  return 0;
}

