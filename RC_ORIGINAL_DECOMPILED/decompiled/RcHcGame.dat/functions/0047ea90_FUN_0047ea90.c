/*
 * FUN_0047ea90 at 0047ea90
 * undefined FUN_0047ea90(void)
 * Address ranges: 0047ea90-0047ecd9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0047ea90(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  float10 fVar4;
  float local_f8;
  undefined1 local_f0 [36];
  float local_cc;
  float local_c8;
  undefined4 local_c4;
  undefined1 local_30 [48];
  
  if (*(char *)(param_1 + 0x6c) != '\0') {
    iVar1 = *(int *)(param_1 + 0xec);
    bVar3 = true;
    if (iVar1 != -1) {
      iVar2 = *(int *)(param_1 + 0xf0);
      if (iVar2 == -1) {
        *(undefined4 *)(param_1 + 0xf4) = 0x3f800000;
        *(int *)(param_1 + 0xf0) = iVar1 + param_2;
      }
      else if (iVar2 < param_2) {
        *(undefined4 *)(param_1 + 0xf4) = 0;
        bVar3 = false;
      }
      else if (iVar1 < 1) {
        *(undefined4 *)(param_1 + 0xf4) = 0;
      }
      else {
        *(float *)(param_1 + 0xf4) = (float)(iVar2 - param_2) / (float)iVar1;
      }
    }
    *(bool *)(param_1 + 0xf8) = bVar3;
    if (bVar3) {
      local_f8 = *(float *)(param_1 + 0x104) * *(float *)(param_1 + 0xf4) +
                 (1.0 - *(float *)(param_1 + 0xf4)) * *(float *)(param_1 + 0x108);
    }
    else {
      local_f8 = *(float *)(param_1 + 0x108);
      *(undefined1 *)(param_1 + 0x7a) = 0;
    }
    fVar4 = (float10)FUN_00409e30(param_3);
    *(float *)(param_1 + 0x10c) =
         (float)(fVar4 * (float10)*(float *)(param_1 + 0x110) + (float10)*(float *)(param_1 + 0x10c)
                );
    FUN_005b30c0();
    FUN_005b30c0();
    FUN_005b30c0();
    FUN_005b30c0();
    FUN_005b30c0();
    iVar1 = *(int *)(param_1 + 0x114);
    local_cc = 0.0;
    local_c8 = 0.0;
    local_c4 = 0;
    if (iVar1 == 0) {
      FUN_005b30f0(*(undefined4 *)(param_1 + 0x10c));
      local_c8 = local_f8;
    }
    else if (iVar1 == 1) {
      FUN_005b3130(*(undefined4 *)(param_1 + 0x10c));
      local_cc = local_f8;
    }
    else if (iVar1 == 2) {
      FUN_005b3170(*(undefined4 *)(param_1 + 0x10c));
      local_cc = local_f8;
    }
    else {
      FUN_005b3130(*(undefined4 *)(param_1 + 0x10c));
      local_cc = local_f8;
    }
    FUN_005b32c0(local_f0);
    FUN_005b30f0(*(undefined4 *)(param_1 + 0x124));
    FUN_005b30f0(*(undefined4 *)(param_1 + 0x128));
    FUN_005b32c0(local_30);
    FUN_005b32c0(local_f0);
    FUN_005b3280(*(undefined4 *)(param_1 + 0x118),*(undefined4 *)(param_1 + 0x11c),
                 *(undefined4 *)(param_1 + 0x120));
    *(float *)(param_1 + 4) = local_cc;
    *(float *)(param_1 + 8) = local_c8;
    *(undefined4 *)(param_1 + 0xc) = local_c4;
  }
  return;
}

