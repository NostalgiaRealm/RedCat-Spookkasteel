/*
 * FUN_005c4e50 at 005c4e50
 * undefined FUN_005c4e50(void)
 * Address ranges: 005c4e50-005c4f17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_005c4e50(int *param_1)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int local_8;
  int local_4;
  
  if (*param_1 < 1) {
    return 0;
  }
  iVar3 = *param_1 + -1;
  *param_1 = iVar3;
  if (iVar3 == 0) {
    if (((param_1[4] != 0) && (-1 < param_1[6])) && (param_1[6] < param_1[3])) {
      iVar3 = param_1[7];
      if ((iVar3 != 0) || (iVar3 = param_1[10], iVar3 != 0)) {
        local_8 = iVar3;
      }
      iVar3 = FUN_005c6a40();
      pcVar1 = *(code **)(iVar3 + 0x4c);
      pcVar2 = *(code **)(iVar3 + 0x50);
      iVar3 = 0;
      if (0 < param_1[3]) {
        do {
          local_4 = local_8;
          uVar4 = (*pcVar1)(&local_8);
          if (iVar3 == param_1[6]) {
            uVar4 = param_1[5];
LAB_005c4edf:
            (*pcVar2)(&local_4,uVar4);
          }
          else if (uVar4 == param_1[5]) {
            uVar4 = uVar4 ^ 1;
            goto LAB_005c4edf;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < param_1[3]);
      }
    }
    if (param_1[9] != 0) {
      iVar3 = (**(code **)(param_1[8] + 0x40))();
      if (iVar3 == 0) {
        return 0;
      }
      param_1[10] = 0;
    }
  }
  return 1;
}

