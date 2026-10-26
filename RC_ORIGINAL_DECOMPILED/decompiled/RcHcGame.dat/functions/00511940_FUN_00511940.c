/*
 * FUN_00511940 at 00511940
 * undefined FUN_00511940(void)
 * Address ranges: 00511940-005119d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_00511940(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  bool bVar8;
  bool bVar9;
  int local_4;
  
  local_4 = 0;
  do {
    if (*(int *)(param_1 + 0x18c) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 400) - *(int *)(param_1 + 0x18c) >> 2;
    }
    if (iVar3 <= local_4) {
      return -1;
    }
    piVar4 = (int *)FUN_005148d0(local_4);
    uVar1 = *(uint *)(*piVar4 + 0x30);
    pbVar5 = *(byte **)(*piVar4 + 0x2c);
    if (pbVar5 == (byte *)0x0) {
      pbVar5 = &DAT_0064a3b4;
    }
    uVar2 = *(uint *)(param_2 + 8);
    uVar6 = uVar2;
    if (uVar1 <= uVar2) {
      uVar6 = uVar1;
    }
    bVar8 = false;
    iVar3 = 0;
    bVar9 = true;
    pbVar7 = *(byte **)(param_2 + 4);
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      bVar8 = *pbVar7 < *pbVar5;
      bVar9 = *pbVar7 == *pbVar5;
      pbVar7 = pbVar7 + 1;
      pbVar5 = pbVar5 + 1;
    } while (bVar9);
    if (!bVar9) {
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
    }
    if (((iVar3 == 0) && (uVar1 <= uVar2)) && (uVar2 == uVar1)) {
      return local_4;
    }
    local_4 = local_4 + 1;
  } while( true );
}

