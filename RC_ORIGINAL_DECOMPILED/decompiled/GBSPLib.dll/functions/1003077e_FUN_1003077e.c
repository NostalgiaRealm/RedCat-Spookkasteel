/*
 * FUN_1003077e at 1003077e
 * undefined FUN_1003077e(void)
 * Address ranges: 1003077e-10030848
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1003077e(uint param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint local_8;
  
  uVar1 = param_1;
  if (DAT_1052a5d8 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      uVar1 = param_1 + 0x20;
    }
  }
  else {
    uVar3 = 1;
    if ((int)param_1 < 0x100) {
      if (DAT_1003d32c < 2) {
        uVar2 = (byte)PTR_DAT_1003d120[param_1 * 2] & 1;
      }
      else {
        uVar2 = FUN_1002c371(param_1,1);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_1003d120[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      uVar3 = 2;
    }
    iVar4 = FUN_10032532(DAT_1052a5d8,0x100,&param_1,uVar3,&local_8,3,0,1);
    if (iVar4 != 0) {
      if (iVar4 == 1) {
        uVar1 = local_8 & 0xff;
      }
      else {
        uVar1 = local_8 & 0xffff;
      }
    }
  }
  return uVar1;
}

