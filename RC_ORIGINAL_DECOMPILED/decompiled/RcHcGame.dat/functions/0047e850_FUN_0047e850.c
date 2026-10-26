/*
 * FUN_0047e850 at 0047e850
 * undefined FUN_0047e850(void)
 * Address ranges: 0047e850-0047ea63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0047e850(int param_1,undefined4 param_2)

{
  float10 fVar1;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
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
    if (*(int *)(param_1 + 0x50) + -1 <= *(int *)(param_1 + 0x54)) {
      FUN_005b2fe0(local_30);
      FUN_005b2f20();
      fVar1 = (float10)FUN_00409e30(param_2);
      fVar1 = fVar1 * (float10)0.5;
      if ((float10)1.0 < fVar1) {
        fVar1 = (float10)1.0;
      }
      FUN_005b2fa0((float)((float10)1.0 - fVar1));
      fVar1 = (float10)FUN_005b2fd0();
      if (fVar1 < (float10)0.5) {
        *(undefined1 *)(param_1 + 0x7a) = 0;
      }
    }
    FUN_005b2fe0(local_30);
    fVar1 = (float10)FUN_005b2f20();
    if ((fVar1 < (float10)*(float *)(param_1 + 0xc4)) &&
       (*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0x50) + -1)) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
    }
    fVar1 = (float10)0.006 * fVar1 * fVar1;
    *(float *)(param_1 + 0x3c) = (float)fVar1;
    if ((float10)200.0 < fVar1) {
      *(undefined4 *)(param_1 + 0x3c) = 0x43480000;
    }
    FUN_005b2fa0(*(undefined4 *)(param_1 + 0x3c));
    local_3c = *(undefined4 *)(param_1 + 0x10);
    local_38 = *(undefined4 *)(param_1 + 0x14);
    local_34 = *(undefined4 *)(param_1 + 0x18);
    fVar1 = (float10)FUN_00409e30(param_2);
    FUN_005b2fa0((float)(fVar1 * (float10)32.0));
    FUN_005b3000(&local_3c);
    local_24 = *(undefined4 *)(param_1 + 4);
    local_20 = *(undefined4 *)(param_1 + 8);
    local_1c = *(undefined4 *)(param_1 + 0xc);
    fVar1 = (float10)FUN_00409e30(param_2);
    FUN_005b2fa0((float)fVar1);
    FUN_005b3000(&local_18);
    fVar1 = (float10)FUN_005b2fd0();
    if ((float10)75.0 < fVar1) {
      FUN_005b2fa0((float)((float10)1.0 / (fVar1 / (float10)75.0)));
    }
    *(undefined4 *)(param_1 + 0x10) = local_3c;
    *(undefined4 *)(param_1 + 0x14) = local_38;
    *(undefined4 *)(param_1 + 0x18) = local_34;
    *(undefined4 *)(param_1 + 4) = local_18;
    *(undefined4 *)(param_1 + 8) = local_14;
    *(undefined4 *)(param_1 + 0xc) = local_10;
  }
  return;
}

