/*
 * FUN_005bbf30 at 005bbf30
 * undefined FUN_005bbf30(void)
 * Address ranges: 005bbf30-005bbfd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005bbf30(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 local_4;
  
  iVar2 = *(int *)(param_1 + 0x33678);
  iVar3 = *(int *)(param_2 + 0x18);
  local_4 = 1;
  FUN_005b8630(param_1);
  FUN_005b8670(param_2);
  FUN_005b86b0(*(undefined4 *)(param_2 + 0x18));
  iVar6 = 0;
  if (0 < *(int *)(iVar3 + 0x188)) {
    iVar5 = 0;
    do {
      iVar1 = *(int *)(iVar3 + 0x1c0) + iVar5;
      if (((*(int *)(*(int *)(iVar3 + 0x1c0) + 0x14 + iVar5) != -1) &&
          ((*(byte *)(iVar1 + 0x84) & 4) != 0)) && (*(int *)(iVar1 + 0x18) != 0)) {
        iVar4 = (**(code **)(iVar2 + 0x38))();
        if (iVar4 == 0) {
          local_4 = 0;
        }
        *(undefined4 *)(iVar1 + 0x18) = 0;
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 0x88;
    } while (iVar6 < *(int *)(iVar3 + 0x188));
    return local_4;
  }
  return 1;
}

