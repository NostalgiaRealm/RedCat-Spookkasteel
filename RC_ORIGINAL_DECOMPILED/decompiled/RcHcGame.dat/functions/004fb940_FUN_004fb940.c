/*
 * FUN_004fb940 at 004fb940
 * undefined FUN_004fb940(void)
 * Address ranges: 004fb940-004fb9e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_004fb940(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  bool bVar8;
  bool bVar9;
  int local_4;
  
  local_4 = 0;
  do {
    if (*(int *)(param_1 + 0x42c) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x430) - *(int *)(param_1 + 0x42c) >> 4;
    }
    if (iVar3 <= local_4) {
      FUN_00444d70(*(undefined4 *)(param_1 + 0x430),1,param_2);
      return 1;
    }
    iVar3 = FUN_004fe250(local_4);
    uVar1 = *(uint *)(param_2 + 8);
    pbVar7 = &DAT_0064a3b4;
    if (*(byte **)(param_2 + 4) != (byte *)0x0) {
      pbVar7 = *(byte **)(param_2 + 4);
    }
    uVar2 = *(uint *)(iVar3 + 8);
    uVar5 = uVar2;
    if (uVar1 <= uVar2) {
      uVar5 = uVar1;
    }
    bVar8 = false;
    iVar4 = 0;
    bVar9 = true;
    pbVar6 = *(byte **)(iVar3 + 4);
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      bVar8 = *pbVar6 < *pbVar7;
      bVar9 = *pbVar6 == *pbVar7;
      pbVar6 = pbVar6 + 1;
      pbVar7 = pbVar7 + 1;
    } while (bVar9);
    if (!bVar9) {
      iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
    }
    if (((iVar4 == 0) && (uVar1 <= uVar2)) && (uVar2 == uVar1)) {
      return 0;
    }
    local_4 = local_4 + 1;
  } while( true );
}

