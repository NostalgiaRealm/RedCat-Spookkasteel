/*
 * FUN_00581750 at 00581750
 * undefined FUN_00581750(void)
 * Address ranges: 00581750-00581893
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00581750(float *param_1)

{
  int iVar1;
  uint uVar2;
  float local_10;
  float local_c;
  float local_8;
  
  do {
    iVar1 = FUN_0060a4a0();
    local_10 = (float)(iVar1 % 10000) * 0.0245 + 10.0;
    iVar1 = FUN_0060a4a0();
    local_c = (float)(iVar1 % 10000) * 0.0245 + 10.0;
    iVar1 = FUN_0060a4a0();
    local_8 = (float)(iVar1 % 10000) * 0.0245 + 10.0;
    uVar2 = FUN_0060a4a0();
    uVar2 = uVar2 & 0x80000003;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
    }
    if (uVar2 == 0) {
      local_10 = local_10 + local_10;
    }
    else if (uVar2 == 1) {
      local_c = local_c + local_c;
    }
    else if (uVar2 == 2) {
      local_8 = local_8 + local_8;
    }
    if (255.0 < local_10) {
      local_10 = 255.0;
    }
    if (255.0 < local_c) {
      local_c = 255.0;
    }
    if (255.0 < local_8) {
      local_8 = 255.0;
    }
  } while (local_8 + local_c + local_10 < 255.0);
  *param_1 = local_10;
  param_1[1] = local_c;
  param_1[2] = local_8;
  param_1[3] = 255.0;
  return;
}

