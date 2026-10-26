/*
 * FUN_1000fe40 at 1000fe40
 * undefined FUN_1000fe40(void)
 * Address ranges: 1000fe40-100100b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1000fe40(int param_1)

{
  int iVar1;
  float fVar2;
  bool bVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  int local_2c;
  int local_1c;
  undefined1 local_c [12];
  
  iVar7 = *(int *)(DAT_1014e258 + 0x30 + *(int *)(param_1 + 0x14) * 0x3c);
  iVar1 = *(int *)(DAT_1014e258 + *(int *)(param_1 + 0x14) * 0x3c + 0x2c);
  if ((iVar1 < 0) || (iVar1 = *(int *)(DAT_1014e2d0 + iVar1 * 4), iVar1 < 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
    local_1c = iVar1 + DAT_1014e308;
  }
  local_2c = 0;
  if (0 < DAT_10313034) {
    do {
      if (DAT_1014e350 != 0) {
        (*DAT_1014e35c)(s_Cancel_requested____10036a5c);
        return 0;
      }
      iVar1 = *(int *)(DAT_10313038 + local_2c * 4);
      *(undefined4 *)(DAT_1031302c + local_2c * 4) = 0;
      if (((iVar1 != param_1) &&
          (iVar5 = DAT_1014e258 + *(int *)(iVar1 + 0x14) * 0x3c, *(int *)(iVar5 + 0x30) == iVar7))
         && ((!bVar3 ||
             ((iVar5 = *(int *)(iVar5 + 0x2c), iVar5 < 0 ||
              ((*(byte *)((iVar5 >> 3) + local_1c) & (byte)(1 << ((byte)iVar5 & 7))) != 0)))))) {
        FUN_10014560(local_c);
        fVar8 = (float10)FUN_100144b0();
        if (fVar8 != (float10)0.0) {
          fVar9 = (float10)FUN_100143d0();
          fVar10 = (float10)FUN_100143d0();
          if ((((float10)0.0 < -(fVar10 * (float10)(float)fVar9)) &&
              (iVar5 = FUN_1000a1c0(param_1 + 8,iVar1 + 8,0), iVar5 == 0)) &&
             (fVar2 = ((float)-(fVar10 * (float10)(float)fVar9) * *(float *)(iVar1 + 0x18)) /
                      ((float)fVar8 * (float)fVar8), 0.0 < fVar2)) {
            *(float *)(DAT_1031302c + local_2c * 4) = fVar2;
            DAT_10313028 = DAT_10313028 + 1;
            *(short *)(param_1 + 0x30) = *(short *)(param_1 + 0x30) + 1;
          }
        }
      }
      local_2c = local_2c + 1;
    } while (local_2c < DAT_10313034);
  }
  puVar6 = (undefined2 *)FUN_10014310((uint)*(ushort *)(param_1 + 0x30) << 2);
  *(undefined2 **)(param_1 + 0x34) = puVar6;
  if (puVar6 != (undefined2 *)0x0) {
    iVar7 = 0;
    if (0 < DAT_10313034) {
      do {
        if (*(float *)(DAT_1031302c + iVar7 * 4) != 0.0) {
          *puVar6 = (short)iVar7;
          uVar4 = __ftol();
          puVar6[1] = uVar4;
          puVar6 = puVar6 + 2;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < DAT_10313034);
    }
    return 1;
  }
  (*DAT_1014e358)(s_CalcReceivers__Out_of_memory_for_1003962c);
  return 0;
}

