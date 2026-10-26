/*
 * FUN_005d38a0 at 005d38a0
 * undefined FUN_005d38a0(void)
 * Address ranges: 005d38a0-005d3985
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005d38a0(int *param_1,byte *param_2,int param_3,ushort *param_4)

{
  int iVar1;
  ushort *puVar2;
  byte *pbVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int local_4;
  
  iVar1 = DAT_006cefd4 + 0x3504c;
  local_4 = param_3 * (int)param_4;
  param_4 = (ushort *)(DAT_006cefd4 + 0x34f98);
  iVar6 = 0;
  if (0 < local_4) {
    do {
      uVar4 = *param_4;
      iVar5 = iVar6 + 1;
      puVar2 = param_4 + 1;
      if (7 < iVar5) {
        iVar5 = iVar6 + -6;
        puVar2 = param_4 + -6;
      }
      param_4 = puVar2;
      uVar4 = uVar4 >> 2;
      if (0x1e < uVar4) {
        uVar4 = 0x1e;
      }
      param_3._0_1_ = (byte)uVar4;
      iVar6 = (uint)(byte)param_3 * 0x100;
      *param_1 = *param_1 + (uint)*(byte *)((uint)*param_2 + iVar6 + iVar1) * 0x100;
      pbVar3 = param_2 + 2;
      param_1[1] = param_1[1] + (uint)*(byte *)((uint)param_2[1] + iVar6 + iVar1) * 0x100;
      param_2 = param_2 + 3;
      param_1[2] = param_1[2] + (uint)*(byte *)((uint)*pbVar3 + iVar6 + iVar1) * 0x100;
      local_4 = local_4 + -1;
      param_1 = param_1 + 3;
      iVar6 = iVar5;
    } while (local_4 != 0);
  }
  return;
}

