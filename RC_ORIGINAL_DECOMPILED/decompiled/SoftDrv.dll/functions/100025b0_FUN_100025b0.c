/*
 * FUN_100025b0 at 100025b0
 * undefined FUN_100025b0(void)
 * Address ranges: 100025b0-100026af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_100025b0(int param_1,int *param_2,int *param_3,uint *param_4,int *param_5,int *param_6,
            uint *param_7,int *param_8,int *param_9,uint *param_10,int *param_11)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar7 = 0;
  iVar6 = 0;
  iVar8 = 0;
  *param_2 = (int)(*(int *)(param_1 + 8) + (*(int *)(param_1 + 8) >> 0x1f & 7U)) >> 3;
  uVar1 = *(uint *)(param_1 + 0x1c);
  uVar2 = *(uint *)(param_1 + 0x20);
  uVar3 = *(uint *)(param_1 + 0x24);
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  iVar5 = 0x1f;
  do {
    uVar4 = 1 << ((byte)iVar5 & 0x1f);
    if ((uVar1 & uVar4) != 0) {
      local_c = iVar5;
    }
    if ((uVar2 & uVar4) != 0) {
      local_8 = iVar5;
    }
    if ((uVar3 & uVar4) != 0) {
      local_4 = iVar5;
    }
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  iVar5 = 0;
  do {
    uVar4 = 1 << ((byte)iVar5 & 0x1f);
    if ((uVar1 & uVar4) != 0) {
      iVar6 = (iVar5 - local_c) + 1;
    }
    if ((uVar2 & uVar4) != 0) {
      iVar8 = (iVar5 - local_8) + 1;
    }
    if ((uVar3 & uVar4) != 0) {
      iVar7 = (iVar5 - local_4) + 1;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x20);
  *param_3 = local_c;
  *param_6 = local_8;
  *param_9 = local_4;
  *param_4 = uVar1;
  *param_7 = uVar2;
  *param_10 = uVar3;
  *param_5 = iVar6;
  *param_8 = iVar8;
  *param_11 = iVar7;
  return 1;
}

