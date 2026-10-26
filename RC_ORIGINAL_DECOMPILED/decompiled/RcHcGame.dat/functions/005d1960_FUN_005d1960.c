/*
 * FUN_005d1960 at 005d1960
 * undefined FUN_005d1960(void)
 * Address ranges: 005d1960-005d19d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_005d1960(undefined4 param_1,byte *param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  bool bVar7;
  
  iVar2 = FUN_0059b1e0();
  iVar6 = 0;
  if (0 < iVar2) {
    do {
      pbVar3 = (byte *)FUN_005d1b10();
      pbVar5 = param_2;
      do {
        bVar1 = *pbVar5;
        bVar7 = bVar1 < *pbVar3;
        if (bVar1 != *pbVar3) {
LAB_005d19a9:
          iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_005d19ae;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar7 = bVar1 < pbVar3[1];
        if (bVar1 != pbVar3[1]) goto LAB_005d19a9;
        pbVar5 = pbVar5 + 2;
        pbVar3 = pbVar3 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_005d19ae:
      if (iVar4 == 0) {
        *param_3 = iVar6;
        return 1;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar2);
  }
  return 0;
}

