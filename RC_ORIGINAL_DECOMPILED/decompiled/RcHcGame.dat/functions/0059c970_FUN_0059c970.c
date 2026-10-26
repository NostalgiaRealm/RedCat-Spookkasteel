/*
 * FUN_0059c970 at 0059c970
 * undefined FUN_0059c970(void)
 * Address ranges: 0059c970-0059ca07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_0059c970(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  bool bVar11;
  bool bVar12;
  
  (**(code **)**(undefined4 **)(param_1 + 0x1c))();
  cVar4 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x18))();
  do {
    if (cVar4 == '\0') {
      return 0;
    }
    puVar5 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x1c) + 0x20))();
    uVar1 = *puVar5;
    iVar6 = FUN_00597fa0();
    uVar2 = *(uint *)(param_2 + 8);
    pbVar10 = &DAT_0064a3b4;
    if (*(byte **)(param_2 + 4) != (byte *)0x0) {
      pbVar10 = *(byte **)(param_2 + 4);
    }
    uVar3 = *(uint *)(iVar6 + 8);
    uVar8 = uVar3;
    if (uVar2 <= uVar3) {
      uVar8 = uVar2;
    }
    bVar11 = false;
    iVar7 = 0;
    bVar12 = true;
    pbVar9 = *(byte **)(iVar6 + 4);
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      bVar11 = *pbVar9 < *pbVar10;
      bVar12 = *pbVar9 == *pbVar10;
      pbVar9 = pbVar9 + 1;
      pbVar10 = pbVar10 + 1;
    } while (bVar12);
    if (!bVar12) {
      iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
    }
    if (((iVar7 == 0) && (uVar2 <= uVar3)) && (uVar3 == uVar2)) {
      return uVar1;
    }
    (**(code **)(**(int **)(param_1 + 0x1c) + 8))();
    cVar4 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x18))();
  } while( true );
}

