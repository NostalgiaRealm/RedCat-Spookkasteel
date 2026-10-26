/*
 * FUN_005997e0 at 005997e0
 * undefined FUN_005997e0(void)
 * Address ranges: 005997e0-00599908
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_005997e0(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  int local_c;
  
  iVar5 = 0;
  fVar7 = (float10)FUN_00597fc0(param_3);
  puVar4 = (undefined4 *)(param_1 + 0x34);
  local_c = 8;
  do {
    cVar1 = FUN_0059b1f0();
    if (cVar1 != '\0') {
      FUN_0059df90(*puVar4);
      uVar2 = FUN_00597a00();
      cVar1 = FUN_00599e10(param_4,uVar2);
      if (cVar1 != '\0') {
        fVar8 = (float10)FUN_00597fc0(param_3);
        if (fVar8 < (float10)(float)fVar7) {
          iVar5 = iVar5 + 1;
        }
      }
    }
    puVar4 = puVar4 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  if (0 < iVar5) {
    iVar3 = FUN_0060a4a0();
    local_c = 0;
    puVar4 = (undefined4 *)(param_1 + 0x34);
    iVar6 = 0;
    do {
      cVar1 = FUN_0059b1f0();
      if (cVar1 != '\0') {
        FUN_0059df90(*puVar4);
        uVar2 = FUN_00597a00();
        cVar1 = FUN_00599e10(param_4,uVar2);
        if (cVar1 != '\0') {
          fVar8 = (float10)FUN_00597fc0(param_3);
          if ((fVar8 < (float10)(float)fVar7) &&
             (local_c = local_c + 1, local_c == iVar3 % iVar5 + 1)) {
            *param_2 = *(undefined4 *)(param_1 + 0x34 + iVar6 * 4);
            return param_2;
          }
        }
      }
      iVar6 = iVar6 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar6 < 8);
  }
  FUN_0059b1d0(&DAT_00650084);
  return param_2;
}

