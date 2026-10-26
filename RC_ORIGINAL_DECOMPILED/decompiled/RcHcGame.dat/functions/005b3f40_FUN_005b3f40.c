/*
 * FUN_005b3f40 at 005b3f40
 * undefined FUN_005b3f40(void)
 * Address ranges: 005b3f40-005b3fa8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_005b3f40(int param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  bool bVar6;
  
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      pbVar2 = (byte *)FUN_0059b1e0();
      pbVar4 = param_2;
      if (pbVar2 != (byte *)0x0) {
        do {
          bVar1 = *pbVar2;
          bVar6 = bVar1 < *pbVar4;
          if (bVar1 != *pbVar4) {
LAB_005b3f86:
            iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_005b3f8b;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar6 = bVar1 < pbVar4[1];
          if (bVar1 != pbVar4[1]) goto LAB_005b3f86;
          pbVar2 = pbVar2 + 2;
          pbVar4 = pbVar4 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_005b3f8b:
        if (iVar3 == 0) {
          return *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar5 * 4);
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 8));
  }
  return 0;
}

