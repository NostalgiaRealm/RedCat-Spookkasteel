/*
 * FUN_10004710 at 10004710
 * bool __cdecl FUN_10004710(byte * param_1, int * param_2)
 * Address ranges: 10004710-10004793
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __cdecl FUN_10004710(byte *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined3 extraout_var;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  bool bVar8;
  
  iVar7 = 0;
  iVar2 = *param_2;
  if (0 < iVar2) {
    pbVar4 = (byte *)(param_2[1] + 0x14);
    pbVar6 = param_1;
    pbVar5 = pbVar4;
LAB_1000472c:
    do {
      bVar1 = *pbVar4;
      bVar8 = bVar1 < *pbVar6;
      if (bVar1 == *pbVar6) {
        if (bVar1 != 0) {
          bVar1 = pbVar4[1];
          bVar8 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_10004750;
          pbVar4 = pbVar4 + 2;
          pbVar6 = pbVar6 + 2;
          if (bVar1 != 0) goto LAB_1000472c;
        }
        iVar3 = 0;
      }
      else {
LAB_10004750:
        iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      }
      if (iVar3 == 0) break;
      iVar7 = iVar7 + 1;
      pbVar4 = pbVar5 + 0x414;
      pbVar6 = param_1;
      pbVar5 = pbVar4;
    } while (iVar7 < iVar2);
  }
  if (iVar7 != iVar2) {
    bVar8 = FUN_100046b0((int *)(param_2[1] + iVar7 * 0x414));
    return CONCAT31(extraout_var,bVar8) != 0;
  }
  return false;
}

