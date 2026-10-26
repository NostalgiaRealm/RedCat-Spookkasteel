/*
 * FUN_005bd700 at 005bd700
 * undefined FUN_005bd700(void)
 * Address ranges: 005bd700-005bd775
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_005bd700(int param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  bool bVar6;
  
  if ((((*(int *)(param_1 + 0xc) == 2) && (param_2 != (byte *)0x0)) && (*(int *)(param_1 + 8) == 1))
     && (iVar5 = 0, 0 < *(int *)(param_1 + 0x10))) {
    do {
      pbVar2 = (byte *)FUN_005d1b10();
      pbVar4 = param_2;
      do {
        bVar1 = *pbVar4;
        bVar6 = bVar1 < *pbVar2;
        if (bVar1 != *pbVar2) {
LAB_005bd753:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_005bd758;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar6 = bVar1 < pbVar2[1];
        if (bVar1 != pbVar2[1]) goto LAB_005bd753;
        pbVar4 = pbVar4 + 2;
        pbVar2 = pbVar2 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_005bd758:
      if (iVar3 == 0) {
        return *(undefined4 *)(*(int *)(param_1 + 0x20) + iVar5 * 4);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x10));
  }
  return 0;
}

