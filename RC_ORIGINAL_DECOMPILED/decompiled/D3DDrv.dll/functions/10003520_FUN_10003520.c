/*
 * FUN_10003520 at 10003520
 * undefined __cdecl FUN_10003520(int param_1, int * param_2)
 * Address ranges: 10003520-10003625
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10003520(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_1c;
  int local_18;
  int local_14;
  
  uVar1 = *(uint *)(param_1 + 0x58);
  uVar2 = *(uint *)(param_1 + 0x5c);
  uVar3 = *(uint *)(param_1 + 0x60);
  uVar4 = *(uint *)(param_1 + 100);
  iVar6 = 0x1f;
  do {
    uVar5 = 1 << ((byte)iVar6 & 0x1f);
    if ((uVar1 & uVar5) != 0) {
      param_1 = iVar6;
    }
    if ((uVar2 & uVar5) != 0) {
      local_1c = iVar6;
    }
    if ((uVar3 & uVar5) != 0) {
      local_18 = iVar6;
    }
    if ((uVar4 & uVar5) != 0) {
      local_14 = iVar6;
    }
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  iVar7 = 0;
  iVar6 = param_1;
  iVar8 = param_1;
  iVar9 = param_1;
  iVar10 = param_1;
  do {
    uVar5 = 1 << ((byte)iVar7 & 0x1f);
    if ((uVar1 & uVar5) != 0) {
      iVar8 = (iVar7 - param_1) + 1;
    }
    if ((uVar2 & uVar5) != 0) {
      iVar10 = (iVar7 - local_1c) + 1;
    }
    if ((uVar3 & uVar5) != 0) {
      iVar9 = (iVar7 - local_18) + 1;
    }
    if ((uVar4 & uVar5) != 0) {
      iVar6 = (iVar7 - local_14) + 1;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x20);
  *param_2 = param_1;
  param_2[1] = local_1c;
  param_2[2] = local_18;
  param_2[3] = local_14;
  param_2[4] = uVar1;
  param_2[9] = iVar10;
  param_2[5] = uVar2;
  param_2[10] = iVar9;
  param_2[7] = uVar4;
  param_2[8] = iVar8;
  param_2[6] = uVar3;
  param_2[0xb] = iVar6;
  return;
}

