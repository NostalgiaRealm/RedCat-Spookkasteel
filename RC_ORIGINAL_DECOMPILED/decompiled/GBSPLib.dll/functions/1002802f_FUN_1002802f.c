/*
 * FUN_1002802f at 1002802f
 * undefined FUN_1002802f(void)
 * Address ranges: 1002802f-100280fd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 FUN_1002802f(double param_1)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  undefined4 uVar5;
  
  uVar2 = FUN_1002b2f0(DAT_1003cab0,0xffff);
  if ((param_1._6_2_ & 0x7ff0) == 0x7ff0) {
    iVar3 = FUN_1002b1b8();
    if (0 < iVar3) {
      if (iVar3 < 3) {
        FUN_1002b2f0(uVar2,0xffff);
        return (float10)param_1;
      }
      if (iVar3 == 3) {
        fVar4 = (float10)FUN_1002aac5();
        return fVar4;
      }
    }
    dVar1 = param_1 + 1.0;
    uVar5 = 8;
  }
  else {
    fVar4 = (float10)__frnd(SUB84(param_1,0),(int)((ulonglong)param_1 >> 0x20));
    dVar1 = (double)fVar4;
    if ((dVar1 == param_1) || ((uVar2 & 0x20) != 0)) {
      FUN_1002b2f0(uVar2,0xffff);
      return (float10)dVar1;
    }
    uVar5 = 0x10;
  }
  fVar4 = (float10)FUN_1002ab19(uVar5,0xc,param_1,dVar1,uVar2);
  return fVar4;
}

