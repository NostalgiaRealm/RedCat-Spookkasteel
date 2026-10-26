/*
 * FUN_00466ea0 at 00466ea0
 * uint __register FUN_00466ea0(byte * param_1, int param_2, uint param_3, longlong param_4)
 * Address ranges: 00466ea0-00466f2a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_00466ea0(byte *param_1,int param_2,uint param_3,longlong param_4)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  
  *param_1 = (byte)param_2;
  param_1[1] = (byte)param_3;
  iVar6 = param_3 - 4;
  if (iVar6 != 0) {
    iVar4 = param_2;
    if (param_3 < 4) {
      param_4 = (longlong)ROUND((float)param_4 / *(float *)(&DAT_00570738 + iVar6 * 4));
    }
    else {
      do {
        param_2 = iVar4 + -1;
        (&stack0xffffffbb)[iVar4] = 0;
        iVar6 = iVar6 + -1;
        iVar4 = param_2;
      } while (iVar6 != 0);
    }
  }
  if (param_4 < 0) {
    bVar8 = (uint)param_4 != 0;
    param_4._0_4_ = -(uint)param_4;
    param_4._4_4_ = -(uint)bVar8 - param_4._4_4_;
    param_1[1] = param_1[1] | 0x80;
  }
  do {
    uVar5 = 0;
    uVar3 = param_4._4_4_;
    if ((uint)param_4 != 0 || param_4._4_4_ != 0) {
      uVar7 = 0;
      if (param_4._4_4_ != 0) {
        uVar3 = param_4._4_4_ / 10;
        uVar7 = param_4._4_4_ % 10;
      }
      uVar1 = CONCAT44(uVar7,(uint)param_4);
      param_4._0_4_ = (uint)(uVar1 / 10);
      uVar5 = (undefined1)(uVar1 % 10);
    }
    (&stack0xffffffbb)[param_2] = uVar5;
    param_2 = param_2 + -1;
    param_4._4_4_ = uVar3;
  } while (param_2 != 0);
  uVar7 = ((uint)param_4 | uVar3) & 0xffffff00;
  if (((uint)param_4 | uVar3) == 0) {
    uVar3 = *param_1 + 1 >> 1;
    do {
      bVar2 = (byte)((ushort)*(undefined2 *)(&stack0xffffffba + uVar3 * 2) >> 8);
      param_1[uVar3 + 1] = (char)*(undefined2 *)(&stack0xffffffba + uVar3 * 2) << 4 | bVar2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
    uVar7 = CONCAT31((uint3)bVar2,1);
  }
  return uVar7;
}

