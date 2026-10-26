/*
 * FUN_10005980 at 10005980
 * undefined __cdecl FUN_10005980(short * param_1, int param_2, int param_3)
 * Address ranges: 10005980-10005a70
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10005980(short *param_1,int param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  short sVar3;
  int *piVar4;
  ushort *puVar5;
  int iVar6;
  int unaff_EBX;
  int *unaff_EBP;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  undefined4 local_7c [4];
  ushort *puStack_6c;
  
  sVar3 = *param_1;
  pbVar9 = *(byte **)(param_1 + param_3 * 2 + 6);
  iVar7 = (int)param_1[1];
  piVar4 = *(int **)(&DAT_101c3678 + param_2 * 0x14);
  puVar10 = local_7c;
  for (iVar6 = 0x1f; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  local_7c[0] = 0x7c;
  (**(code **)(*piVar4 + 100))(piVar4,0,local_7c,1,0);
  if (0 < iVar7) {
    do {
      puVar5 = puStack_6c;
      iVar6 = unaff_EBX;
      if (0 < unaff_EBX) {
        do {
          bVar2 = *pbVar9;
          pbVar1 = pbVar9 + 1;
          pbVar8 = pbVar9 + 2;
          puStack_6c = puVar5 + 1;
          pbVar9 = pbVar9 + 3;
          iVar6 = iVar6 + -1;
          *puVar5 = *(ushort *)(&DAT_10027ec4 + *pbVar8) | *(ushort *)(&DAT_10027ac4 + *pbVar1) |
                    *(ushort *)(&DAT_100276c4 + bVar2);
          puVar5 = puStack_6c;
        } while (iVar6 != 0);
      }
      iVar7 = iVar7 + -1;
      puStack_6c = puStack_6c + ((1 << ((byte)param_2 & 0x1f)) - (int)sVar3);
    } while (iVar7 != 0);
  }
  (**(code **)(*unaff_EBP + 0x80))(unaff_EBP,0);
  return;
}

