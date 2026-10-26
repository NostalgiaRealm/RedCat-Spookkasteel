/*
 * FUN_10004dc0 at 10004dc0
 * undefined FUN_10004dc0(void)
 * Address ranges: 10004dc0-10005203
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10004dc0(int *param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  bool bVar5;
  undefined *puVar6;
  
  iVar2 = FUN_10014a00(0xc);
  if (iVar2 != 1) {
    return 0;
  }
  iVar2 = *param_1;
  if (0xffff < iVar2) {
    return 0;
  }
  if (iVar2 == 0xffff) {
    return 1;
  }
  switch(iVar2) {
  case 0:
    iVar2 = FUN_10004da0(param_1,&DAT_1014e260,param_2);
    if (iVar2 == 0) {
      return 0;
    }
    pbVar4 = &DAT_10036d34;
    pbVar3 = (byte *)&DAT_1014e260;
    do {
      bVar1 = *pbVar3;
      bVar5 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_10004e3b:
        iVar2 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_10004e40;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar5 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_10004e3b;
      pbVar3 = pbVar3 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar2 = 0;
LAB_10004e40:
    if (iVar2 != 0) {
      return 0;
    }
    if (DAT_1014e268 != 0xf) {
      return 0;
    }
    return 1;
  case 1:
    DAT_1014e2c8 = param_1[2];
    DAT_1014e284 = FUN_10014310(DAT_1014e2c8 * 0x50);
    iVar2 = FUN_10004da0(param_1,DAT_1014e284,param_2);
    break;
  case 2:
    DAT_1014e2ec = param_1[2];
    DAT_1014e298 = FUN_10014310(DAT_1014e2ec * 0x2c);
    iVar2 = FUN_10004da0(param_1,DAT_1014e298,param_2);
    break;
  case 3:
    DAT_1014e2d8 = param_1[2];
    DAT_1014e28c = FUN_10014310(DAT_1014e2d8 * 0xc);
    iVar2 = FUN_10004da0(param_1,DAT_1014e28c,param_2);
    break;
  case 4:
    DAT_1014e290 = param_1[2];
    DAT_1014e258 = FUN_10014310(DAT_1014e290 * 0x3c);
    iVar2 = FUN_10004da0(param_1,DAT_1014e258,param_2);
    break;
  case 5:
    DAT_1014e2e4 = param_1[2];
    DAT_1014e2d0 = FUN_10014310(DAT_1014e2e4 * 4);
    iVar2 = FUN_10004da0(param_1,DAT_1014e2d0,param_2);
    break;
  case 6:
    DAT_1014e2a4 = param_1[2];
    DAT_1014e250 = FUN_10014310(DAT_1014e2a4 << 3);
    iVar2 = FUN_10004da0(param_1,DAT_1014e250,param_2);
    break;
  case 7:
    DAT_1014e2dc = param_1[2];
    DAT_1014e294 = FUN_10014310(DAT_1014e2dc * 8);
    iVar2 = FUN_10004da0(param_1,DAT_1014e294,param_2);
    break;
  case 8:
    DAT_1014e2a0 = param_1[2];
    DAT_1014e2ac = FUN_10014310(DAT_1014e2a0 * 8);
    iVar2 = FUN_10004da0(param_1,DAT_1014e2ac,param_2);
    break;
  case 9:
    DAT_1014e300 = param_1[2];
    DAT_1014e2d4 = FUN_10014310(DAT_1014e300 << 4);
    iVar2 = FUN_10004da0(param_1,DAT_1014e2d4,param_2);
    break;
  case 10:
    DAT_1014e280 = param_1[2];
    DAT_1014e2e8 = FUN_10014310(DAT_1014e280 * 0x14);
    iVar2 = FUN_10004da0(param_1,DAT_1014e2e8,param_2);
    break;
  case 0xb:
    DAT_1014e2c0 = param_1[2];
    DAT_1014e288 = FUN_10014310(DAT_1014e2c0 * 0x24);
    iVar2 = FUN_10004da0(param_1,DAT_1014e288,param_2);
    break;
  case 0xc:
    DAT_1014e29c = param_1[2];
    DAT_1014e2b8 = FUN_10014310(DAT_1014e29c * 4);
    iVar2 = FUN_10004da0(param_1,DAT_1014e2b8,param_2);
    break;
  case 0xd:
    DAT_1014e27c = param_1[2];
    DAT_1014e314 = FUN_10014310(DAT_1014e27c * 4);
    iVar2 = FUN_10004da0(param_1,DAT_1014e314,param_2);
    break;
  case 0xe:
    DAT_1014e2a8 = param_1[2];
    DAT_1014e248 = FUN_10014310(DAT_1014e2a8 * 0xc);
    iVar2 = FUN_10004da0(param_1,DAT_1014e248,param_2);
    break;
  case 0xf:
    DAT_1014e30c = param_1[2];
    DAT_1014e2f8 = FUN_10014310(DAT_1014e30c * 0xc);
    iVar2 = FUN_10004da0(param_1,DAT_1014e2f8,param_2);
    break;
  case 0x10:
    DAT_1014e2cc = param_1[2];
    DAT_1014e2f4 = FUN_10014310(DAT_1014e2cc);
    iVar2 = FUN_10004da0(param_1,DAT_1014e2f4,param_2);
    break;
  case 0x11:
    DAT_1014e2bc = param_1[2];
    DAT_1014e2fc = FUN_10014310(DAT_1014e2bc << 6);
    iVar2 = FUN_10004da0(param_1,DAT_1014e2fc,param_2);
    break;
  case 0x12:
    DAT_1014e318 = param_1[2];
    DAT_1014e2c4 = FUN_10014310(DAT_1014e318 * 0x34);
    iVar2 = FUN_10004da0(param_1,DAT_1014e2c4,param_2);
    break;
  case 0x13:
    DAT_1014e310 = param_1[2];
    DAT_1014e2b4 = FUN_10014310(DAT_1014e310);
    iVar2 = FUN_10004da0(param_1,DAT_1014e2b4,param_2);
    break;
  case 0x14:
    DAT_1014e2e0 = param_1[2];
    DAT_1014e254 = FUN_10014310(DAT_1014e2e0);
    iVar2 = FUN_10004da0(param_1,DAT_1014e254,param_2);
    break;
  case 0x15:
    DAT_1014e2b0 = param_1[2];
    DAT_1014e308 = FUN_10014310(DAT_1014e2b0);
    iVar2 = FUN_10004da0(param_1,DAT_1014e308,param_2);
    break;
  case 0x16:
    puVar6 = &DAT_1014e320;
    goto LAB_100051c6;
  case 0x17:
    DAT_1014e24c = param_1[2];
    DAT_1014e304 = (undefined *)FUN_10014310(DAT_1014e24c * 0x300);
    puVar6 = DAT_1014e304;
    if (DAT_1014e304 == (undefined *)0x0) {
      return 0;
    }
LAB_100051c6:
    iVar2 = FUN_10004da0(param_1,puVar6,param_2);
    break;
  case 0x18:
    DAT_1014e2f0 = param_1[2];
    DAT_1014e34c = FUN_10014310(DAT_1014e2f0);
    iVar2 = FUN_10004da0(param_1,DAT_1014e34c,param_2);
    if (iVar2 != 0) {
      return 1;
    }
  default:
    return 0;
  }
  if (iVar2 != 0) {
    return 1;
  }
  return 0;
}

