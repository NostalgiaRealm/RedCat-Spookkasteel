/*
 * FUN_00600cb2 at 00600cb2
 * undefined FUN_00600cb2(void)
 * Address ranges: 00600cb2-00600d99
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_00600cb2(uint param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int local_8;
  
  uVar1 = param_1;
  if (param_2 == (int *)0x0) {
    local_8 = DAT_0070ffec;
    iVar4 = DAT_0070fffc;
  }
  else {
    local_8 = *param_2;
    iVar4 = param_2[1];
  }
  if (local_8 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      uVar1 = param_1 + 0x20;
    }
  }
  else {
    uVar3 = 1;
    if ((int)param_1 < 0x100) {
      if (DAT_006b28bc < 2) {
        uVar2 = (byte)PTR_DAT_006b26b0[param_1 * 2] & 1;
      }
      else {
        uVar2 = FUN_0060e0ee(param_1,1);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_006b26b0[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      uVar3 = 2;
    }
    iVar4 = FUN_0060f2f8(local_8,0x100,&param_1,uVar3,&param_2,3,iVar4,1);
    if (iVar4 != 0) {
      if (iVar4 == 1) {
        uVar1 = (uint)param_2 & 0xff;
      }
      else {
        uVar1 = (uint)param_2 & 0xffff;
      }
    }
  }
  return uVar1;
}

