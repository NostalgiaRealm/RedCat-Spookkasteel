/*
 * FUN_004381f4 at 004381f4
 * undefined __register FUN_004381f4(int * param_1, int param_2, undefined4 param_3)
 * Address ranges: 004381f4-004382c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004381f4(int *param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  
  *(undefined4 *)(param_2 + 0xc) = 1;
  bVar1 = FUN_00438160(param_1,param_2,param_3);
  if (bVar1) {
    return;
  }
  if ((*(byte *)(param_1 + 8) & 0x10) != 0) goto LAB_004382c1;
  iVar2 = FUN_00433700((int)param_1,0xb02e,(uint)*(ushort *)(param_2 + 4),param_1);
  if (iVar2 != 0) {
    return;
  }
  uVar5 = 0;
  uVar3 = (uint)*(ushort *)(param_2 + 4);
  if (uVar3 < 0x1c) {
    if ((uVar3 == 0x1b) || (uVar3 == 3)) {
LAB_00438271:
      uVar5 = 4;
    }
    else if (uVar3 == 9) {
      uVar5 = 2;
    }
    else if (uVar3 == 0xd) goto LAB_00438271;
  }
  else if (uVar3 - 0x25 < 4) {
    uVar5 = 1;
  }
  else if (uVar3 == 0x2b) goto LAB_00438271;
  if (((uVar5 != 0) &&
      (iVar2 = FUN_00433700((int)param_1,0xb01e,(uint)*(ushort *)(param_2 + 4),0), iVar2 == 0)) &&
     (uVar3 = FUN_00433700((int)param_1,0x87,0,0), (uVar3 & uVar5) == 0)) {
    uVar6 = *(undefined4 *)(param_2 + 8);
    piVar4 = FUN_0044879c(param_1);
    iVar2 = FUN_00433700((int)piVar4,0xb005,(uint)*(ushort *)(param_2 + 4),uVar6);
    if (iVar2 != 0) {
      return;
    }
  }
LAB_004382c1:
  *(undefined4 *)(param_2 + 0xc) = 0;
  return;
}

