/*
 * FUN_00600dfa at 00600dfa
 * undefined FUN_00600dfa(void)
 * Address ranges: 00600dfa-00600eda
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_00600dfa(uint param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar1 = param_1;
  iVar3 = DAT_0070fffc;
  iVar4 = DAT_0070ffec;
  if (param_2 != (int *)0x0) {
    iVar3 = param_2[1];
    iVar4 = *param_2;
  }
  if (iVar4 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      uVar1 = param_1 - 0x20;
    }
  }
  else {
    if ((int)param_1 < 0x100) {
      if (DAT_006b28bc < 2) {
        uVar2 = (byte)PTR_DAT_006b26b0[param_1 * 2] & 2;
      }
      else {
        uVar2 = FUN_0060e0ee(param_1,2);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_006b26b0[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
      uVar5 = 1;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      uVar5 = 2;
    }
    iVar3 = FUN_0060f2f8(iVar4,0x200,&param_1,uVar5,&param_2,3,iVar3,1);
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        uVar1 = (uint)param_2 & 0xff;
      }
      else {
        uVar1 = (uint)param_2 & 0xffff;
      }
    }
  }
  return uVar1;
}

