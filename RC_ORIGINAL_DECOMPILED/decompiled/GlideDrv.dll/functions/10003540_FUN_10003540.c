/*
 * FUN_10003540 at 10003540
 * undefined __cdecl FUN_10003540(short * param_1, int param_2, undefined4 * param_3, int param_4)
 * Address ranges: 10003540-100035f9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10003540(short *param_1,int param_2,undefined4 *param_3,int param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  short *psVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
  int local_808;
  short local_800 [1024];
  
  local_808 = (int)param_1[1];
  iVar8 = (int)*param_1;
  pbVar4 = *(byte **)(param_1 + param_4 * 2 + 6);
  psVar6 = local_800;
  if (0 < local_808) {
    do {
      iVar5 = 0;
      psVar7 = psVar6;
      iVar9 = iVar8;
      if (0 < iVar8) {
        do {
          bVar3 = *pbVar4;
          pbVar1 = pbVar4 + 1;
          psVar7 = psVar6 + 1;
          pbVar2 = pbVar4 + 2;
          pbVar4 = pbVar4 + 3;
          iVar9 = iVar9 + -1;
          *psVar6 = ((ushort)(bVar3 >> 3) * 0x40 + (ushort)(*pbVar1 >> 2)) * 0x20 +
                    (ushort)(*pbVar2 >> 3);
          iVar5 = iVar8;
          psVar6 = psVar7;
        } while (iVar9 != 0);
      }
      psVar6 = psVar7 + (param_2 - iVar5);
      local_808 = local_808 + -1;
    } while (local_808 != 0);
  }
  iVar8 = FUN_100016a0(param_3);
  *(short **)(iVar8 + 0x10) = local_800;
  FUN_10001280(DAT_101f5534,(int)param_3,iVar8);
  return;
}

