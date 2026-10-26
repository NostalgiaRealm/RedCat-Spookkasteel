/*
 * FUN_00439c70 at 00439c70
 * undefined FUN_00439c70(void)
 * Address ranges: 00439c70-00439cab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_00439c70(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  if (param_2 >= 0.0) {
    param_2 = param_2 + *(float *)(param_1 + 0x40);
    *(float *)(param_1 + 0x40) = param_2;
    fVar1 = DAT_006b58b0;
    fVar2 = (float)(uint)(ushort)((ushort)(param_2 < DAT_006b58b0) << 8 |
                                  (ushort)(NAN(param_2) || NAN(DAT_006b58b0)) << 10 |
                                 (ushort)(param_2 == DAT_006b58b0) << 0xe);
    if (param_2 < DAT_006b58b0 == 0 && (param_2 == DAT_006b58b0) == 0) {
      *(float *)(param_1 + 0x40) = DAT_006b58b0;
      fVar2 = fVar1;
    }
    return CONCAT31((int3)((uint)fVar2 >> 8),1);
  }
  return (uint)(ushort)((ushort)(param_2 < 0.0) << 8 | (ushort)NAN(param_2) << 10 |
                       (ushort)(param_2 == 0.0) << 0xe);
}

