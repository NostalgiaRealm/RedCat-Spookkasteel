/*
 * FUN_005b9f30 at 005b9f30
 * undefined FUN_005b9f30(void)
 * Address ranges: 005b9f30-005ba155
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005b9f30(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  puVar3 = param_2 + 4;
  param_1[0xd8] = *param_2;
  param_1[0xd9] = param_2[1];
  param_1[0xda] = param_2[2];
  param_1[0xdb] = param_2[3];
  param_1[0xdc] = param_2[10];
  puVar4 = param_1 + 0xdd;
  iVar5 = 6;
  do {
    uVar2 = *puVar3;
    puVar3 = puVar3 + 1;
    *puVar4 = uVar2;
    puVar4 = puVar4 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  FUN_005b2e20(0,0,0);
  iVar5 = FUN_005b2ec0(0x3d4ccccd);
  if (iVar5 != 0) {
    FUN_005b2e20(0x3f800000,0,0);
  }
  *param_1 = 0xc59c4000;
  param_1[1] = 0x459c4000;
  param_1[2] = 0x459c4000;
  param_1[3] = 0x459c4000;
  param_1[4] = 0x459c4000;
  param_1[5] = 0x459c4000;
  param_1[6] = 0x459c4000;
  param_1[7] = 0x459c4000;
  param_1[8] = 0xc59c4000;
  param_1[9] = 0xc59c4000;
  param_1[10] = 0x459c4000;
  param_1[0xb] = 0xc59c4000;
  param_1[0xc] = 0xc59c4000;
  param_1[0xd] = 0xc59c4000;
  param_1[0xe] = 0xc59c4000;
  param_1[0xf] = 0x459c4000;
  param_1[0x10] = 0xc59c4000;
  param_1[0x11] = 0xc59c4000;
  param_1[0x12] = 0x459c4000;
  param_1[0x13] = 0xc59c4000;
  param_1[0x14] = 0x459c4000;
  param_1[0x15] = 0xc59c4000;
  param_1[0x16] = 0xc59c4000;
  param_1[0x17] = 0x459c4000;
  param_1[0x18] = 0xc59c4000;
  param_1[0x19] = 0x459c4000;
  param_1[0x1a] = 0x459c4000;
  param_1[0x1b] = 0xc59c4000;
  param_1[0x1c] = 0x459c4000;
  param_1[0x1d] = 0xc59c4000;
  param_1[0x1e] = 0xc59c4000;
  param_1[0x1f] = 0xc59c4000;
  param_1[0x20] = 0xc59c4000;
  param_1[0x21] = 0xc59c4000;
  param_1[0x22] = 0xc59c4000;
  param_1[0x23] = 0x459c4000;
  param_1[0x24] = 0x459c4000;
  param_1[0x25] = 0x459c4000;
  param_1[0x26] = 0xc59c4000;
  param_1[0x27] = 0x459c4000;
  param_1[0x28] = 0x459c4000;
  param_1[0x29] = 0x459c4000;
  param_1[0x2a] = 0x459c4000;
  param_1[0x2b] = 0xc59c4000;
  param_1[0x2c] = 0x459c4000;
  param_1[0x2d] = 0x459c4000;
  param_1[0x2e] = 0xc59c4000;
  param_1[0x2f] = 0xc59c4000;
  param_1[0x30] = 0xc59c4000;
  param_1[0x31] = 0x459c4000;
  param_1[0x32] = 0xc59c4000;
  param_1[0x33] = 0x459c4000;
  param_1[0x34] = 0x459c4000;
  param_1[0x35] = 0xc59c4000;
  param_1[0x36] = 0x459c4000;
  param_1[0x37] = 0xc59c4000;
  param_1[0x38] = 0xc59c4000;
  param_1[0x39] = 0xc59c4000;
  param_1[0x3a] = 0xc59c4000;
  param_1[0x3b] = 0xc59c4000;
  param_1[0x3c] = 0x459c4000;
  param_1[0x3d] = 0x459c4000;
  param_1[0x3e] = 0x459c4000;
  param_1[0x3f] = 0xc59c4000;
  param_1[0x40] = 0x459c4000;
  param_1[0x41] = 0x459c4000;
  param_1[0x42] = 0xc59c4000;
  param_1[0x43] = 0xc59c4000;
  param_1[0x44] = 0x459c4000;
  param_1[0x45] = 0x459c4000;
  param_1[0x46] = 0xc59c4000;
  param_1[0x47] = 0x459c4000;
  uVar2 = param_1[0xdc];
  uVar1 = param_1[0xdc];
  param_1 = param_1 + 0x4e;
  iVar5 = 6;
  do {
    param_1[-6] = 0;
    param_1[-5] = 0;
    *param_1 = uVar2;
    param_1[1] = 0;
    param_1[0xc] = 0;
    param_1[6] = uVar2;
    param_1[7] = uVar1;
    param_1[0xd] = uVar1;
    param_1 = param_1 + 0x18;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return 1;
}

