/*
 * FUN_100332c0 at 100332c0
 * undefined FUN_100332c0(void)
 * Address ranges: 100332c0-1003338f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_100332c0(byte *param_1,byte *param_2)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  
  iVar2 = _DAT_1052a75c;
  if (DAT_1052a5d8 == 0) {
    bVar5 = 0xff;
    do {
      do {
        if (bVar5 == 0) {
          return '\0';
        }
        bVar5 = *param_2;
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        param_1 = param_1 + 1;
      } while (bVar4 == bVar5);
      bVar3 = bVar5 + 0xbf + (-((byte)(bVar5 + 0xbf) < 0x1a) & 0x20U) + 0x41;
      bVar4 = bVar4 + 0xbf;
      bVar5 = bVar4 + (-(bVar4 < 0x1a) & 0x20U) + 0x41;
    } while (bVar5 == bVar3);
    cVar6 = (bVar5 < bVar3) * -2 + '\x01';
  }
  else {
    LOCK();
    _DAT_1052a75c = _DAT_1052a75c + 1;
    UNLOCK();
    bVar1 = 0 < DAT_1052a758;
    if (bVar1) {
      LOCK();
      UNLOCK();
      _DAT_1052a75c = iVar2;
      FUN_1002e819(0x13);
    }
    uVar7 = (uint)bVar1;
    bVar5 = 0xff;
    do {
      do {
        cVar6 = '\0';
        if (bVar5 == 0) goto LAB_1003336f;
        bVar5 = *param_2;
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        param_1 = param_1 + 1;
      } while (bVar5 == bVar4);
      bVar4 = FUN_1003077e(bVar4,bVar5);
      bVar5 = FUN_1003077e();
    } while (bVar4 == bVar5);
    cVar6 = (bVar4 < bVar5) * -2 + '\x01';
LAB_1003336f:
    if (uVar7 == 0) {
      LOCK();
      _DAT_1052a75c = _DAT_1052a75c + -1;
      UNLOCK();
    }
    else {
      FUN_1002e87a(0x13);
    }
  }
  return cVar6;
}

