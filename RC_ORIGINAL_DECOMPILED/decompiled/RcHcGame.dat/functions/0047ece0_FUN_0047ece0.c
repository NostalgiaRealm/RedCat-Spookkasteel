/*
 * FUN_0047ece0 at 0047ece0
 * undefined FUN_0047ece0(void)
 * Address ranges: 0047ece0-0047eefd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0047ece0(int param_1,undefined4 param_2)

{
  float *pfVar1;
  int iVar2;
  float10 fVar3;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined1 local_30 [12];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if (*(char *)(param_1 + 0x6c) != '\0') {
    if (*(char *)(param_1 + 0x5c) == '\0') {
      *(undefined1 *)(param_1 + 0x6c) = 0;
      return;
    }
    *(undefined4 *)(param_1 + 0xc4) = 0x41a00000;
    pfVar1 = (float *)(*(int *)(param_1 + 0x4c) + -0xc + *(int *)(param_1 + 0x50) * 0xc);
    local_3c = *pfVar1 + 14.0;
    local_34 = pfVar1[2];
    local_38 = pfVar1[1] + 14.0;
    FUN_005b2fe0(local_30);
    fVar3 = (float10)FUN_005b2f20();
    if (fVar3 < (float10)*(float *)(param_1 + 0xc4)) {
      FUN_005b2fe0(local_30);
      fVar3 = (float10)FUN_005b2f20();
    }
    fVar3 = (float10)0.006 * fVar3 * fVar3;
    *(float *)(param_1 + 0x3c) = (float)fVar3;
    if ((float10)200.0 < fVar3) {
      *(undefined4 *)(param_1 + 0x3c) = 0x43480000;
    }
    FUN_005b2fa0(*(undefined4 *)(param_1 + 0x3c));
    iVar2 = FUN_0060a4a0();
    *(float *)(param_1 + 0x48) =
         ((float)(iVar2 % 10000) * 0.0005 + *(float *)(param_1 + 0x48)) - 2.5;
    iVar2 = FUN_0060a4a0();
    local_48 = *(undefined4 *)(param_1 + 0x10);
    local_44 = *(undefined4 *)(param_1 + 0x14);
    local_40 = *(undefined4 *)(param_1 + 0x18);
    *(float *)(param_1 + 0x40) =
         ((float)(iVar2 % 10000) * 0.0003 + *(float *)(param_1 + 0x40)) - 1.5;
    fVar3 = (float10)FUN_00409e30(param_2);
    FUN_005b2fa0((float)(fVar3 * (float10)32.0));
    FUN_005b3000(&local_48);
    local_24 = *(undefined4 *)(param_1 + 4);
    local_20 = *(undefined4 *)(param_1 + 8);
    local_1c = *(undefined4 *)(param_1 + 0xc);
    fVar3 = (float10)FUN_00409e30(param_2);
    FUN_005b2fa0((float)fVar3);
    FUN_005b3000(&local_18);
    fVar3 = (float10)FUN_005b2fd0();
    if ((float10)75.0 < fVar3) {
      FUN_005b2fa0((float)((float10)1.0 / (fVar3 / (float10)75.0)));
    }
    *(undefined4 *)(param_1 + 0x10) = local_48;
    *(undefined4 *)(param_1 + 0x14) = local_44;
    *(undefined4 *)(param_1 + 0x18) = local_40;
    *(undefined4 *)(param_1 + 4) = local_18;
    *(undefined4 *)(param_1 + 8) = local_14;
    *(undefined4 *)(param_1 + 0xc) = local_10;
  }
  return;
}

