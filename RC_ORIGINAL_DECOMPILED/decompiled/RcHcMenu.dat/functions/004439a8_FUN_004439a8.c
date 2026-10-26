/*
 * FUN_004439a8 at 004439a8
 * undefined __register FUN_004439a8(int * param_1, undefined4 param_2, int param_3)
 * Address ranges: 004439a8-00443ac9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004439a8(int *param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar5;
  undefined *puStackY_40;
  uint **ppuVar6;
  int *piVar7;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_14;
  uint *local_10;
  int local_c;
  undefined4 local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_14 = 0;
  local_10 = (uint *)0x0;
  puStack_28 = &LAB_00443aca;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  bVar1 = false;
  local_c = param_3;
  local_8 = param_2;
  iVar2 = FUN_00404030(*param_1);
  if (0 < iVar2) {
    iVar4 = 1;
    do {
      uVar3 = (uint)*(byte *)(*param_1 + -1 + iVar4);
      if (((byte)PTR_DAT_005725fc[(int)uVar3 >> 3] >> (uVar3 & 7) & 1) != 0) {
        bVar1 = true;
        break;
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (bVar1) {
    ppuVar6 = &local_10;
    iVar2 = FUN_00404030(*param_1);
    uVar5 = iVar2 + -2 == 0;
    FUN_00404238(*param_1,iVar2 + -2,3,(int *)ppuVar6);
    FUN_00404140(local_10,(uint *)&DAT_00443ae0);
    if ((bool)uVar5) {
      piVar7 = &local_14;
      iVar2 = FUN_00404030(*param_1);
      FUN_00404238(*param_1,1,iVar2 - 3,piVar7);
      puStackY_40 = &DAT_00443b04;
      FUN_004040f0(param_1,6);
    }
    else {
      puStackY_40 = &DAT_00443b04;
      FUN_004040f0(param_1,5);
    }
  }
  else if (local_c != 0) {
    FUN_004042c0((undefined4 *)&DAT_00443af8,param_1,local_c);
  }
  *in_FS_OFFSET = puStackY_40;
  FUN_00403dd4(&local_14,2);
  return;
}

