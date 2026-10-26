/*
 * FUN_10004c80 at 10004c80
 * undefined4 __cdecl FUN_10004c80(int param_1, int param_2, int param_3)
 * Address ranges: 10004c80-10004e6c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_10004c80(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int local_8;
  undefined4 *local_4;
  
  FUN_10004a60(param_1);
  FUN_10005450(*(int *)(param_1 + 0x108));
LAB_10004ca6:
  local_4 = (undefined4 *)0x0;
  piVar6 = (int *)(param_1 + 0x110);
  local_8 = 0;
LAB_10004cb4:
  if (((0 < piVar6[5]) && (piVar6[0x26] < piVar6[5])) &&
     (piVar6[0x26] < *(int *)(param_2 + *piVar6 * 4))) {
    if (piVar6[0x25] == 0) {
      puVar2 = _malloc(piVar6[5] * 0xa4);
      piVar6[0x25] = (int)puVar2;
      for (uVar4 = piVar6[5] * 0x29 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined1 *)puVar2 = 0;
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      }
    }
    iVar5 = piVar6[2];
    iVar1 = piVar6[1];
    if ((param_3 != 0) &&
       (iVar3 = FUN_10005480(*(int *)(param_1 + 0x108),((uint)piVar6[0x1b] >> 3) * iVar5 * iVar1),
       iVar3 == 0)) goto LAB_10004dfd;
    puVar2 = (undefined4 *)(piVar6[0x25] + piVar6[0x26] * 0x18);
    *puVar2 = puVar2;
    puVar2[1] = piVar6;
    iVar5 = FUN_10004e70(param_1,puVar2,iVar1,iVar5,piVar6 + 6,*(int *)(param_1 + 0x10c),piVar6[4]);
    if (iVar5 == 0) goto LAB_10004dca;
    if (iVar5 == -1) {
      FUN_100020f0(s_D3DCache_AdjustSlots__D3DCache_S_10015360);
      return 0;
    }
    piVar6[0x26] = piVar6[0x26] + 1;
    local_4 = puVar2;
  }
  piVar6 = piVar6 + 0x29;
  local_8 = local_8 + 1;
  if (0x7f < local_8) goto LAB_10004dd3;
  goto LAB_10004cb4;
LAB_10004dca:
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
LAB_10004dd3:
  if (local_4 == (undefined4 *)0x0) {
LAB_10004dfd:
    iVar5 = 0;
    piVar6 = (int *)(param_1 + 0x1a8);
    while ((piVar6[-0x21] < 1 || (0 < *piVar6))) {
      iVar5 = iVar5 + 1;
      piVar6 = piVar6 + 0x29;
      if (0x7f < iVar5) {
        FUN_10004b10(param_1,s_D3DCache_Log_10015350,DAT_10038ea4);
        DAT_10038ea4 = 1;
        return 1;
      }
    }
    FUN_100020f0(s_D3DCache_AdjustSlots__Out_of_ram_10015310);
    FUN_100020f0(s_D3DCache_AdjustSlots__Pick_a_dis_100152c8);
    return 0;
  }
  goto LAB_10004ca6;
}

