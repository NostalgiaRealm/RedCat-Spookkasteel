/*
 * FUN_00439bf0 at 00439bf0
 * undefined FUN_00439bf0(void)
 * Address ranges: 00439bf0-00439c6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_00439bf0(int param_1,float param_2,undefined4 param_3,char param_4)

{
  float fVar1;
  undefined4 in_EAX;
  undefined4 uVar2;
  uint uVar3;
  
  if (0.0 <= param_2) {
    param_2 = param_2 + *(float *)(param_1 + 0x3c);
    *(float *)(param_1 + 0x3c) = param_2;
    fVar1 = *(float *)(param_1 + 0x40);
    uVar2 = CONCAT22((short)((uint)in_EAX >> 0x10),
                     (ushort)(param_2 < fVar1) << 8 | (ushort)(NAN(param_2) || NAN(fVar1)) << 10 |
                     (ushort)(param_2 == fVar1) << 0xe);
    if (param_2 < fVar1 == 0 && (param_2 == fVar1) == 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x40);
      *(undefined4 *)(param_1 + 0x3c) = uVar2;
    }
    return CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  uVar3 = FUN_00594890();
  if ((char)uVar3 == '\0') {
    uVar3 = FUN_00402d10();
    if ((char)uVar3 == '\0') goto LAB_00439c44;
  }
  if (param_4 == '\0') {
    return uVar3 & 0xffffff00;
  }
LAB_00439c44:
  param_2 = param_2 + *(float *)(param_1 + 0x3c);
  *(float *)(param_1 + 0x3c) = param_2;
  if (param_2 < 0.0 != 0) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  return CONCAT31((int3)(CONCAT22((short)(uVar3 >> 0x10),
                                  (ushort)(param_2 < 0.0) << 8 | (ushort)NAN(param_2) << 10 |
                                  (ushort)(param_2 == 0.0) << 0xe) >> 8),1);
}

