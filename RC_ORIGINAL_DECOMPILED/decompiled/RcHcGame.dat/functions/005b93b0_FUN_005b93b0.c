/*
 * FUN_005b93b0 at 005b93b0
 * undefined FUN_005b93b0(void)
 * Address ranges: 005b93b0-005b953a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b93b0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  short *psVar5;
  undefined *puVar6;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = *(int *)(DAT_006cc420 + 0x68) + *(int *)(param_2 + 4) * 0x24;
  puVar4 = (undefined4 *)(*(int *)(iVar1 + 0x10) * 0x40 + *(int *)(DAT_006cc420 + 0x88));
  psVar5 = (short *)(DAT_006cc408 + *(int *)(param_2 + 4) * 0x88);
  FUN_005d40f0(*(undefined4 *)(DAT_006cc40c + 0x1c8),puVar4[0xf]);
  *(undefined4 *)(param_2 + 0x2c) = puVar4[0xd];
  local_10 = *(undefined4 *)(psVar5 + 0x38);
  local_c = *(undefined4 *)(psVar5 + 0x3a);
  local_8 = puVar4[8];
  local_4 = puVar4[9];
  _DAT_00722860 = *puVar4;
  _DAT_00722864 = puVar4[1];
  puVar6 = &DAT_007228f8;
  _DAT_00722868 = puVar4[2];
  _DAT_0072286c = puVar4[3];
  _DAT_00722870 = puVar4[4];
  _DAT_00722874 = puVar4[5];
  _DAT_00722888 = puVar4[6];
  _DAT_0072288c = puVar4[7];
  puVar2 = (undefined4 *)(*(int *)(DAT_006cc420 + 100) + *(int *)(iVar1 + 8) * 0x14);
  _DAT_007228e8 = *puVar2;
  _DAT_007228ec = puVar2[1];
  _DAT_007228f0 = puVar2[2];
  _DAT_007228f4 = *(undefined4 *)(*(int *)(DAT_006cc420 + 100) + 0xc + *(int *)(iVar1 + 8) * 0x14);
  FUN_0059be40(&DAT_007228f8);
  FUN_005b35b0(puVar6);
  if ((puVar4[10] & 0x8000) == 0) {
    _DAT_00722878 = *(undefined4 *)(psVar5 + 2);
    _DAT_0072287c = *(undefined4 *)(psVar5 + 4);
    _DAT_00722880 = (int)*psVar5 << 4;
    _DAT_00722884 = (int)psVar5[1] << 4;
    uVar3 = FUN_00453600();
  }
  else {
    uVar3 = FUN_00453600();
    psVar5 = (short *)0x0;
  }
  (**(code **)(DAT_006cc410 + 0x7c))(uVar3,&local_10,psVar5,3);
  return;
}

