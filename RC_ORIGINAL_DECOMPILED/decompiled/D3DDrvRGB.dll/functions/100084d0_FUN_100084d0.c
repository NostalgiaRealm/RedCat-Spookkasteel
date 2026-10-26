/*
 * FUN_100084d0 at 100084d0
 * undefined __cdecl FUN_100084d0(ushort * param_1, int param_2)
 * Address ranges: 100084d0-10008580
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_100084d0(ushort *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  pbVar9 = *(byte **)(param_1 + param_2 * 2 + 6);
  iVar3 = *(int *)(param_1 + 0xc);
  iVar6 = (int)(short)*param_1;
  bVar1 = *(byte *)(iVar3 + 0x11);
  iVar4 = (int)(short)param_1[1];
  FUN_10007560(iVar3,0);
  iVar5 = iVar6;
  do {
    do {
      bVar2 = *pbVar9;
      pbVar7 = pbVar9 + 1;
      pbVar8 = pbVar9 + 2;
      pbVar9 = pbVar9 + 3;
      *param_1 = (ushort)(&DAT_1001bedc)[bVar2] | (ushort)(&DAT_1001c2dc)[*pbVar7] |
                 (ushort)(&DAT_1001c6dc)[*pbVar8];
      param_1 = param_1 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    param_1 = param_1 + ((1 << (bVar1 & 0x1f)) - iVar6);
    iVar4 = iVar4 + -1;
    iVar5 = iVar6;
  } while (iVar4 != 0);
  FUN_100075d0(iVar3,0);
  return;
}

